#include "application.h"
#include "eventmanager.h"
#include "pluginloader.h"
#include "applicationprivate.h"

using namespace Quto::Core;

ApplicationPrivate::ApplicationPrivate(QObject *parent):
    QObject(parent),
    mEventManager(new EventManager(qApp))
{

}

ApplicationPrivate::~ApplicationPrivate()
{
    mEventManager.clear();
    mPluginLoader.clear();
}
