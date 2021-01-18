// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/GetResultServerCall.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "GetResultServerCall.hpp"
#include <amalthea/ServerCall.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/ComponentPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(GetResultServerCall.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
GetResultServerCall::GetResultServerCall()
{

    /*PROTECTED REGION ID(GetResultServerCallImpl__GetResultServerCallImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

GetResultServerCall::~GetResultServerCall()
{
}

// Attributes

::amalthea::BlockingType GetResultServerCall::getBlockingType() const
{
    return m_blockingType;
}

void GetResultServerCall::setBlockingType(
        ::amalthea::BlockingType _blockingType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::BlockingType _old_blockingType = m_blockingType;
#endif
    m_blockingType = _blockingType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getGetResultServerCall__blockingType(), _old_blockingType, m_blockingType);
        eNotify(&notification);
    }
#endif
}

// References

