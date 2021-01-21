// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TaskImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Task.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Stimulus.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TaskImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Task::_initialize()
{
    // Supertypes
    ::amalthea::Process::_initialize();

    // References

    /*PROTECTED REGION ID(TaskImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Task::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
        return amalthea::AbstractMemoryElement::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PROCESS__ACTIVITYGRAPH:
    case ::amalthea::AmaltheaPackage::PROCESS__STIMULI:
    {
        return amalthea::Process::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::TASK__PREEMPTION:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::Preemption
                > ::toAny(_any, m_preemption);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TASK__MULTIPLETASKACTIVATIONLIMIT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_multipleTaskActivationLimit);
        return _any;
    }
    }
    throw std::runtime_error("Task::eGet Error. FeatureID:" + _featureID);
}

void Task::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        amalthea::ITaggable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
        amalthea::AbstractMemoryElement::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESS__ACTIVITYGRAPH:
    case ::amalthea::AmaltheaPackage::PROCESS__STIMULI:
    {
        amalthea::Process::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::TASK__PREEMPTION:
    {
        ::amalthea::Preemption _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::Preemption
                > ::fromAny(_newValue, _t0);
        ::amalthea::Task::setPreemption(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::TASK__MULTIPLETASKACTIVATIONLIMIT:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::Task::setMultipleTaskActivationLimit(_t0);
        return;
    }
    }
    throw std::runtime_error("Task::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Task::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__MAPPINGS:
    {
        return amalthea::AbstractMemoryElement::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTPROCESS__REFERRINGCOMPONENTS:
    {
        return amalthea::AbstractProcess::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PROCESS__ACTIVITYGRAPH:
    case ::amalthea::AmaltheaPackage::PROCESS__STIMULI:
    {
        return amalthea::Process::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::TASK__PREEMPTION:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::Preemption
                > ::is_set(m_preemption);
    }
    case ::amalthea::AmaltheaPackage::TASK__MULTIPLETASKACTIVATIONLIMIT:
    {
        return m_multipleTaskActivationLimit != 0;
    }
    }
    throw std::runtime_error("Task::eIsSet Error. FeatureID:" + _featureID);
}

void Task::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Task::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Task::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTask();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Task::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESS__ACTIVITYGRAPH:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESS__STIMULI:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Task::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESS__ACTIVITYGRAPH:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESS__STIMULI:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

