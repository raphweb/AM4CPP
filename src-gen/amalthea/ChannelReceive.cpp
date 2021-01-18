// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChannelReceive.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ChannelReceive.hpp"
#include <amalthea/ChannelAccess.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Channel.hpp>
#include <amalthea/TransmissionPolicy.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ChannelReceive.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ChannelReceive::ChannelReceive() : m_dataMustBeNew(false), m_elementIndex(0), m_lowerBound(
        0)
{

    /*PROTECTED REGION ID(ChannelReceiveImpl__ChannelReceiveImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ChannelReceive::~ChannelReceive()
{
}

// Attributes

::amalthea::ReceiveOperation ChannelReceive::getReceiveOperation() const
{
    return m_receiveOperation;
}

void ChannelReceive::setReceiveOperation(
        ::amalthea::ReceiveOperation _receiveOperation)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ReceiveOperation _old_receiveOperation = m_receiveOperation;
#endif
    m_receiveOperation = _receiveOperation;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChannelReceive__receiveOperation(), _old_receiveOperation, m_receiveOperation);
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean ChannelReceive::isDataMustBeNew() const
{
    return m_dataMustBeNew;
}

void ChannelReceive::setDataMustBeNew(::ecore::EBoolean _dataMustBeNew)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_dataMustBeNew = m_dataMustBeNew;
#endif
    m_dataMustBeNew = _dataMustBeNew;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChannelReceive__dataMustBeNew(), _old_dataMustBeNew, m_dataMustBeNew);
        eNotify(&notification);
    }
#endif
}

::ecore::EInt ChannelReceive::getElementIndex() const
{
    return m_elementIndex;
}

void ChannelReceive::setElementIndex(::ecore::EInt _elementIndex)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_elementIndex = m_elementIndex;
#endif
    m_elementIndex = _elementIndex;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChannelReceive__elementIndex(), _old_elementIndex, m_elementIndex);
        eNotify(&notification);
    }
#endif
}

::ecore::EInt ChannelReceive::getLowerBound() const
{
    return m_lowerBound;
}

void ChannelReceive::setLowerBound(::ecore::EInt _lowerBound)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_lowerBound = m_lowerBound;
#endif
    m_lowerBound = _lowerBound;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChannelReceive__lowerBound(), _old_lowerBound, m_lowerBound);
        eNotify(&notification);
    }
#endif
}

// References

