# spok
#  front end for stuf like espeak
# front end for espeak


# THIS IS GPL2 ,LIKE THE REST
# READ GPL2.H


CONFIG += debug
MYNAME = spok

UI_DIR = tmp/ui
MOC_DIR = tmp/moc
RCC_DIR = tmp/rcc





QT += widgets

FORMS= \
    ui/spok.ui

HEADERS= \
    src/spok.h

INCLUDEPAT+=
    src

SOURCES += \
    src/main.cpp \
    src/spok.cpp

HEADERS += \
    src/gpl2.h \
    src/spok.h
