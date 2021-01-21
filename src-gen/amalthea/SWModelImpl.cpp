// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SWModelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SWModel.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ISR.hpp>
#include <amalthea/Task.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/Channel.hpp>
#include <amalthea/ProcessPrototype.hpp>
#include <amalthea/Section.hpp>
#include <amalthea/Activation.hpp>
#include <amalthea/OsEvent.hpp>
#include <amalthea/TypeDefinition.hpp>
#include <amalthea/CustomEntity.hpp>
#include <amalthea/ProcessChain.hpp>
#include <amalthea/Mode.hpp>
#include <amalthea/ModeLabel.hpp>
#include <amalthea/ModeLiteral.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SWModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SWModel::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_isrs->size(); i++)
    {
        (*m_isrs)[i]->_initialize();
    }
    for (size_t i = 0; i < m_tasks->size(); i++)
    {
        (*m_tasks)[i]->_initialize();
    }
    for (size_t i = 0; i < m_runnables->size(); i++)
    {
        (*m_runnables)[i]->_initialize();
    }
    for (size_t i = 0; i < m_labels->size(); i++)
    {
        (*m_labels)[i]->_initialize();
    }
    for (size_t i = 0; i < m_channels->size(); i++)
    {
        (*m_channels)[i]->_initialize();
    }
    for (size_t i = 0; i < m_processPrototypes->size(); i++)
    {
        (*m_processPrototypes)[i]->_initialize();
    }
    for (size_t i = 0; i < m_sections->size(); i++)
    {
        (*m_sections)[i]->_initialize();
    }
    for (size_t i = 0; i < m_activations->size(); i++)
    {
        (*m_activations)[i]->_initialize();
    }
    for (size_t i = 0; i < m_events->size(); i++)
    {
        (*m_events)[i]->_initialize();
    }
    for (size_t i = 0; i < m_typeDefinitions->size(); i++)
    {
        (*m_typeDefinitions)[i]->_initialize();
    }
    for (size_t i = 0; i < m_customEntities->size(); i++)
    {
        (*m_customEntities)[i]->_initialize();
    }
    for (size_t i = 0; i < m_processChains->size(); i++)
    {
        (*m_processChains)[i]->_initialize();
    }
    for (size_t i = 0; i < m_modes->size(); i++)
    {
        (*m_modes)[i]->_initialize();
    }
    for (size_t i = 0; i < m_modeLabels->size(); i++)
    {
        (*m_modeLabels)[i]->_initialize();
    }

    /*PROTECTED REGION ID(SWModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::amalthea::ModeLiteral_ptr SWModel::modeLiteral(::ecore::EString const &_mode,
        ::ecore::EString const &_literal)
{
    /*PROTECTED REGION ID(SWModelImpl_modeLiteral) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::SWModel::modeLiteral";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject SWModel::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__ISRS:
    {
        _any = m_isrs->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__TASKS:
    {
        _any = m_tasks->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__RUNNABLES:
    {
        _any = m_runnables->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__LABELS:
    {
        _any = m_labels->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__CHANNELS:
    {
        _any = m_channels->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__PROCESSPROTOTYPES:
    {
        _any = m_processPrototypes->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__SECTIONS:
    {
        _any = m_sections->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__ACTIVATIONS:
    {
        _any = m_activations->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__EVENTS:
    {
        _any = m_events->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__TYPEDEFINITIONS:
    {
        _any = m_typeDefinitions->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__CUSTOMENTITIES:
    {
        _any = m_customEntities->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__PROCESSCHAINS:
    {
        _any = m_processChains->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__MODES:
    {
        _any = m_modes->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__MODELABELS:
    {
        _any = m_modeLabels->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error("SWModel::eGet Error. FeatureID:" + _featureID);
}

void SWModel::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__ISRS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getIsrs().clear();
        ::amalthea::SWModel::getIsrs().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__TASKS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getTasks().clear();
        ::amalthea::SWModel::getTasks().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__RUNNABLES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getRunnables().clear();
        ::amalthea::SWModel::getRunnables().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__LABELS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getLabels().clear();
        ::amalthea::SWModel::getLabels().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__CHANNELS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getChannels().clear();
        ::amalthea::SWModel::getChannels().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__PROCESSPROTOTYPES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getProcessPrototypes().clear();
        ::amalthea::SWModel::getProcessPrototypes().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__SECTIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getSections().clear();
        ::amalthea::SWModel::getSections().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__ACTIVATIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getActivations().clear();
        ::amalthea::SWModel::getActivations().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__EVENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getEvents().clear();
        ::amalthea::SWModel::getEvents().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__TYPEDEFINITIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getTypeDefinitions().clear();
        ::amalthea::SWModel::getTypeDefinitions().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__CUSTOMENTITIES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getCustomEntities().clear();
        ::amalthea::SWModel::getCustomEntities().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__PROCESSCHAINS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getProcessChains().clear();
        ::amalthea::SWModel::getProcessChains().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__MODES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getModes().clear();
        ::amalthea::SWModel::getModes().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__MODELABELS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SWModel::getModeLabels().clear();
        ::amalthea::SWModel::getModeLabels().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error("SWModel::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SWModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__ISRS:
    {
        return m_isrs && m_isrs->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__TASKS:
    {
        return m_tasks && m_tasks->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__RUNNABLES:
    {
        return m_runnables && m_runnables->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__LABELS:
    {
        return m_labels && m_labels->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__CHANNELS:
    {
        return m_channels && m_channels->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__PROCESSPROTOTYPES:
    {
        return m_processPrototypes && m_processPrototypes->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__SECTIONS:
    {
        return m_sections && m_sections->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__ACTIVATIONS:
    {
        return m_activations && m_activations->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__EVENTS:
    {
        return m_events && m_events->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__TYPEDEFINITIONS:
    {
        return m_typeDefinitions && m_typeDefinitions->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__CUSTOMENTITIES:
    {
        return m_customEntities && m_customEntities->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__PROCESSCHAINS:
    {
        return m_processChains && m_processChains->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__MODES:
    {
        return m_modes && m_modes->size();
    }
    case ::amalthea::AmaltheaPackage::SWMODEL__MODELABELS:
    {
        return m_modeLabels && m_modeLabels->size();
    }
    }
    throw std::runtime_error("SWModel::eIsSet Error. FeatureID:" + _featureID);
}

void SWModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("SWModel::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SWModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSWModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SWModel::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__ISRS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__TASKS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__RUNNABLES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__LABELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__CHANNELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__PROCESSPROTOTYPES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__SECTIONS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__ACTIVATIONS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__EVENTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__TYPEDEFINITIONS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__CUSTOMENTITIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__PROCESSCHAINS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__MODES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__MODELABELS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SWModel::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__ISRS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__TASKS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__RUNNABLES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__LABELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__CHANNELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__PROCESSPROTOTYPES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__SECTIONS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__ACTIVATIONS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__EVENTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__TYPEDEFINITIONS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__CUSTOMENTITIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__PROCESSCHAINS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__MODES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SWMODEL__MODELABELS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

