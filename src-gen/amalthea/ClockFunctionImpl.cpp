// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ClockFunctionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ClockFunction.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Clock.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/Frequency.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ClockFunctionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ClockFunction::_initialize()
{
    // Supertypes
    ::amalthea::Clock::_initialize();

    // References
    if (m_period)
    {
        m_period->_initialize();
    }
    if (m_peakToPeak)
    {
        m_peakToPeak->_initialize();
    }
    if (m_xOffset)
    {
        m_xOffset->_initialize();
    }
    if (m_yOffset)
    {
        m_yOffset->_initialize();
    }

    /*PROTECTED REGION ID(ClockFunctionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ClockFunction::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__CURVETYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::CurveType
                > ::toAny(_any, m_curveType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__PERIOD:
    {
        if (m_period)
            _any = ::ecore::as < ::ecore::EObject > (m_period);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__PEAKTOPEAK:
    {
        if (m_peakToPeak)
            _any = ::ecore::as < ::ecore::EObject > (m_peakToPeak);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__XOFFSET:
    {
        if (m_xOffset)
            _any = ::ecore::as < ::ecore::EObject > (m_xOffset);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__YOFFSET:
    {
        if (m_yOffset)
            _any = ::ecore::as < ::ecore::EObject > (m_yOffset);
        return _any;
    }
    }
    throw std::runtime_error(
            "ClockFunction::eGet Error. FeatureID:" + _featureID);
}

void ClockFunction::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__CURVETYPE:
    {
        ::amalthea::CurveType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::CurveType
                > ::fromAny(_newValue, _t0);
        ::amalthea::ClockFunction::setCurveType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__PERIOD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::ClockFunction::setPeriod(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__PEAKTOPEAK:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Frequency_ptr _t1 =
                dynamic_cast< ::amalthea::Frequency* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Frequency >(_t0);*/
        ::amalthea::ClockFunction::setPeakToPeak(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__XOFFSET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::ClockFunction::setXOffset(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__YOFFSET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Frequency_ptr _t1 =
                dynamic_cast< ::amalthea::Frequency* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Frequency >(_t0);*/
        ::amalthea::ClockFunction::setYOffset(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ClockFunction::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ClockFunction::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__CURVETYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::CurveType
                > ::is_set(m_curveType);
    }
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__PERIOD:
    {
        return (bool) m_period;
    }
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__PEAKTOPEAK:
    {
        return (bool) m_peakToPeak;
    }
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__XOFFSET:
    {
        return (bool) m_xOffset;
    }
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__YOFFSET:
    {
        return (bool) m_yOffset;
    }
    }
    throw std::runtime_error(
            "ClockFunction::eIsSet Error. FeatureID:" + _featureID);
}

void ClockFunction::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ClockFunction::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ClockFunction::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getClockFunction();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ClockFunction::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__PERIOD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__PEAKTOPEAK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__XOFFSET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__YOFFSET:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ClockFunction::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__PERIOD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__PEAKTOPEAK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__XOFFSET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLOCKFUNCTION__YOFFSET:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

