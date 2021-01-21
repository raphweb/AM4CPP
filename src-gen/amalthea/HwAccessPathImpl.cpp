// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwAccessPathImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwAccessPath.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/HwPath.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <amalthea/HwDestination.hpp>
#include <amalthea/HwAccessElement.hpp>
#include <amalthea/HwPathElement.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(HwAccessPathImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void HwAccessPath::_initialize()
{
    // Supertypes
    ::amalthea::HwPath::_initialize();
    ::amalthea::INamed::_initialize();

    // References

    /*PROTECTED REGION ID(HwAccessPathImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject HwAccessPath::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        return amalthea::INamed::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__CONTAININGACCESSELEMENT:
    {
        if (m_containingAccessElement)
            _any = ::ecore::as < ::ecore::EObject > (m_containingAccessElement);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__PATHELEMENTS:
    {
        _any = m_pathElements->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__STARTADDRESS:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::Address
                > ::toAny(_any, m_startAddress);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__ENDADDRESS:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::Address
                > ::toAny(_any, m_endAddress);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__MEMOFFSET:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::Address
                > ::toAny(_any, m_memOffset);
        return _any;
    }
    }
    throw std::runtime_error(
            "HwAccessPath::eGet Error. FeatureID:" + _featureID);
}

void HwAccessPath::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        amalthea::INamed::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__CONTAININGACCESSELEMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::HwAccessElement_ptr _t1 =
                dynamic_cast< ::amalthea::HwAccessElement* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::HwAccessElement >(_t0);*/
        ::amalthea::HwAccessPath::setContainingAccessElement(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__PATHELEMENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::HwAccessPath::getPathElements().clear();
        ::amalthea::HwAccessPath::getPathElements().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__STARTADDRESS:
    {
        ::amalthea::Address _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::Address
                > ::fromAny(_newValue, _t0);
        ::amalthea::HwAccessPath::setStartAddress(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__ENDADDRESS:
    {
        ::amalthea::Address _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::Address
                > ::fromAny(_newValue, _t0);
        ::amalthea::HwAccessPath::setEndAddress(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__MEMOFFSET:
    {
        ::amalthea::Address _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::Address
                > ::fromAny(_newValue, _t0);
        ::amalthea::HwAccessPath::setMemOffset(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "HwAccessPath::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean HwAccessPath::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::HWPATH__SOURCE:
    case ::amalthea::AmaltheaPackage::HWPATH__DESTINATION:
    {
        return amalthea::HwPath::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    case ::amalthea::AmaltheaPackage::INAMED__QUALIFIEDNAME:
    {
        return amalthea::INamed::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__CONTAININGACCESSELEMENT:
    {
        return (bool) m_containingAccessElement;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__PATHELEMENTS:
    {
        return m_pathElements && m_pathElements->size();
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__STARTADDRESS:
    {
        return m_startAddress != 0;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__ENDADDRESS:
    {
        return m_endAddress != 0;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__MEMOFFSET:
    {
        return m_memOffset != 0;
    }
    }
    throw std::runtime_error(
            "HwAccessPath::eIsSet Error. FeatureID:" + _featureID);
}

void HwAccessPath::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "HwAccessPath::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr HwAccessPath::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getHwAccessPath();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void HwAccessPath::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__CONTAININGACCESSELEMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::HwAccessElement_ptr _t1 =
                dynamic_cast< ::amalthea::HwAccessElement* >(_t0.get());

        // set reference
        basicsetContainingAccessElement(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__PATHELEMENTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void HwAccessPath::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__CONTAININGACCESSELEMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::HwAccessElement_ptr _t1 =
                dynamic_cast< ::amalthea::HwAccessElement* >(_t0.get());

        // set reference
        if (basicgetContainingAccessElement() == _t1)
            basicsetContainingAccessElement(nullptr);
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSPATH__PATHELEMENTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

