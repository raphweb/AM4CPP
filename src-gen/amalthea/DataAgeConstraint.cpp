// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataAgeConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataAgeConstraint.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/DataAge.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DataAgeConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DataAgeConstraint::DataAgeConstraint() : m_runnable(0), m_label(0), m_dataAge(0)
{

    /*PROTECTED REGION ID(DataAgeConstraintImpl__DataAgeConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DataAgeConstraint::~DataAgeConstraint()
{
    if (m_dataAge)
    {
        m_dataAge.reset();
    }
}

// Attributes

// References

::amalthea::Runnable_ptr DataAgeConstraint::getRunnable() const
{
    return m_runnable;
}

void DataAgeConstraint::setRunnable(::amalthea::Runnable_ptr _runnable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_runnable = m_runnable;
#endif
    m_runnable = _runnable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataAgeConstraint__runnable(), _old_runnable, m_runnable);
        eNotify(&notification);
    }
#endif
}

::amalthea::Label_ptr DataAgeConstraint::getLabel() const
{
    return m_label;
}

void DataAgeConstraint::setLabel(::amalthea::Label_ptr _label)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Label_ptr _old_label = m_label;
#endif
    m_label = _label;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataAgeConstraint__label(), _old_label, m_label);
        eNotify(&notification);
    }
#endif
}

::amalthea::DataAge_ptr DataAgeConstraint::getDataAge() const
{
    return m_dataAge;
}

void DataAgeConstraint::setDataAge(::amalthea::DataAge_ptr _dataAge)
{
    if (m_dataAge)
        m_dataAge->_setEContainer(DataAgeConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getDataAgeConstraint__dataAge());
    if (_dataAge)
        _dataAge->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getDataAgeConstraint__dataAge());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataAge_ptr _old_dataAge = m_dataAge;
#endif
    m_dataAge = _dataAge;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataAgeConstraint__dataAge(), _old_dataAge, m_dataAge);
        eNotify(&notification);
    }
#endif
}

