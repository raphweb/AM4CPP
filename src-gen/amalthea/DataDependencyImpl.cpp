// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataDependencyImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataDependency.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/RunnableParameter.hpp>
#include <amalthea/CallArgument.hpp>
#include <amalthea/Runnable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DataDependencyImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DataDependency::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(DataDependencyImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DataDependency::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__LABELS:
    {
        _any = m_labels->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__PARAMETERS:
    {
        _any = m_parameters->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__CALLARGUMENTS:
    {
        _any = m_callArguments->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "DataDependency::eGet Error. FeatureID:" + _featureID);
}

void DataDependency::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__LABELS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::DataDependency::getLabels().clear();
        ::amalthea::DataDependency::getLabels().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__PARAMETERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::DataDependency::getParameters().clear();
        ::amalthea::DataDependency::getParameters().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__CALLARGUMENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::DataDependency::getCallArguments().clear();
        ::amalthea::DataDependency::getCallArguments().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "DataDependency::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DataDependency::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__LABELS:
    {
        return m_labels && m_labels->size();
    }
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__PARAMETERS:
    {
        return m_parameters && m_parameters->size();
    }
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__CALLARGUMENTS:
    {
        return m_callArguments && m_callArguments->size();
    }
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__CONTAININGRUNNABLE:
    {
        return (bool) m_containingRunnable;
    }
    }
    throw std::runtime_error(
            "DataDependency::eIsSet Error. FeatureID:" + _featureID);
}

void DataDependency::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DataDependency::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DataDependency::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDataDependency();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DataDependency::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__LABELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__PARAMETERS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__CALLARGUMENTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DataDependency::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__LABELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__PARAMETERS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATADEPENDENCY__CALLARGUMENTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

