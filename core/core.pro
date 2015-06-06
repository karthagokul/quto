TEMPLATE = lib
TARGET = ../../libs/qutocore

HEADERS += \
    logger.h \
    application.h \
    coreobject.h \
    eventmanager.h \
    eventinterface.h \
    pluginloader.h \
    private/applicationprivate.h \
    servicerunner.h \
    service.h

SOURCES += \
    logger.cpp \
    application.cpp \
    coreobject.cpp \
    eventmanager.cpp \
    pluginloader.cpp \
    private/applicationprivate.cpp \
    servicerunner.cpp \
    service.cpp
