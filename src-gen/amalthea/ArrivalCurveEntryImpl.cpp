// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ArrivalCurveEntryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ArrivalCurveEntry.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ArrivalCurveEntryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ArrivalCurveEntry::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_lowerTimeBorder)
    {
        m_lowerTimeBorder->_initialize();
    }
    if (m_upperTimeBorder)
    {
        m_upperTimeBorder->_initialize();
    }

    /*PROTECTED REGION ID(ArrivalCurveEntryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ArrivalCurveEntry::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__NUMBEROFOCCURRENCES:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_numberOfOccurrences);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__LOWERTIMEBORDER:
    {
        if (m_lowerTimeBorder)
            _any = ::ecore::as < ::ecore::EObject > (m_lowerTimeBorder);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__UPPERTIMEBORDER:
    {
        if (m_upperTimeBorder)
            _any = ::ecore::as < ::ecore::EObject > (m_upperTimeBorder);
        return _any;
    }
    }
    throw std::runtime_error(
            "ArrivalCurveEntry::eGet Error. FeatureID:" + _featureID);
}

void ArrivalCurveEntry::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__NUMBEROFOCCURRENCES:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::ArrivalCurveEntry::setNumberOfOccurrences(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__LOWERTIMEBORDER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::ArrivalCurveEntry::setLowerTimeBorder(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__UPPERTIMEBORDER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::ArrivalCurveEntry::setUpperTimeBorder(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ArrivalCurveEntry::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ArrivalCurveEntry::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__NUMBEROFOCCURRENCES:
    {
        return m_numberOfOccurrences != 0;
    }
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__LOWERTIMEBORDER:
    {
        return (bool) m_lowerTimeBorder;
    }
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__UPPERTIMEBORDER:
    {
        return (bool) m_upperTimeBorder;
    }
    }
    throw std::runtime_error(
            "ArrivalCurveEntry::eIsSet Error. FeatureID:" + _featureID);
}

void ArrivalCurveEntry::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ArrivalCurveEntry::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ArrivalCurveEntry::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getArrivalCurveEntry();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ArrivalCurveEntry::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__LOWERTIMEBORDER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__UPPERTIMEBORDER:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ArrivalCurveEntry::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__LOWERTIMEBORDER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ARRIVALCURVEENTRY__UPPERTIMEBORDER:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

