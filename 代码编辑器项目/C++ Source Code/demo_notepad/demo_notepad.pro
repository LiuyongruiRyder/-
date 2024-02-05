QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


qtHaveModule(printsupport): QT+=printsupport

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialoglogin.cpp \
    email.cpp \
    main.cpp \
    mainwindow.cpp \
    myfilesystemmodel.cpp \
    myfindui.cpp \
    myhighlighter.cpp \
    mytestedit.cpp \
    select_open.cpp

HEADERS += \
    dialoglogin.h \
    email.h \
    mainwindow.h \
    myfilesystemmodel.h \
    myfindui.h \
    myhighlighter.h \
    mytestedit.h \
    select_open.h

FORMS += \
    dialoglogin.ui \
    email.ui \
    mainwindow.ui \
    myfindui.ui \
    mytestedit.ui \
    select_open.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    code.qrc \
    images.qrc \
    images2.qrc \
    lan.qrc

DISTFILES +=

RC_ICONS = images/favicon.ico

