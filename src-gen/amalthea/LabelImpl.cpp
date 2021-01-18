// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LabelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Label.hpp"
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
#include <amalthea/Section.hpp>
#include <amalthea/LabelAccess.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(LabelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Label::_initialize()
{
    // Supertypes
    ::amalthea::AbstractMemoryElement::_initialize();
    ::amalthea::IDisplayName::_initialize();
    ::amalthea::INamespaceMember::_initialize();

    // References
    if (m_dataType)
    {
        m_dataType->_initialize();
    }

    /*PROTECTED REGION ID(LabelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Label::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::LABEL__DATATYPE:
    {
        if (m_dataType)
            _any = ::ecore::as < ::ecore::EObject > (m_dataType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::LABEL__CONSTANT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_constant);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::LABEL__BVOLATILE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_bVolatile);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::LABEL__DATASTABILITY:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::LabelDataStability
                > ::toAny(_any, m_dataStability);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::LABEL__STABILITYLEVEL:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::DataStabilityLevel
                > ::toAny(_any, m_stabilityLevel);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::LABEL__SECTION:
    {
        if (m_section)
            _any = ::ecore::as < ::ecore::EObject > (m_section);
        return _any;
    }
    }
    throw std::runtime_error("Label::eGet Error. FeatureID:" + _featureID);
}

void Label::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::LABEL__DATATYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataType_ptr _t1 =
                dynamic_cast< ::amalthea::DataType* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataType >(_t0);*/
        ::amalthea::Label::setDataType(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABEL__CONSTANT:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::amalthea::Label::setConstant(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABEL__BVOLATILE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::amalthea::Label::setBVolatile(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABEL__DATASTABILITY:
    {
        ::amalthea::LabelDataStability _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::LabelDataStability
                > ::fromAny(_newValue, _t0);
        ::amalthea::Label::setDataStability(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABEL__STABILITYLEVEL:
    {
        ::amalthea::DataStabilityLevel _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::DataStabilityLevel
                > ::fromAny(_newValue, _t0);
        ::amalthea::Label::setStabilityLevel(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABEL__SECTION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Section_ptr _t1 =
                dynamic_cast< ::amalthea::Section* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Section >(_t0);*/
        ::amalthea::Label::setSection(_t1);
        return;
    }
    }
    throw std::runtime_error("Label::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Label::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::LABEL__DATATYPE:
    {
        return (bool) m_dataType;
    }
    case ::amalthea::AmaltheaPackage::LABEL__CONSTANT:
    {
        return m_constant != false;
    }
    case ::amalthea::AmaltheaPackage::LABEL__BVOLATILE:
    {
        return m_bVolatile != false;
    }
    case ::amalthea::AmaltheaPackage::LABEL__DATASTABILITY:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::LabelDataStability
                > ::is_set(m_dataStability);
    }
    case ::amalthea::AmaltheaPackage::LABEL__STABILITYLEVEL:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::DataStabilityLevel
                > ::is_set(m_stabilityLevel);
    }
    case ::amalthea::AmaltheaPackage::LABEL__SECTION:
    {
        return (bool) m_section;
    }
    case ::amalthea::AmaltheaPackage::LABEL__LABELACCESSES:
    {
        return m_labelAccesses && m_labelAccesses->size();
    }
    case ::amalthea::AmaltheaPackage::LABEL__REFERRINGCOMPONENTS:
    {
        return m_referringComponents && m_referringComponents->size();
    }
    }
    throw std::runtime_error("Label::eIsSet Error. FeatureID:" + _featureID);
}

void Label::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Label::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Label::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getLabel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Label::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::LABEL__DATATYPE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::LABEL__SECTION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Label::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::LABEL__DATATYPE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::LABEL__SECTION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

