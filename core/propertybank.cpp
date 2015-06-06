#include "propertybank.h"
#include "private/propertybankprivate.h"

PropertyBank::PropertyBank(QObject *parent) :
    QObject(parent),
    d(new PropertyBankPrivate(parent))
{
}

QObject* PropertyBank::getPropertyAccount(const QString &aAccountNumber)
{
   return d->getPropertyAccount(aAccountNumber);
}
