#ifndef COREOBJECT_H
#define COREOBJECT_H

#include <QObject>

namespace Quto
{
    namespace Core
    {
        /*!
         * \brief The CoreObject class
         * \author Gokul Kartha <kartha.gokul@gmail.com>
         */
        class CoreObject : public QObject
        {
                Q_OBJECT
            public:
                explicit CoreObject(QObject *parent = 0);
                virtual ~CoreObject();
            protected:
                virtual void onQutoEvent(const QString &aEventId,const QVariant &aData);
            signals:

            public slots:

        };
    }
}
#endif // COREOBJECT_H
