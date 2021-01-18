// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/FrequencyRequirementLimitImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "FrequencyRequirementLimit.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/Frequency.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(FrequencyRequirementLimitImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void FrequencyRequirementLimit::_initialize()
{
    // Supertypes
    ::amalthea::RequirementLimit::_initialize();

    // References
    if (m_limitValue)
    {
        m_limitValue->_initialize();
    }

    /*PROTECTED REGION ID(FrequencyRequirementLimitImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject FrequencyRequirementLimit::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        return amalthea::RequirementLimit::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::FREQUENCYREQUIREMENTLIMIT__METRIC:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::FrequencyMetric
                > ::toAny(_any, m_metric);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::FREQUENCYREQUIREMENTLIMIT__LIMITVALUE:
    {
        if (m_limitValue)
            _any = ::ecore::as < ::ecore::EObject > (m_limitValue);
        return _any;
    }
    }
    throw std::runtime_error(
            "FrequencyRequirementLimit::eGet Error. FeatureID:" + _featureID);
}

void FrequencyRequirementLimit::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        amalthea::RequirementLimit::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::FREQUENCYREQUIREMENTLIMIT__METRIC:
    {
        ::amalthea::FrequencyMetric _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::FrequencyMetric
                > ::fromAny(_newValue, _t0);
        ::amalthea::FrequencyRequirementLimit::setMetric(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::FREQUENCYREQUIREMENTLIMIT__LIMITVALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Frequency_ptr _t1 =
                dynamic_cast< ::amalthea::Frequency* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Frequency >(_t0);*/
        ::amalthea::FrequencyRequirementLimit::setLimitValue(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "FrequencyRequirementLimit::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean FrequencyRequirementLimit::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        return amalthea::RequirementLimit::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::FREQUENCYREQUIREMENTLIMIT__METRIC:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::FrequencyMetric
                > ::is_set(m_metric);
    }
    case ::amalthea::AmaltheaPackage::FREQUENCYREQUIREMENTLIMIT__LIMITVALUE:
    {
        return (bool) m_limitValue;
    }
    }
    throw std::runtime_error(
            "FrequencyRequirementLimit::eIsSet Error. FeatureID:" + _featureID);
}

void FrequencyRequirementLimit::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "FrequencyRequirementLimit::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr FrequencyRequirementLimit::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getFrequencyRequirementLimit();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void FrequencyRequirementLimit::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::FREQUENCYREQUIREMENTLIMIT__LIMITVALUE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void FrequencyRequirementLimit::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::FREQUENCYREQUIREMENTLIMIT__LIMITVALUE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

