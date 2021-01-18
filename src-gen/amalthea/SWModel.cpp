// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SWModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SWModel.hpp"
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
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SWModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SWModel::SWModel()
{

    m_isrs.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::ISR_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__isrs()));
    m_tasks.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Task_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__tasks()));
    m_runnables.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Runnable_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__runnables()));
    m_labels.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Label_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__labels()));
    m_channels.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Channel_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__channels()));
    m_processPrototypes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ProcessPrototype_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__processPrototypes()));
    m_sections.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Section_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__sections()));
    m_activations.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Activation_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__activations()));
    m_events.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::OsEvent_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__events()));
    m_typeDefinitions.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::TypeDefinition_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__typeDefinitions()));
    m_customEntities.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::CustomEntity_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__customEntities()));
    m_processChains.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ProcessChain_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__processChains()));
    m_modes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Mode_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__modes()));
    m_modeLabels.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ModeLabel_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSWModel__modeLabels()));

    /*PROTECTED REGION ID(SWModelImpl__SWModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SWModel::~SWModel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ISR_ptr >& SWModel::getIsrs() const
{
    return *m_isrs;
}

::ecorecpp::mapping::EList< ::amalthea::ISR_ptr >& SWModel::getIsrs()
{
    return *m_isrs;
}

const ::ecorecpp::mapping::EList< ::amalthea::Task_ptr >& SWModel::getTasks() const
{
    return *m_tasks;
}

::ecorecpp::mapping::EList< ::amalthea::Task_ptr >& SWModel::getTasks()
{
    return *m_tasks;
}

const ::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& SWModel::getRunnables() const
{
    return *m_runnables;
}

::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& SWModel::getRunnables()
{
    return *m_runnables;
}

const ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& SWModel::getLabels() const
{
    return *m_labels;
}

::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& SWModel::getLabels()
{
    return *m_labels;
}

const ::ecorecpp::mapping::EList< ::amalthea::Channel_ptr >& SWModel::getChannels() const
{
    return *m_channels;
}

::ecorecpp::mapping::EList< ::amalthea::Channel_ptr >& SWModel::getChannels()
{
    return *m_channels;
}

const ::ecorecpp::mapping::EList< ::amalthea::ProcessPrototype_ptr >& SWModel::getProcessPrototypes() const
{
    return *m_processPrototypes;
}

::ecorecpp::mapping::EList< ::amalthea::ProcessPrototype_ptr >& SWModel::getProcessPrototypes()
{
    return *m_processPrototypes;
}

const ::ecorecpp::mapping::EList< ::amalthea::Section_ptr >& SWModel::getSections() const
{
    return *m_sections;
}

::ecorecpp::mapping::EList< ::amalthea::Section_ptr >& SWModel::getSections()
{
    return *m_sections;
}

const ::ecorecpp::mapping::EList< ::amalthea::Activation_ptr >& SWModel::getActivations() const
{
    return *m_activations;
}

::ecorecpp::mapping::EList< ::amalthea::Activation_ptr >& SWModel::getActivations()
{
    return *m_activations;
}

const ::ecorecpp::mapping::EList< ::amalthea::OsEvent_ptr >& SWModel::getEvents() const
{
    return *m_events;
}

::ecorecpp::mapping::EList< ::amalthea::OsEvent_ptr >& SWModel::getEvents()
{
    return *m_events;
}

const ::ecorecpp::mapping::EList< ::amalthea::TypeDefinition_ptr >& SWModel::getTypeDefinitions() const
{
    return *m_typeDefinitions;
}

::ecorecpp::mapping::EList< ::amalthea::TypeDefinition_ptr >& SWModel::getTypeDefinitions()
{
    return *m_typeDefinitions;
}

const ::ecorecpp::mapping::EList< ::amalthea::CustomEntity_ptr >& SWModel::getCustomEntities() const
{
    return *m_customEntities;
}

::ecorecpp::mapping::EList< ::amalthea::CustomEntity_ptr >& SWModel::getCustomEntities()
{
    return *m_customEntities;
}

const ::ecorecpp::mapping::EList< ::amalthea::ProcessChain_ptr >& SWModel::getProcessChains() const
{
    return *m_processChains;
}

::ecorecpp::mapping::EList< ::amalthea::ProcessChain_ptr >& SWModel::getProcessChains()
{
    return *m_processChains;
}

const ::ecorecpp::mapping::EList< ::amalthea::Mode_ptr >& SWModel::getModes() const
{
    return *m_modes;
}

::ecorecpp::mapping::EList< ::amalthea::Mode_ptr >& SWModel::getModes()
{
    return *m_modes;
}

const ::ecorecpp::mapping::EList< ::amalthea::ModeLabel_ptr >& SWModel::getModeLabels() const
{
    return *m_modeLabels;
}

::ecorecpp::mapping::EList< ::amalthea::ModeLabel_ptr >& SWModel::getModeLabels()
{
    return *m_modeLabels;
}

