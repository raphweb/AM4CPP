// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwPortImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwPort.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwConnection.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(HwPortImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void HwPort::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();
    ::amalthea::ITaggable::_initialize();

    // References

    /*PROTECTED REGION ID(HwPortImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

std::vector< ::ecore::EString > HwPort::getNamePrefixSegments()
{
    /*PROTECTED REGION ID(HwPortImpl_getNamePrefixSegments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::HwPort::getNamePrefixSegments";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject HwPort::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::HWPORT__BITWIDTH:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_bitWidth);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWPORT__PRIORITY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_priority);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWPORT__PORTTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PortType
                > ::toAny(_any, m_portType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWPORT__PORTINTERFACE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PortInterface
                > ::toAny(_any, m_portInterface);
        return _any;
    }
    }
    throw std::runtime_error("HwPort::eGet Error. FeatureID:" + _featureID);
}

void HwPort::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        amalthea::ITaggable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWPORT__BITWIDTH:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::HwPort::setBitWidth(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWPORT__PRIORITY:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::HwPort::setPriority(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWPORT__PORTTYPE:
    {
        ::amalthea::PortType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PortType
                > ::fromAny(_newValue, _t0);
        ::amalthea::HwPort::setPortType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWPORT__PORTINTERFACE:
    {
        ::amalthea::PortInterface _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PortInterface
                > ::fromAny(_newValue, _t0);
        ::amalthea::HwPort::setPortInterface(_t0);
        return;
    }
    }
    throw std::runtime_error("HwPort::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean HwPort::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::HWPORT__BITWIDTH:
    {
        return m_bitWidth != 0;
    }
    case ::amalthea::AmaltheaPackage::HWPORT__PRIORITY:
    {
        return m_priority != 0;
    }
    case ::amalthea::AmaltheaPackage::HWPORT__PORTTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::PortType
                > ::is_set(m_portType);
    }
    case ::amalthea::AmaltheaPackage::HWPORT__PORTINTERFACE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::PortInterface
                > ::is_set(m_portInterface);
    }
    case ::amalthea::AmaltheaPackage::HWPORT__DELEGATED:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_delegated);
    }
    case ::amalthea::AmaltheaPackage::HWPORT__CONNECTIONS:
    {
        return m_connections && m_connections->size();
    }
    }
    throw std::runtime_error("HwPort::eIsSet Error. FeatureID:" + _featureID);
}

void HwPort::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("HwPort::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr HwPort::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getHwPort();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void HwPort::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void HwPort::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

