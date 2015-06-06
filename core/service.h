#ifndef SERVICE_H
#define SERVICE_H

#include <QObject>

namespace Quto
{
    namespace Core
    {
        /*!
         * \brief The Service class
         * \author Gokul Kartha <kartha.gokul@gmail.com>
         */
        class Service : public QObject
        {
                Q_OBJECT
            public:
                explicit Service(QObject *parent = 0);

            signals:

            public slots:

        };
    }
}

#endif // SERVICE_H
