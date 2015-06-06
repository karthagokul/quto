#ifndef SERVICERUNNER_H
#define SERVICERUNNER_H

#include <QThread>

namespace Quto
{
    namespace Core
    {
        class Service;

        /*!
         * \brief The ServiceRunner class
         * \author Gokul Kartha <kartha.gokul@gmail.com>
         */
        class ServiceRunner : public QThread
        {
                Q_OBJECT
            public:
                explicit ServiceRunner(Service *aService);
                void run();
            signals:

            public slots:

            private:
                Service *mService;

        };
    }
}

#endif // SERVICERUNNER_H
