// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsAPIOverheadImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OsAPIOverhead.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Ticks.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(OsAPIOverheadImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void OsAPIOverhead::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_apiSendMessage)
    {
        m_apiSendMessage->_initialize();
    }
    if (m_apiTerminateTask)
    {
        m_apiTerminateTask->_initialize();
    }
    if (m_apiSchedule)
    {
        m_apiSchedule->_initialize();
    }
    if (m_apiRequestResource)
    {
        m_apiRequestResource->_initialize();
    }
    if (m_apiReleaseResource)
    {
        m_apiReleaseResource->_initialize();
    }
    if (m_apiSetEvent)
    {
        m_apiSetEvent->_initialize();
    }
    if (m_apiWaitEvent)
    {
        m_apiWaitEvent->_initialize();
    }
    if (m_apiClearEvent)
    {
        m_apiClearEvent->_initialize();
    }
    if (m_apiActivateTask)
    {
        m_apiActivateTask->_initialize();
    }
    if (m_apiEnforcedMigration)
    {
        m_apiEnforcedMigration->_initialize();
    }
    if (m_apiSuspendOsInterrupts)
    {
        m_apiSuspendOsInterrupts->_initialize();
    }
    if (m_apiResumeOsInterrupts)
    {
        m_apiResumeOsInterrupts->_initialize();
    }
    if (m_apiRequestSpinlock)
    {
        m_apiRequestSpinlock->_initialize();
    }
    if (m_apiReleaseSpinlock)
    {
        m_apiReleaseSpinlock->_initialize();
    }
    if (m_apiSenderReceiverRead)
    {
        m_apiSenderReceiverRead->_initialize();
    }
    if (m_apiSenderReceiverWrite)
    {
        m_apiSenderReceiverWrite->_initialize();
    }
    if (m_apiSynchronousServerCallPoint)
    {
        m_apiSynchronousServerCallPoint->_initialize();
    }
    if (m_apiIocRead)
    {
        m_apiIocRead->_initialize();
    }
    if (m_apiIocWrite)
    {
        m_apiIocWrite->_initialize();
    }

    /*PROTECTED REGION ID(OsAPIOverheadImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject OsAPIOverhead::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDMESSAGE:
    {
        if (m_apiSendMessage)
            _any = ::ecore::as < ::ecore::EObject > (m_apiSendMessage);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APITERMINATETASK:
    {
        if (m_apiTerminateTask)
            _any = ::ecore::as < ::ecore::EObject > (m_apiTerminateTask);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISCHEDULE:
    {
        if (m_apiSchedule)
            _any = ::ecore::as < ::ecore::EObject > (m_apiSchedule);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIREQUESTRESOURCE:
    {
        if (m_apiRequestResource)
            _any = ::ecore::as < ::ecore::EObject > (m_apiRequestResource);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRELEASERESOURCE:
    {
        if (m_apiReleaseResource)
            _any = ::ecore::as < ::ecore::EObject > (m_apiReleaseResource);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISETEVENT:
    {
        if (m_apiSetEvent)
            _any = ::ecore::as < ::ecore::EObject > (m_apiSetEvent);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIWAITEVENT:
    {
        if (m_apiWaitEvent)
            _any = ::ecore::as < ::ecore::EObject > (m_apiWaitEvent);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APICLEAREVENT:
    {
        if (m_apiClearEvent)
            _any = ::ecore::as < ::ecore::EObject > (m_apiClearEvent);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIACTIVATETASK:
    {
        if (m_apiActivateTask)
            _any = ::ecore::as < ::ecore::EObject > (m_apiActivateTask);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIENFORCEDMIGRATION:
    {
        if (m_apiEnforcedMigration)
            _any = ::ecore::as < ::ecore::EObject > (m_apiEnforcedMigration);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISUSPENDOSINTERRUPTS:
    {
        if (m_apiSuspendOsInterrupts)
            _any = ::ecore::as < ::ecore::EObject > (m_apiSuspendOsInterrupts);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRESUMEOSINTERRUPTS:
    {
        if (m_apiResumeOsInterrupts)
            _any = ::ecore::as < ::ecore::EObject > (m_apiResumeOsInterrupts);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIREQUESTSPINLOCK:
    {
        if (m_apiRequestSpinlock)
            _any = ::ecore::as < ::ecore::EObject > (m_apiRequestSpinlock);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRELEASESPINLOCK:
    {
        if (m_apiReleaseSpinlock)
            _any = ::ecore::as < ::ecore::EObject > (m_apiReleaseSpinlock);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDERRECEIVERREAD:
    {
        if (m_apiSenderReceiverRead)
            _any = ::ecore::as < ::ecore::EObject > (m_apiSenderReceiverRead);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDERRECEIVERWRITE:
    {
        if (m_apiSenderReceiverWrite)
            _any = ::ecore::as < ::ecore::EObject > (m_apiSenderReceiverWrite);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISYNCHRONOUSSERVERCALLPOINT:
    {
        if (m_apiSynchronousServerCallPoint)
            _any = ::ecore::as < ::ecore::EObject
                    > (m_apiSynchronousServerCallPoint);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIIOCREAD:
    {
        if (m_apiIocRead)
            _any = ::ecore::as < ::ecore::EObject > (m_apiIocRead);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIIOCWRITE:
    {
        if (m_apiIocWrite)
            _any = ::ecore::as < ::ecore::EObject > (m_apiIocWrite);
        return _any;
    }
    }
    throw std::runtime_error(
            "OsAPIOverhead::eGet Error. FeatureID:" + _featureID);
}

void OsAPIOverhead::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDMESSAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiSendMessage(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APITERMINATETASK:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiTerminateTask(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISCHEDULE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiSchedule(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIREQUESTRESOURCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiRequestResource(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRELEASERESOURCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiReleaseResource(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISETEVENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiSetEvent(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIWAITEVENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiWaitEvent(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APICLEAREVENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiClearEvent(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIACTIVATETASK:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiActivateTask(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIENFORCEDMIGRATION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiEnforcedMigration(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISUSPENDOSINTERRUPTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiSuspendOsInterrupts(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRESUMEOSINTERRUPTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiResumeOsInterrupts(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIREQUESTSPINLOCK:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiRequestSpinlock(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRELEASESPINLOCK:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiReleaseSpinlock(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDERRECEIVERREAD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiSenderReceiverRead(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDERRECEIVERWRITE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiSenderReceiverWrite(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISYNCHRONOUSSERVERCALLPOINT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiSynchronousServerCallPoint(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIIOCREAD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiIocRead(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIIOCWRITE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsAPIOverhead::setApiIocWrite(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "OsAPIOverhead::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean OsAPIOverhead::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDMESSAGE:
    {
        return (bool) m_apiSendMessage;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APITERMINATETASK:
    {
        return (bool) m_apiTerminateTask;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISCHEDULE:
    {
        return (bool) m_apiSchedule;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIREQUESTRESOURCE:
    {
        return (bool) m_apiRequestResource;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRELEASERESOURCE:
    {
        return (bool) m_apiReleaseResource;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISETEVENT:
    {
        return (bool) m_apiSetEvent;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIWAITEVENT:
    {
        return (bool) m_apiWaitEvent;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APICLEAREVENT:
    {
        return (bool) m_apiClearEvent;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIACTIVATETASK:
    {
        return (bool) m_apiActivateTask;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIENFORCEDMIGRATION:
    {
        return (bool) m_apiEnforcedMigration;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISUSPENDOSINTERRUPTS:
    {
        return (bool) m_apiSuspendOsInterrupts;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRESUMEOSINTERRUPTS:
    {
        return (bool) m_apiResumeOsInterrupts;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIREQUESTSPINLOCK:
    {
        return (bool) m_apiRequestSpinlock;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRELEASESPINLOCK:
    {
        return (bool) m_apiReleaseSpinlock;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDERRECEIVERREAD:
    {
        return (bool) m_apiSenderReceiverRead;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDERRECEIVERWRITE:
    {
        return (bool) m_apiSenderReceiverWrite;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISYNCHRONOUSSERVERCALLPOINT:
    {
        return (bool) m_apiSynchronousServerCallPoint;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIIOCREAD:
    {
        return (bool) m_apiIocRead;
    }
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIIOCWRITE:
    {
        return (bool) m_apiIocWrite;
    }
    }
    throw std::runtime_error(
            "OsAPIOverhead::eIsSet Error. FeatureID:" + _featureID);
}

void OsAPIOverhead::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "OsAPIOverhead::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr OsAPIOverhead::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getOsAPIOverhead();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void OsAPIOverhead::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDMESSAGE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APITERMINATETASK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISCHEDULE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIREQUESTRESOURCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRELEASERESOURCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISETEVENT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIWAITEVENT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APICLEAREVENT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIACTIVATETASK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIENFORCEDMIGRATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISUSPENDOSINTERRUPTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRESUMEOSINTERRUPTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIREQUESTSPINLOCK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRELEASESPINLOCK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDERRECEIVERREAD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDERRECEIVERWRITE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISYNCHRONOUSSERVERCALLPOINT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIIOCREAD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIIOCWRITE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void OsAPIOverhead::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDMESSAGE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APITERMINATETASK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISCHEDULE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIREQUESTRESOURCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRELEASERESOURCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISETEVENT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIWAITEVENT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APICLEAREVENT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIACTIVATETASK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIENFORCEDMIGRATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISUSPENDOSINTERRUPTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRESUMEOSINTERRUPTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIREQUESTSPINLOCK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIRELEASESPINLOCK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDERRECEIVERREAD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISENDERRECEIVERWRITE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APISYNCHRONOUSSERVERCALLPOINT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIIOCREAD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSAPIOVERHEAD__APIIOCWRITE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

