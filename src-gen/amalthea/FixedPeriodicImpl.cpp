// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/FixedPeriodicImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "FixedPeriodic.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(FixedPeriodicImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void FixedPeriodic::_initialize()
{
    // Supertypes

    // References
    if (m_recurrence)
    {
        m_recurrence->_initialize();
    }
    if (m_offset)
    {
        m_offset->_initialize();
    }

    /*PROTECTED REGION ID(FixedPeriodicImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject FixedPeriodic::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__RECURRENCE:
    {
        if (m_recurrence)
            _any = ::ecore::as < ::ecore::EObject > (m_recurrence);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__OFFSET:
    {
        if (m_offset)
            _any = ::ecore::as < ::ecore::EObject > (m_offset);
        return _any;
    }
    }
    throw std::runtime_error(
            "FixedPeriodic::eGet Error. FeatureID:" + _featureID);
}

void FixedPeriodic::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__RECURRENCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::FixedPeriodic::setRecurrence(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__OFFSET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::FixedPeriodic::setOffset(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "FixedPeriodic::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean FixedPeriodic::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__RECURRENCE:
    {
        return (bool) m_recurrence;
    }
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__OFFSET:
    {
        return (bool) m_offset;
    }
    }
    throw std::runtime_error(
            "FixedPeriodic::eIsSet Error. FeatureID:" + _featureID);
}

void FixedPeriodic::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "FixedPeriodic::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr FixedPeriodic::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getFixedPeriodic();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void FixedPeriodic::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__RECURRENCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__OFFSET:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void FixedPeriodic::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__RECURRENCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__OFFSET:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

