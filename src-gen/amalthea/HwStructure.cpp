// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwStructure.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwStructure.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwPort.hpp>
#include <amalthea/HwStructure.hpp>
#include <amalthea/HwModule.hpp>
#include <amalthea/HwConnection.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(HwStructure.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
HwStructure::HwStructure()
{

    m_ports.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::HwPort_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHwStructure__ports()));
    m_structures.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwStructure_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHwStructure__structures()));
    m_modules.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwModule_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHwStructure__modules()));
    m_connections.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwConnection_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHwStructure__connections()));
    m_innerPorts.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::HwPort_ptr,
                    -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHwStructure__innerPorts()));

    /*PROTECTED REGION ID(HwStructureImpl__HwStructureImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

HwStructure::~HwStructure()
{
}

// Attributes

::amalthea::StructureType HwStructure::getStructureType() const
{
    return m_structureType;
}

void HwStructure::setStructureType(::amalthea::StructureType _structureType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::StructureType _old_structureType = m_structureType;
#endif
    m_structureType = _structureType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwStructure__structureType(), _old_structureType, m_structureType);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::HwPort_ptr >& HwStructure::getPorts() const
{
    return *m_ports;
}

::ecorecpp::mapping::EList< ::amalthea::HwPort_ptr >& HwStructure::getPorts()
{
    return *m_ports;
}

const ::ecorecpp::mapping::EList< ::amalthea::HwStructure_ptr >& HwStructure::getStructures() const
{
    return *m_structures;
}

::ecorecpp::mapping::EList< ::amalthea::HwStructure_ptr >& HwStructure::getStructures()
{
    return *m_structures;
}

const ::ecorecpp::mapping::EList< ::amalthea::HwModule_ptr >& HwStructure::getModules() const
{
    return *m_modules;
}

::ecorecpp::mapping::EList< ::amalthea::HwModule_ptr >& HwStructure::getModules()
{
    return *m_modules;
}

const ::ecorecpp::mapping::EList< ::amalthea::HwConnection_ptr >& HwStructure::getConnections() const
{
    return *m_connections;
}

::ecorecpp::mapping::EList< ::amalthea::HwConnection_ptr >& HwStructure::getConnections()
{
    return *m_connections;
}

const ::ecorecpp::mapping::EList< ::amalthea::HwPort_ptr >& HwStructure::getInnerPorts() const
{
    return *m_innerPorts;
}

::ecorecpp::mapping::EList< ::amalthea::HwPort_ptr >& HwStructure::getInnerPorts()
{
    return *m_innerPorts;
}

