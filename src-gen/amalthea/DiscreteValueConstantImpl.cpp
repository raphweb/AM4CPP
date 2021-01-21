// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueConstantImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DiscreteValueConstant.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DiscreteValueConstantImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DiscreteValueConstant::_initialize()
{
    // Supertypes
    ::amalthea::IDiscreteValueDeviation::_initialize();

    // References

    /*PROTECTED REGION ID(DiscreteValueConstantImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::ELongObject DiscreteValueConstant::getLowerBound()
{
    /*PROTECTED REGION ID(DiscreteValueConstantImpl_getLowerBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DiscreteValueConstant::getLowerBound";
    /*PROTECTED REGION END*/
}

::ecore::ELongObject DiscreteValueConstant::getUpperBound()
{
    /*PROTECTED REGION ID(DiscreteValueConstantImpl_getUpperBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DiscreteValueConstant::getUpperBound";
    /*PROTECTED REGION END*/
}

::ecore::EDoubleObject DiscreteValueConstant::getAverage()
{
    /*PROTECTED REGION ID(DiscreteValueConstantImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DiscreteValueConstant::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject DiscreteValueConstant::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUECONSTANT__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::ELong
                > ::toAny(_any, m_value);
        return _any;
    }
    }
    throw std::runtime_error(
            "DiscreteValueConstant::eGet Error. FeatureID:" + _featureID);
}

void DiscreteValueConstant::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUECONSTANT__VALUE:
    {
        ::ecore::ELong _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::ELong
                > ::fromAny(_newValue, _t0);
        ::amalthea::DiscreteValueConstant::setValue(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "DiscreteValueConstant::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DiscreteValueConstant::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUECONSTANT__VALUE:
    {
        return m_value != 0;
    }
    }
    throw std::runtime_error(
            "DiscreteValueConstant::eIsSet Error. FeatureID:" + _featureID);
}

void DiscreteValueConstant::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DiscreteValueConstant::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DiscreteValueConstant::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDiscreteValueConstant();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DiscreteValueConstant::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DiscreteValueConstant::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

