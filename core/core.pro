TEMPLATE = lib
CONFIG += static
TARGET = ../libs/qutocore

HEADERS += \
    logger.h \
    application.h \
    coreobject.h \
    eventmanager.h \
    eventinterface.h \
    pluginloader.h \
    private/applicationprivate.h \
    servicerunner.h \
    service.h \
    propertybank.h \
    private/propertybankprivate.h \
    basedomain.h \
    popupmanager.h

SOURCES += \
    logger.cpp \
    application.cpp \
    coreobject.cpp \
    eventmanager.cpp \
    pluginloader.cpp \
    private/applicationprivate.cpp \
    servicerunner.cpp \
    service.cpp \
    propertybank.cpp \
    private/propertybankprivate.cpp \
    popupmanager.cpp

OTHER_FILES += \
    ../guilab/QutoLabel.qml \
    ../guilab/QutoPage.qml \
    ../guilab/QutoButton.qml \
    ../guilab/QutoList.qml \
    ../guilab/QutoText.qml \
    ../guilab/QutoGrid.qml \
    ../guilab/quto_default_theme.js

RESOURCES += \
    quto-core.qrc
