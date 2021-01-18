// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Component.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Component.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/IComponentStructureMember.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/ComponentStructure.hpp>
#include <amalthea/ComponentPort.hpp>
#include <amalthea/AbstractProcess.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/Semaphore.hpp>
#include <amalthea/OsEvent.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Component.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Component::Component()
{

    m_ports.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ComponentPort_ptr, -1, true, true >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getComponent__ports(),
                    ::amalthea::AmaltheaPackage::COMPONENTPORT__CONTAININGCOMPONENT));
    m_processes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::AbstractProcess_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getComponent__processes()));
    m_runnables.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Runnable_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getComponent__runnables()));
    m_labels.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Label_ptr,
                    -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getComponent__labels()));
    m_semaphores.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Semaphore_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getComponent__semaphores()));
    m_osEvents.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::OsEvent_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getComponent__osEvents()));

    /*PROTECTED REGION ID(ComponentImpl__ComponentImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Component::~Component()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ComponentPort_ptr >& Component::getPorts() const
{
    return *m_ports;
}

::ecorecpp::mapping::EList< ::amalthea::ComponentPort_ptr >& Component::getPorts()
{
    return *m_ports;
}

const ::ecorecpp::mapping::EList< ::amalthea::AbstractProcess_ptr >& Component::getProcesses() const
{
    return *m_processes;
}

::ecorecpp::mapping::EList< ::amalthea::AbstractProcess_ptr >& Component::getProcesses()
{
    return *m_processes;
}

const ::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& Component::getRunnables() const
{
    return *m_runnables;
}

::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& Component::getRunnables()
{
    return *m_runnables;
}

const ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& Component::getLabels() const
{
    return *m_labels;
}

::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& Component::getLabels()
{
    return *m_labels;
}

const ::ecorecpp::mapping::EList< ::amalthea::Semaphore_ptr >& Component::getSemaphores() const
{
    return *m_semaphores;
}

::ecorecpp::mapping::EList< ::amalthea::Semaphore_ptr >& Component::getSemaphores()
{
    return *m_semaphores;
}

const ::ecorecpp::mapping::EList< ::amalthea::OsEvent_ptr >& Component::getOsEvents() const
{
    return *m_osEvents;
}

::ecorecpp::mapping::EList< ::amalthea::OsEvent_ptr >& Component::getOsEvents()
{
    return *m_osEvents;
}

