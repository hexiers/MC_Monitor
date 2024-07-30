#ifndef FIFO_H
#define FIFO_H

#include <QObject>



/* fifo buff for data receive */
class FIFO
{
private:
    /* buff */
    unsigned  char buffData[256];
    /* valid data start and end piont */
    unsigned  char *pStart, *pEnd;
    /* start and end piont of buff */
    unsigned  char * pBuffMax, *pBuffMin;
    /* overflow flag */
    /* true: data buff has overflowed */
    bool overflow;
    /* get free size of buff */
    int getFreeSize();
    /* write data to buff */
    int writeToBuff(unsigned  char *, int);
    /* read data from buff */
    /* bool: true */
    int readFromBuff(unsigned  char *, int, bool);

public:
    /* data to fifo */
    int pushData(unsigned  char * data, int len);
    int pushData( int data );
    /* get data from fifo */
    int popData( unsigned  char * data, int len);
    int popData( int * data);
    int pickData( unsigned  char *, int );
    int available();
    /* set fifo clean  */
    void clean();
    void displayData();
    unsigned  char back();
    unsigned  char* front();


    FIFO();
    ~FIFO();
};




#endif // FIFO_H
