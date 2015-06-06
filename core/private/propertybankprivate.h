#ifndef PROPERTYBANKPRIVATE_H
#define PROPERTYBANKPRIVATE_H

#include <QObject>
#include <QHash>

class PropertyBankPrivate : public QObject
{
        Q_OBJECT
    public:
        explicit PropertyBankPrivate(QObject *parent = 0);
        QObject* getPropertyAccount(const QString &aAccountNumber);
    signals:

    public slots:

    private:
        QHash<QString,QObject*> mAccounts;
};

#endif // PROPERTYBANKPRIVATE_H
