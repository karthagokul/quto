#ifndef PROPERTYBANK_H
#define PROPERTYBANK_H

#include <QObject>
#include <QString>
#include <QVariant>


namespace Quto
{
    namespace Core
    {
        class PropertyBankPrivate;
        /*!
        * \brief The PropertyBank class
        * \author Gokul Kartha <kartha.gokul@gmail.com>
        */
        class PropertyBank : public QObject
        {
                Q_OBJECT
            public:
                explicit PropertyBank(QObject *parent = 0);
                Q_INVOKABLE QObject* getPropertyAccount(const QString &aAccountNumber);

            signals:

            public slots:

            private:
                PropertyBankPrivate *d;

        };
    }
}

#endif // PROPERTYBANK_H
