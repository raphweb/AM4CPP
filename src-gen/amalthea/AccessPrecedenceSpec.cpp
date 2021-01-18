// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AccessPrecedenceSpec.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AccessPrecedenceSpec.hpp"
#include <amalthea/GeneralPrecedence.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/Label.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AccessPrecedenceSpec.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
AccessPrecedenceSpec::AccessPrecedenceSpec() : m_label(0)
{

    /*PROTECTED REGION ID(AccessPrecedenceSpecImpl__AccessPrecedenceSpecImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

AccessPrecedenceSpec::~AccessPrecedenceSpec()
{
}

// Attributes

::amalthea::AccessPrecedenceType AccessPrecedenceSpec::getOrderType() const
{
    return m_orderType;
}

void AccessPrecedenceSpec::setOrderType(
        ::amalthea::AccessPrecedenceType _orderType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::AccessPrecedenceType _old_orderType = m_orderType;
#endif
    m_orderType = _orderType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAccessPrecedenceSpec__orderType(), _old_orderType, m_orderType);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Label_ptr AccessPrecedenceSpec::getLabel() const
{
    return m_label;
}

void AccessPrecedenceSpec::setLabel(::amalthea::Label_ptr _label)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Label_ptr _old_label = m_label;
#endif
    m_label = _label;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAccessPrecedenceSpec__label(), _old_label, m_label);
        eNotify(&notification);
    }
#endif
}

