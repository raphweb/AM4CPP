// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataCoherencyGroupImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataCoherencyGroup.hpp"
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

/*PROTECTED REGION ID(DataCoherencyGroupImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DataCoherencyGroup::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();

    // References
    if (m_scope)
    {
        m_scope->_initialize();
    }

    /*PROTECTED REGION ID(DataCoherencyGroupImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DataCoherencyGroup::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__LABELS:
    {
        _any = m_labels->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__SCOPE:
    {
        if (m_scope)
            _any = ::ecore::as < ::ecore::EObject > (m_scope);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__DIRECTION:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::CoherencyDirection
                > ::toAny(_any, m_direction);
        return _any;
    }
    }
    throw std::runtime_error(
            "DataCoherencyGroup::eGet Error. FeatureID:" + _featureID);
}

void DataCoherencyGroup::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__LABELS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::DataCoherencyGroup::getLabels().clear();
        ::amalthea::DataCoherencyGroup::getLabels().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__SCOPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataGroupScope_ptr _t1 =
                dynamic_cast< ::amalthea::DataGroupScope* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataGroupScope >(_t0);*/
        ::amalthea::DataCoherencyGroup::setScope(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__DIRECTION:
    {
        ::amalthea::CoherencyDirection _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::CoherencyDirection
                > ::fromAny(_newValue, _t0);
        ::amalthea::DataCoherencyGroup::setDirection(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "DataCoherencyGroup::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DataCoherencyGroup::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__LABELS:
    {
        return m_labels && m_labels->size();
    }
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__SCOPE:
    {
        return (bool) m_scope;
    }
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__DIRECTION:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::CoherencyDirection
                > ::is_set(m_direction);
    }
    }
    throw std::runtime_error(
            "DataCoherencyGroup::eIsSet Error. FeatureID:" + _featureID);
}

void DataCoherencyGroup::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DataCoherencyGroup::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DataCoherencyGroup::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDataCoherencyGroup();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DataCoherencyGroup::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__LABELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__SCOPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DataCoherencyGroup::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__LABELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATACOHERENCYGROUP__SCOPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

