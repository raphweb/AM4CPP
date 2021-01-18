// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SchedulerImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Scheduler.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ComputationItem.hpp>
#include <amalthea/SchedulerAllocation.hpp>
#include <amalthea/RunnableAllocation.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/Algorithm.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SchedulerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Scheduler::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_computationItems->size(); i++)
    {
        (*m_computationItems)[i]->_initialize();
    }

    /*PROTECTED REGION ID(SchedulerImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::amalthea::Algorithm_ptr Scheduler::getSchedulingAlgorithm()
{
    /*PROTECTED REGION ID(SchedulerImpl_getSchedulingAlgorithm) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Scheduler::getSchedulingAlgorithm";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject Scheduler::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
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
        _any = m_computationItems->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error("Scheduler::eGet Error. FeatureID:" + _featureID);
}

void Scheduler::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::Scheduler::getComputationItems().clear();
        ::amalthea::Scheduler::getComputationItems().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error("Scheduler::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Scheduler::eIsSet(::ecore::EInt _featureID)
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
    {
        return m_computationItems && m_computationItems->size();
    }
    case ::amalthea::AmaltheaPackage::SCHEDULER__SCHEDULERALLOCATIONS:
    {
        return m_schedulerAllocations && m_schedulerAllocations->size();
    }
    case ::amalthea::AmaltheaPackage::SCHEDULER__RUNNABLEALLOCATIONS:
    {
        return m_runnableAllocations && m_runnableAllocations->size();
    }
    }
    throw std::runtime_error(
            "Scheduler::eIsSet Error. FeatureID:" + _featureID);
}

void Scheduler::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "Scheduler::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Scheduler::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getScheduler();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Scheduler::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Scheduler::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
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

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

