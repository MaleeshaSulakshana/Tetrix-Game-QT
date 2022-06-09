QT       += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    main.cpp \
    tetrixboard.cpp \
    tetrixpiece.cpp \
    tetrixwindow.cpp

HEADERS += \
    tetrixboard.h \
    tetrixpiece.h \
    tetrixwindow.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
