// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ISystem.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ISystem.hpp"
#include <amalthea/ComponentInstance.hpp>
#include <amalthea/Connector.hpp>
#include <amalthea/QualifiedPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ISystem.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ISystem::ISystem()
{

    m_componentInstances.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ComponentInstance_ptr, -1, true, true >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getISystem__componentInstances(),
                    ::amalthea::AmaltheaPackage::COMPONENTINSTANCE__CONTAININGSYSTEM));
    m_connectors.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Connector_ptr, -1, true, true >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getISystem__connectors(),
                    ::amalthea::AmaltheaPackage::CONNECTOR__CONTAININGSYSTEM));
    m_groundedPorts.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::QualifiedPort_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getISystem__groundedPorts()));
    m_innerPorts.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::QualifiedPort_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getISystem__innerPorts()));

    /*PROTECTED REGION ID(ISystemImpl__ISystemImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ISystem::~ISystem()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ComponentInstance_ptr >& ISystem::getComponentInstances() const
{
    return *m_componentInstances;
}

::ecorecpp::mapping::EList< ::amalthea::ComponentInstance_ptr >& ISystem::getComponentInstances()
{
    return *m_componentInstances;
}

const ::ecorecpp::mapping::EList< ::amalthea::Connector_ptr >& ISystem::getConnectors() const
{
    return *m_connectors;
}

::ecorecpp::mapping::EList< ::amalthea::Connector_ptr >& ISystem::getConnectors()
{
    return *m_connectors;
}

const ::ecorecpp::mapping::EList< ::amalthea::QualifiedPort_ptr >& ISystem::getGroundedPorts() const
{
    return *m_groundedPorts;
}

::ecorecpp::mapping::EList< ::amalthea::QualifiedPort_ptr >& ISystem::getGroundedPorts()
{
    return *m_groundedPorts;
}

const ::ecorecpp::mapping::EList< ::amalthea::QualifiedPort_ptr >& ISystem::getInnerPorts() const
{
    return *m_innerPorts;
}

::ecorecpp::mapping::EList< ::amalthea::QualifiedPort_ptr >& ISystem::getInnerPorts()
{
    return *m_innerPorts;
}

