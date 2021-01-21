// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SemaphoreAccessImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SemaphoreAccess.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Semaphore.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SemaphoreAccessImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SemaphoreAccess::_initialize()
{
    // Supertypes
    ::amalthea::ActivityGraphItem::_initialize();

    // References

    /*PROTECTED REGION ID(SemaphoreAccessImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SemaphoreAccess::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::SEMAPHOREACCESS__SEMAPHORE:
    {
        if (m_semaphore)
            _any = ::ecore::as < ::ecore::EObject > (m_semaphore);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHOREACCESS__ACCESS:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::SemaphoreAccessEnum
                > ::toAny(_any, m_access);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHOREACCESS__WAITINGBEHAVIOUR:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::WaitingBehaviour
                > ::toAny(_any, m_waitingBehaviour);
        return _any;
    }
    }
    throw std::runtime_error(
            "SemaphoreAccess::eGet Error. FeatureID:" + _featureID);
}

void SemaphoreAccess::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHOREACCESS__SEMAPHORE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Semaphore_ptr _t1 =
                dynamic_cast< ::amalthea::Semaphore* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Semaphore >(_t0);*/
        ::amalthea::SemaphoreAccess::setSemaphore(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHOREACCESS__ACCESS:
    {
        ::amalthea::SemaphoreAccessEnum _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::SemaphoreAccessEnum
                > ::fromAny(_newValue, _t0);
        ::amalthea::SemaphoreAccess::setAccess(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHOREACCESS__WAITINGBEHAVIOUR:
    {
        ::amalthea::WaitingBehaviour _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::WaitingBehaviour
                > ::fromAny(_newValue, _t0);
        ::amalthea::SemaphoreAccess::setWaitingBehaviour(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "SemaphoreAccess::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SemaphoreAccess::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGPROCESS:
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGRUNNABLE:
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH:
    {
        return amalthea::ActivityGraphItem::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::SEMAPHOREACCESS__SEMAPHORE:
    {
        return (bool) m_semaphore;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHOREACCESS__ACCESS:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::SemaphoreAccessEnum
                > ::is_set(m_access);
    }
    case ::amalthea::AmaltheaPackage::SEMAPHOREACCESS__WAITINGBEHAVIOUR:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::WaitingBehaviour
                > ::is_set(m_waitingBehaviour);
    }
    }
    throw std::runtime_error(
            "SemaphoreAccess::eIsSet Error. FeatureID:" + _featureID);
}

void SemaphoreAccess::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SemaphoreAccess::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SemaphoreAccess::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSemaphoreAccess();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SemaphoreAccess::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SEMAPHOREACCESS__SEMAPHORE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SemaphoreAccess::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SEMAPHOREACCESS__SEMAPHORE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

