#ifndef EVENTINTERFACE_H
#define EVENTINTERFACE_H

namespace Quto
{
    namespace Core
    {
        /*!
         * \brief The EventInterface class
         * \author Gokul Kartha <kartha.gokul@gmail.com>
         */
        class EventInterface
        {
            public:
                virtual void onQutoEvent(const QString &aEventId,const QVariant &aData)=0;
        };
    }
}

#endif // EVENTINTERFACE_H
