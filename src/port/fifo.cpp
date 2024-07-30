#include "fifo.h"

#include "stdio.h"
#include "string.h"

FIFO::FIFO()
{
    pStart = buffData;
    pEnd = buffData;
    pBuffMax = buffData + sizeof( buffData );
    pBuffMin = buffData;

    overflow = false;
    memset(buffData,0,sizeof(buffData));
}
void FIFO::clean()
{
    pStart = buffData;
    pEnd = buffData;
    pBuffMax = buffData + sizeof( buffData );
    pBuffMin = buffData;

    overflow = false;
    memset(buffData,0,sizeof(buffData));//2020-6-19 22:30:05
}
FIFO::~FIFO()
{
}
unsigned  char FIFO::back()
{
    if( pEnd > buffData )
        return *(pEnd - 1 );
    else
        return *buffData;
}
unsigned  char* FIFO::front()
{
    return pStart;
}


int FIFO::available()
{
    if( pEnd >= pStart )
        /* when pEnd >= pStart, it means all available data at pStart to pEnd */
    {
        if( overflow )
            /* at overflow, pStart always equal pEnd */
        {
            return sizeof( buffData );
        }
        else
        {
            return pEnd - pStart;
        }
    }
    else
        /* when pEnd < pStart, it means all available data are outside pStart to pEnd*/
    {
        return sizeof( buffData ) - ( pStart - pEnd );
    }
}
int FIFO::getFreeSize()
{
    if (overflow)
        return 0;
    else
    {
        if( pEnd >= pStart )
        {
            return sizeof(buffData) - (pEnd - pStart );
        }
        else
        {
            return pStart - pEnd;
        }

    }
}
int FIFO::writeToBuff(unsigned  char *data, int len)
{
    if (len >= getFreeSize())
        overflow = true;
    if (buffData + sizeof(buffData) - pEnd > len)
    {
        memcpy(pEnd, data, len);
        pEnd = pEnd + len;
        if (overflow)
            pStart = pEnd;
        return len;
    }
    else
    {
        int remainingLen = buffData + sizeof(buffData) - pEnd;
        memcpy(pEnd, data, remainingLen);
        pEnd = buffData;
        memcpy(pEnd, data + remainingLen, len - remainingLen);
        pEnd = buffData + (len - remainingLen);
        if (overflow)
            pStart = pEnd;
        return len;
    }
}
int FIFO::readFromBuff( unsigned  char *data, int len, bool iSThrowData )
{
    if (available() >= len)
    {
        if (pBuffMax - pStart >= len)
        {
            memcpy(data, pStart, len);
            if (iSThrowData)
            {
                pStart += len;
                overflow = false;
            }
            return len;
        }
        else
        {
            int remaining = pBuffMax - pStart;
            memcpy(data, pStart, remaining);
            memcpy(data + remaining, pBuffMin, len - remaining);
            if (iSThrowData)
            {
                pStart = pBuffMin + (len - remaining);
                overflow = false;
            }
            return len;
        }
    }
    else
    {
        return 0;
    }
}
int FIFO::pushData(unsigned  char *data, int len)
{
    if (len > getFreeSize())
    {
        overflow = true;
        writeToBuff( data, len);
        pStart = pEnd;
    }
    else
    {
        writeToBuff(data,len);
    }
    return len;
}
int FIFO::pushData( int data )
{
    return pushData( (unsigned  char *) &data, 4 );

}
int FIFO::pickData( unsigned  char *data, int len)
{
    return readFromBuff(data, len, false);
}
int FIFO::popData(unsigned  char *data, int len)
{
    return readFromBuff(data,len,true);
}
int FIFO::popData( int *data )
{
    return popData( (unsigned  char *) data, 4 );
}
void FIFO::displayData() {

    unsigned  char buff[sizeof(buffData)];

    memset( buff,0, sizeof(buff));

    pickData(buff, available());

    printf("Overflow:%d\tAvailable:%d\tData:%s\r\n",overflow ? 1 : 0, available(), buff);
}
