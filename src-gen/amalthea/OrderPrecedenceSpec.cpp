// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OrderPrecedenceSpec.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OrderPrecedenceSpec.hpp"
#include <amalthea/GeneralPrecedence.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Runnable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(OrderPrecedenceSpec.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
OrderPrecedenceSpec::OrderPrecedenceSpec()
{

    /*PROTECTED REGION ID(OrderPrecedenceSpecImpl__OrderPrecedenceSpecImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

OrderPrecedenceSpec::~OrderPrecedenceSpec()
{
}

// Attributes

::amalthea::OrderType OrderPrecedenceSpec::getOrderType() const
{
    return m_orderType;
}

void OrderPrecedenceSpec::setOrderType(::amalthea::OrderType _orderType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::OrderType _old_orderType = m_orderType;
#endif
    m_orderType = _orderType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOrderPrecedenceSpec__orderType(), _old_orderType, m_orderType);
        eNotify(&notification);
    }
#endif
}

// References

