// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Classification.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Classification.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Classification.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Classification::Classification()
{

    /*PROTECTED REGION ID(ClassificationImpl__ClassificationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Classification::~Classification()
{
}

// Attributes

::amalthea::Condition Classification::getCondition() const
{
    return m_condition;
}

void Classification::setCondition(::amalthea::Condition _condition)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Condition _old_condition = m_condition;
#endif
    m_condition = _condition;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getClassification__condition(), _old_condition, m_condition);
        eNotify(&notification);
    }
#endif
}

::amalthea::GroupingType Classification::getGrouping() const
{
    return m_grouping;
}

void Classification::setGrouping(::amalthea::GroupingType _grouping)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::GroupingType _old_grouping = m_grouping;
#endif
    m_grouping = _grouping;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getClassification__grouping(), _old_grouping, m_grouping);
        eNotify(&notification);
    }
#endif
}

// References

