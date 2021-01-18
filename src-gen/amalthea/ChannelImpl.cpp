// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChannelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Channel.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/IDisplayName.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/DataType.hpp>
#include <amalthea/ChannelAccess.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ChannelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Channel::_initialize()
{
    // Supertypes
    ::amalthea::AbstractMemoryElement::_initialize();
    ::amalthea::IDisplayName::_initialize();
    ::amalthea::INamespaceMember::_initialize();

    // References
    if (m_elementType)
    {
        m_elementType->_initialize();
    }

    /*PROTECTED REGION ID(ChannelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Channel::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
        return amalthea::AbstractMemoryElement::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::IDISPLAYNAME__DISPLAYNAME:
    {
        return amalthea::IDisplayName::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        return amalthea::INamespaceMember::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CHANNEL__ELEMENTTYPE:
    {
        if (m_elementType)
            _any = ::ecore::as < ::ecore::EObject > (m_elementType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CHANNEL__DEFAULTELEMENTS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_defaultElements);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CHANNEL__MAXELEMENTS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_maxElements);
        return _any;
    }
    }
    throw std::runtime_error("Channel::eGet Error. FeatureID:" + _featureID);
}

void Channel::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
        amalthea::AbstractMemoryElement::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::IDISPLAYNAME__DISPLAYNAME:
    {
        amalthea::IDisplayName::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        amalthea::INamespaceMember::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHANNEL__ELEMENTTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataType_ptr _t1 =
                dynamic_cast< ::amalthea::DataType* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataType >(_t0);*/
        ::amalthea::Channel::setElementType(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHANNEL__DEFAULTELEMENTS:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::Channel::setDefaultElements(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHANNEL__MAXELEMENTS:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::Channel::setMaxElements(_t0);
        return;
    }
    }
    throw std::runtime_error("Channel::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Channel::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__MAPPINGS:
    {
        return amalthea::AbstractMemoryElement::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IDISPLAYNAME__DISPLAYNAME:
    {
        return amalthea::IDisplayName::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        return amalthea::INamespaceMember::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CHANNEL__ELEMENTTYPE:
    {
        return (bool) m_elementType;
    }
    case ::amalthea::AmaltheaPackage::CHANNEL__DEFAULTELEMENTS:
    {
        return m_defaultElements != 0;
    }
    case ::amalthea::AmaltheaPackage::CHANNEL__MAXELEMENTS:
    {
        return m_maxElements != 0;
    }
    case ::amalthea::AmaltheaPackage::CHANNEL__CHANNELACCESSES:
    {
        return m_channelAccesses && m_channelAccesses->size();
    }
    }
    throw std::runtime_error("Channel::eIsSet Error. FeatureID:" + _featureID);
}

void Channel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Channel::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Channel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getChannel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Channel::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CHANNEL__ELEMENTTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Channel::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CHANNEL__ELEMENTTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

