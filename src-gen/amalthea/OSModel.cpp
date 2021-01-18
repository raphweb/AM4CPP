// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OSModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OSModel.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Semaphore.hpp>
#include <amalthea/OperatingSystem.hpp>
#include <amalthea/OsOverhead.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(OSModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
OSModel::OSModel()
{

    m_semaphores.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Semaphore_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getOSModel__semaphores()));
    m_operatingSystems.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::OperatingSystem_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getOSModel__operatingSystems()));
    m_osOverheads.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::OsOverhead_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getOSModel__osOverheads()));

    /*PROTECTED REGION ID(OSModelImpl__OSModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

OSModel::~OSModel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Semaphore_ptr >& OSModel::getSemaphores() const
{
    return *m_semaphores;
}

::ecorecpp::mapping::EList< ::amalthea::Semaphore_ptr >& OSModel::getSemaphores()
{
    return *m_semaphores;
}

const ::ecorecpp::mapping::EList< ::amalthea::OperatingSystem_ptr >& OSModel::getOperatingSystems() const
{
    return *m_operatingSystems;
}

::ecorecpp::mapping::EList< ::amalthea::OperatingSystem_ptr >& OSModel::getOperatingSystems()
{
    return *m_operatingSystems;
}

const ::ecorecpp::mapping::EList< ::amalthea::OsOverhead_ptr >& OSModel::getOsOverheads() const
{
    return *m_osOverheads;
}

::ecorecpp::mapping::EList< ::amalthea::OsOverhead_ptr >& OSModel::getOsOverheads()
{
    return *m_osOverheads;
}

