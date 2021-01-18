// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/StimuliModelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "StimuliModel.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Stimulus.hpp>
#include <amalthea/Clock.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(StimuliModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void StimuliModel::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_stimuli->size(); i++)
    {
        (*m_stimuli)[i]->_initialize();
    }
    for (size_t i = 0; i < m_clocks->size(); i++)
    {
        (*m_clocks)[i]->_initialize();
    }

    /*PROTECTED REGION ID(StimuliModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject StimuliModel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::STIMULIMODEL__STIMULI:
    {
        _any = m_stimuli->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::STIMULIMODEL__CLOCKS:
    {
        _any = m_clocks->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "StimuliModel::eGet Error. FeatureID:" + _featureID);
}

void StimuliModel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::STIMULIMODEL__STIMULI:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::StimuliModel::getStimuli().clear();
        ::amalthea::StimuliModel::getStimuli().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::STIMULIMODEL__CLOCKS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::StimuliModel::getClocks().clear();
        ::amalthea::StimuliModel::getClocks().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "StimuliModel::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean StimuliModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::STIMULIMODEL__STIMULI:
    {
        return m_stimuli && m_stimuli->size();
    }
    case ::amalthea::AmaltheaPackage::STIMULIMODEL__CLOCKS:
    {
        return m_clocks && m_clocks->size();
    }
    }
    throw std::runtime_error(
            "StimuliModel::eIsSet Error. FeatureID:" + _featureID);
}

void StimuliModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "StimuliModel::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr StimuliModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getStimuliModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void StimuliModel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::STIMULIMODEL__STIMULI:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::STIMULIMODEL__CLOCKS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void StimuliModel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::STIMULIMODEL__STIMULI:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::STIMULIMODEL__CLOCKS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

