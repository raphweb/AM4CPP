// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/InterruptControllerImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InterruptController.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Scheduler.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ComputationItem.hpp>
#include <amalthea/SchedulerAllocation.hpp>
#include <amalthea/RunnableAllocation.hpp>
#include <amalthea/InterruptSchedulingAlgorithm.hpp>
#include <amalthea/ISRAllocation.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/Algorithm.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(InterruptControllerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void InterruptController::_initialize()
{
    // Supertypes
    ::amalthea::Scheduler::_initialize();

    // References
    if (m_schedulingAlgorithm)
    {
        m_schedulingAlgorithm->_initialize();
    }

    /*PROTECTED REGION ID(InterruptControllerImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InterruptController::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        return amalthea::INamed::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::SCHEDULER__COMPUTATIONITEMS:
    {
        return amalthea::Scheduler::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::INTERRUPTCONTROLLER__SCHEDULINGALGORITHM:
    {
        if (m_schedulingAlgorithm)
            _any = ::ecore::as < ::ecore::EObject > (m_schedulingAlgorithm);
        return _any;
    }
    }
    throw std::runtime_error(
            "InterruptController::eGet Error. FeatureID:" + _featureID);
}

void InterruptController::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        amalthea::INamed::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULER__COMPUTATIONITEMS:
    {
        amalthea::Scheduler::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::INTERRUPTCONTROLLER__SCHEDULINGALGORITHM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::InterruptSchedulingAlgorithm_ptr _t1 =
                dynamic_cast< ::amalthea::InterruptSchedulingAlgorithm* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::InterruptSchedulingAlgorithm >(_t0);*/
        ::amalthea::InterruptController::setSchedulingAlgorithm(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "InterruptController::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean InterruptController::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    case ::amalthea::AmaltheaPackage::INAMED__QUALIFIEDNAME:
    {
        return amalthea::INamed::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IREFERABLE__UNIQUENAME:
    {
        return amalthea::IReferable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::SCHEDULER__COMPUTATIONITEMS:
    case ::amalthea::AmaltheaPackage::SCHEDULER__SCHEDULERALLOCATIONS:
    case ::amalthea::AmaltheaPackage::SCHEDULER__RUNNABLEALLOCATIONS:
    {
        return amalthea::Scheduler::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::INTERRUPTCONTROLLER__SCHEDULINGALGORITHM:
    {
        return (bool) m_schedulingAlgorithm;
    }
    case ::amalthea::AmaltheaPackage::INTERRUPTCONTROLLER__ISRALLOCATIONS:
    {
        return m_isrAllocations && m_isrAllocations->size();
    }
    }
    throw std::runtime_error(
            "InterruptController::eIsSet Error. FeatureID:" + _featureID);
}

void InterruptController::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "InterruptController::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr InterruptController::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getInterruptController();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void InterruptController::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULER__COMPUTATIONITEMS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INTERRUPTCONTROLLER__SCHEDULINGALGORITHM:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void InterruptController::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULER__COMPUTATIONITEMS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INTERRUPTCONTROLLER__SCHEDULINGALGORITHM:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

