#ifndef VERSION_H
#define VERSION_H

#define MAIN_VERSION        0.1

#define SOFTWARE_NAME       "Motor Control Desk"
#define COPYRIGHT           "Copyleft 2022,HEXER"

#define _STR_(s)            #s
#define __STR(s)            _STR_(s)

#define BUILD_VERSION       _STR_(11)
#define SOFTWARE_VERSION    __STR(MAIN_VERSION)

#if QT_NO_DEBUG
#define SOFTWARE_TITLE      (SOFTWARE_NAME " V" SOFTWARE_VERSION)
#else
#define SOFTWARE_TITLE      (SOFTWARE_NAME " V" SOFTWARE_VERSION \
                            " (Build " BUILD_VERSION "-Debug)")
#endif



#endif // VERSION_H
