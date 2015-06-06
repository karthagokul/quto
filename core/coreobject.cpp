#include "coreobject.h"

using namespace Quto::Core;

CoreObject::CoreObject(QObject *parent) :
    QObject(parent)
{
}

CoreObject::~CoreObject()
{

}

void CoreObject::onQutoEvent(const QString &aEventId,const QVariant &aData)
{
    Q_UNUSED(aEventId);
    Q_UNUSED(aData);
}
