// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Time.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Quantity.hpp>
#include <amalthea/Value.hpp>
#include <amalthea/TimeComparable.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TimeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Time::_initialize()
{
    // Supertypes
    ::amalthea::Quantity::_initialize();
    ::amalthea::Value::_initialize();
    ::amalthea::TimeComparable::_initialize();

    // References

    /*PROTECTED REGION ID(TimeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EString Time::toString()
{
    /*PROTECTED REGION ID(TimeImpl_toString) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Time::toString";
    /*PROTECTED REGION END*/
}

::ecore::EInt Time::compareTo(::amalthea::Time_ptr _t)
{
    /*PROTECTED REGION ID(TimeImpl_compareTo) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Time::compareTo";
    /*PROTECTED REGION END*/
}

::amalthea::Time_ptr Time::adjustUnit()
{
    /*PROTECTED REGION ID(TimeImpl_adjustUnit) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Time::adjustUnit";
    /*PROTECTED REGION END*/
}

::amalthea::Time_ptr Time::add(::amalthea::Time_ptr _t)
{
    /*PROTECTED REGION ID(TimeImpl_add) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Time::add";
    /*PROTECTED REGION END*/
}

::amalthea::Time_ptr Time::subtract(::amalthea::Time_ptr _t)
{
    /*PROTECTED REGION ID(TimeImpl_subtract) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Time::subtract";
    /*PROTECTED REGION END*/
}

::amalthea::Time_ptr Time::multiply(::ecore::ELong _v)
{
    /*PROTECTED REGION ID(TimeImpl_multiply_1) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Time::multiply";
    /*PROTECTED REGION END*/
}

::amalthea::Time_ptr Time::multiply(::ecore::EDouble _v)
{
    /*PROTECTED REGION ID(TimeImpl_multiply_0) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Time::multiply";
    /*PROTECTED REGION END*/
}

::ecore::EDouble Time::divide(::amalthea::Time_ptr _t)
{
    /*PROTECTED REGION ID(TimeImpl_divide) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Time::divide";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject Time::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIME__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBigInteger
                > ::toAny(_any, m_value);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TIME__UNIT:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::TimeUnit
                > ::toAny(_any, m_unit);
        return _any;
    }
    }
    throw std::runtime_error("Time::eGet Error. FeatureID:" + _featureID);
}

void Time::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIME__VALUE:
    {
        ::ecore::EBigInteger _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBigInteger
                > ::fromAny(_newValue, _t0);
        ::amalthea::Time::setValue(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::TIME__UNIT:
    {
        ::amalthea::TimeUnit _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::TimeUnit
                > ::fromAny(_newValue, _t0);
        ::amalthea::Time::setUnit(_t0);
        return;
    }
    }
    throw std::runtime_error("Time::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Time::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIME__VALUE:
    {
        return m_value != 0;
    }
    case ::amalthea::AmaltheaPackage::TIME__UNIT:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::TimeUnit
                > ::is_set(m_unit);
    }
    }
    throw std::runtime_error("Time::eIsSet Error. FeatureID:" + _featureID);
}

void Time::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Time::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Time::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTime();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Time::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Time::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

