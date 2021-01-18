// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataStabilityGroupImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataStabilityGroup.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/DataGroupScope.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DataStabilityGroupImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DataStabilityGroup::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();

    // References
    if (m_scope)
    {
        m_scope->_initialize();
    }

    /*PROTECTED REGION ID(DataStabilityGroupImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DataStabilityGroup::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DATASTABILITYGROUP__LABELS:
    {
        _any = m_labels->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATASTABILITYGROUP__SCOPE:
    {
        if (m_scope)
            _any = ::ecore::as < ::ecore::EObject > (m_scope);
        return _any;
    }
    }
    throw std::runtime_error(
            "DataStabilityGroup::eGet Error. FeatureID:" + _featureID);
}

void DataStabilityGroup::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DATASTABILITYGROUP__LABELS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::DataStabilityGroup::getLabels().clear();
        ::amalthea::DataStabilityGroup::getLabels().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATASTABILITYGROUP__SCOPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataGroupScope_ptr _t1 =
                dynamic_cast< ::amalthea::DataGroupScope* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataGroupScope >(_t0);*/
        ::amalthea::DataStabilityGroup::setScope(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "DataStabilityGroup::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DataStabilityGroup::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::DATASTABILITYGROUP__LABELS:
    {
        return m_labels && m_labels->size();
    }
    case ::amalthea::AmaltheaPackage::DATASTABILITYGROUP__SCOPE:
    {
        return (bool) m_scope;
    }
    }
    throw std::runtime_error(
            "DataStabilityGroup::eIsSet Error. FeatureID:" + _featureID);
}

void DataStabilityGroup::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DataStabilityGroup::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DataStabilityGroup::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDataStabilityGroup();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DataStabilityGroup::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATASTABILITYGROUP__LABELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATASTABILITYGROUP__SCOPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DataStabilityGroup::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATASTABILITYGROUP__LABELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATASTABILITYGROUP__SCOPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

