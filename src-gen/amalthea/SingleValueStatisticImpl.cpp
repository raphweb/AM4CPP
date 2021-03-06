// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SingleValueStatisticImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SingleValueStatistic.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/NumericStatistic.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SingleValueStatisticImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SingleValueStatistic::_initialize()
{
    // Supertypes
    ::amalthea::NumericStatistic::_initialize();

    // References

    /*PROTECTED REGION ID(SingleValueStatisticImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SingleValueStatistic::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SINGLEVALUESTATISTIC__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_value);
        return _any;
    }
    }
    throw std::runtime_error(
            "SingleValueStatistic::eGet Error. FeatureID:" + _featureID);
}

void SingleValueStatistic::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SINGLEVALUESTATISTIC__VALUE:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::amalthea::SingleValueStatistic::setValue(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "SingleValueStatistic::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SingleValueStatistic::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SINGLEVALUESTATISTIC__VALUE:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EFloat
                > ::is_set(m_value);
    }
    }
    throw std::runtime_error(
            "SingleValueStatistic::eIsSet Error. FeatureID:" + _featureID);
}

void SingleValueStatistic::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SingleValueStatistic::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SingleValueStatistic::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSingleValueStatistic();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SingleValueStatistic::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SingleValueStatistic::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

