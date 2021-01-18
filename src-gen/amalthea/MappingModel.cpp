// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MappingModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MappingModel.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/SchedulerAllocation.hpp>
#include <amalthea/RunnableAllocation.hpp>
#include <amalthea/TaskAllocation.hpp>
#include <amalthea/ISRAllocation.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/PhysicalSectionMapping.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(MappingModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
MappingModel::MappingModel()
{

    m_schedulerAllocation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::SchedulerAllocation_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getMappingModel__schedulerAllocation()));
    m_runnableAllocation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::RunnableAllocation_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getMappingModel__runnableAllocation()));
    m_taskAllocation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::TaskAllocation_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getMappingModel__taskAllocation()));
    m_isrAllocation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ISRAllocation_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getMappingModel__isrAllocation()));
    m_memoryMapping.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::MemoryMapping_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getMappingModel__memoryMapping()));
    m_physicalSectionMapping.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::PhysicalSectionMapping_ptr, -1, true, false >(
                    this,
                    ::amalthea::AmaltheaPackage::_instance()->getMappingModel__physicalSectionMapping()));

    /*PROTECTED REGION ID(MappingModelImpl__MappingModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

MappingModel::~MappingModel()
{
}

// Attributes

::amalthea::MemoryAddressMappingType MappingModel::getAddressMappingType() const
{
    return m_addressMappingType;
}

void MappingModel::setAddressMappingType(
        ::amalthea::MemoryAddressMappingType _addressMappingType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::MemoryAddressMappingType _old_addressMappingType = m_addressMappingType;
#endif
    m_addressMappingType = _addressMappingType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMappingModel__addressMappingType(), _old_addressMappingType, m_addressMappingType);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::SchedulerAllocation_ptr >& MappingModel::getSchedulerAllocation() const
{
    return *m_schedulerAllocation;
}

::ecorecpp::mapping::EList< ::amalthea::SchedulerAllocation_ptr >& MappingModel::getSchedulerAllocation()
{
    return *m_schedulerAllocation;
}

const ::ecorecpp::mapping::EList< ::amalthea::RunnableAllocation_ptr >& MappingModel::getRunnableAllocation() const
{
    return *m_runnableAllocation;
}

::ecorecpp::mapping::EList< ::amalthea::RunnableAllocation_ptr >& MappingModel::getRunnableAllocation()
{
    return *m_runnableAllocation;
}

const ::ecorecpp::mapping::EList< ::amalthea::TaskAllocation_ptr >& MappingModel::getTaskAllocation() const
{
    return *m_taskAllocation;
}

::ecorecpp::mapping::EList< ::amalthea::TaskAllocation_ptr >& MappingModel::getTaskAllocation()
{
    return *m_taskAllocation;
}

const ::ecorecpp::mapping::EList< ::amalthea::ISRAllocation_ptr >& MappingModel::getIsrAllocation() const
{
    return *m_isrAllocation;
}

::ecorecpp::mapping::EList< ::amalthea::ISRAllocation_ptr >& MappingModel::getIsrAllocation()
{
    return *m_isrAllocation;
}

const ::ecorecpp::mapping::EList< ::amalthea::MemoryMapping_ptr >& MappingModel::getMemoryMapping() const
{
    return *m_memoryMapping;
}

::ecorecpp::mapping::EList< ::amalthea::MemoryMapping_ptr >& MappingModel::getMemoryMapping()
{
    return *m_memoryMapping;
}

const ::ecorecpp::mapping::EList< ::amalthea::PhysicalSectionMapping_ptr >& MappingModel::getPhysicalSectionMapping() const
{
    return *m_physicalSectionMapping;
}

::ecorecpp::mapping::EList< ::amalthea::PhysicalSectionMapping_ptr >& MappingModel::getPhysicalSectionMapping()
{
    return *m_physicalSectionMapping;
}

