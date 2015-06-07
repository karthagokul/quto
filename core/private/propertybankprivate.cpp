#include "propertybankprivate.h"

using namespace Quto::Core;

PropertyBankPrivate::PropertyBankPrivate(QObject *parent) :
    QObject(parent)
{
}

QObject* PropertyBankPrivate::getPropertyAccount(const QString &aAccountNumber)
{
    (void)aAccountNumber;
    return 0;
}
