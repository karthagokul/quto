#include "propertybankprivate.h"

PropertyBankPrivate::PropertyBankPrivate(QObject *parent) :
    QObject(parent)
{
}

QObject* PropertyBankPrivate::getPropertyAccount(const QString &aAccountNumber)
{
    (void)aAccountNumber;
    return 0;
}
