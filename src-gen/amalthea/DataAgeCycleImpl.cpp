// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataAgeCycleImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataAgeCycle.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/DataAge.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DataAgeCycleImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DataAgeCycle::_initialize()
{
    // Supertypes
    ::amalthea::DataAge::_initialize();

    // References

    /*PROTECTED REGION ID(DataAgeCycleImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DataAgeCycle::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATAAGECYCLE__MINIMUMCYCLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_minimumCycle);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATAAGECYCLE__MAXIMUMCYCLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_maximumCycle);
        return _any;
    }
    }
    throw std::runtime_error(
            "DataAgeCycle::eGet Error. FeatureID:" + _featureID);
}

void DataAgeCycle::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATAAGECYCLE__MINIMUMCYCLE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::DataAgeCycle::setMinimumCycle(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATAAGECYCLE__MAXIMUMCYCLE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::DataAgeCycle::setMaximumCycle(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "DataAgeCycle::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DataAgeCycle::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATAAGECYCLE__MINIMUMCYCLE:
    {
        return m_minimumCycle != 0;
    }
    case ::amalthea::AmaltheaPackage::DATAAGECYCLE__MAXIMUMCYCLE:
    {
        return m_maximumCycle != 0;
    }
    }
    throw std::runtime_error(
            "DataAgeCycle::eIsSet Error. FeatureID:" + _featureID);
}

void DataAgeCycle::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DataAgeCycle::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DataAgeCycle::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDataAgeCycle();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DataAgeCycle::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DataAgeCycle::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

