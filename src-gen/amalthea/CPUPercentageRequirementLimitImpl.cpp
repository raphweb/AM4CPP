// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CPUPercentageRequirementLimitImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CPUPercentageRequirementLimit.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CPUPercentageRequirementLimitImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void CPUPercentageRequirementLimit::_initialize()
{
    // Supertypes
    ::amalthea::RequirementLimit::_initialize();

    // References

    /*PROTECTED REGION ID(CPUPercentageRequirementLimitImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CPUPercentageRequirementLimit::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        return amalthea::RequirementLimit::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT__METRIC:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::CPUPercentageMetric
                > ::toAny(_any, m_metric);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT__LIMITVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_limitValue);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT__HARDWARECONTEXT:
    {
        if (m_hardwareContext)
            _any = ::ecore::as < ::ecore::EObject > (m_hardwareContext);
        return _any;
    }
    }
    throw std::runtime_error(
            "CPUPercentageRequirementLimit::eGet Error. FeatureID:"
                    + _featureID);
}

void CPUPercentageRequirementLimit::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        amalthea::RequirementLimit::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT__METRIC:
    {
        ::amalthea::CPUPercentageMetric _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::CPUPercentageMetric
                > ::fromAny(_newValue, _t0);
        ::amalthea::CPUPercentageRequirementLimit::setMetric(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT__LIMITVALUE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::CPUPercentageRequirementLimit::setLimitValue(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT__HARDWARECONTEXT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ProcessingUnit_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessingUnit* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ProcessingUnit >(_t0);*/
        ::amalthea::CPUPercentageRequirementLimit::setHardwareContext(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "CPUPercentageRequirementLimit::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean CPUPercentageRequirementLimit::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        return amalthea::RequirementLimit::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT__METRIC:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::CPUPercentageMetric
                > ::is_set(m_metric);
    }
    case ::amalthea::AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT__LIMITVALUE:
    {
        return m_limitValue != 0.0;
    }
    case ::amalthea::AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT__HARDWARECONTEXT:
    {
        return (bool) m_hardwareContext;
    }
    }
    throw std::runtime_error(
            "CPUPercentageRequirementLimit::eIsSet Error. FeatureID:"
                    + _featureID);
}

void CPUPercentageRequirementLimit::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "CPUPercentageRequirementLimit::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr CPUPercentageRequirementLimit::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getCPUPercentageRequirementLimit();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CPUPercentageRequirementLimit::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT__HARDWARECONTEXT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CPUPercentageRequirementLimit::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT__HARDWARECONTEXT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

