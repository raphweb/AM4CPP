// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeConstantImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeConstant.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ITimeDeviation.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TimeConstantImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TimeConstant::_initialize()
{
    // Supertypes
    ::amalthea::ITimeDeviation::_initialize();

    // References
    if (m_value)
    {
        m_value->_initialize();
    }

    /*PROTECTED REGION ID(TimeConstantImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::amalthea::Time_ptr TimeConstant::getLowerBound()
{
    /*PROTECTED REGION ID(TimeConstantImpl_getLowerBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::TimeConstant::getLowerBound";
    /*PROTECTED REGION END*/
}

::amalthea::Time_ptr TimeConstant::getUpperBound()
{
    /*PROTECTED REGION ID(TimeConstantImpl_getUpperBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::TimeConstant::getUpperBound";
    /*PROTECTED REGION END*/
}

::amalthea::Time_ptr TimeConstant::getAverage()
{
    /*PROTECTED REGION ID(TimeConstantImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::TimeConstant::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject TimeConstant::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMECONSTANT__VALUE:
    {
        if (m_value)
            _any = ::ecore::as < ::ecore::EObject > (m_value);
        return _any;
    }
    }
    throw std::runtime_error(
            "TimeConstant::eGet Error. FeatureID:" + _featureID);
}

void TimeConstant::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMECONSTANT__VALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::TimeConstant::setValue(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "TimeConstant::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TimeConstant::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMECONSTANT__VALUE:
    {
        return (bool) m_value;
    }
    }
    throw std::runtime_error(
            "TimeConstant::eIsSet Error. FeatureID:" + _featureID);
}

void TimeConstant::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TimeConstant::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TimeConstant::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTimeConstant();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TimeConstant::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMECONSTANT__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TimeConstant::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMECONSTANT__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

