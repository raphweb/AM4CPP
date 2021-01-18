// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ArrivalCurveEntry.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ArrivalCurveEntry.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ArrivalCurveEntry.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ArrivalCurveEntry::ArrivalCurveEntry() : m_numberOfOccurrences(0), m_lowerTimeBorder(
        0), m_upperTimeBorder(0)
{

    /*PROTECTED REGION ID(ArrivalCurveEntryImpl__ArrivalCurveEntryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ArrivalCurveEntry::~ArrivalCurveEntry()
{
    if (m_lowerTimeBorder)
    {
        m_lowerTimeBorder.reset();
    }
    if (m_upperTimeBorder)
    {
        m_upperTimeBorder.reset();
    }
}

// Attributes

::ecore::EInt ArrivalCurveEntry::getNumberOfOccurrences() const
{
    return m_numberOfOccurrences;
}

void ArrivalCurveEntry::setNumberOfOccurrences(
        ::ecore::EInt _numberOfOccurrences)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_numberOfOccurrences = m_numberOfOccurrences;
#endif
    m_numberOfOccurrences = _numberOfOccurrences;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getArrivalCurveEntry__numberOfOccurrences(), _old_numberOfOccurrences, m_numberOfOccurrences);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Time_ptr ArrivalCurveEntry::getLowerTimeBorder() const
{
    return m_lowerTimeBorder;
}

void ArrivalCurveEntry::setLowerTimeBorder(
        ::amalthea::Time_ptr _lowerTimeBorder)
{
    if (m_lowerTimeBorder)
        m_lowerTimeBorder->_setEContainer(ArrivalCurveEntry_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getArrivalCurveEntry__lowerTimeBorder());
    if (_lowerTimeBorder)
        _lowerTimeBorder->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getArrivalCurveEntry__lowerTimeBorder());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_lowerTimeBorder = m_lowerTimeBorder;
#endif
    m_lowerTimeBorder = _lowerTimeBorder;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getArrivalCurveEntry__lowerTimeBorder(), _old_lowerTimeBorder, m_lowerTimeBorder);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr ArrivalCurveEntry::getUpperTimeBorder() const
{
    return m_upperTimeBorder;
}

void ArrivalCurveEntry::setUpperTimeBorder(
        ::amalthea::Time_ptr _upperTimeBorder)
{
    if (m_upperTimeBorder)
        m_upperTimeBorder->_setEContainer(ArrivalCurveEntry_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getArrivalCurveEntry__upperTimeBorder());
    if (_upperTimeBorder)
        _upperTimeBorder->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getArrivalCurveEntry__upperTimeBorder());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_upperTimeBorder = m_upperTimeBorder;
#endif
    m_upperTimeBorder = _upperTimeBorder;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getArrivalCurveEntry__upperTimeBorder(), _old_upperTimeBorder, m_upperTimeBorder);
        eNotify(&notification);
    }
#endif
}

