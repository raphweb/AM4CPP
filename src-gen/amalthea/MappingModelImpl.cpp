// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MappingModelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MappingModel.hpp"
#include <amalthea/AmaltheaPackage.hpp>
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
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(MappingModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void MappingModel::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_schedulerAllocation->size(); i++)
    {
        (*m_schedulerAllocation)[i]->_initialize();
    }
    for (size_t i = 0; i < m_runnableAllocation->size(); i++)
    {
        (*m_runnableAllocation)[i]->_initialize();
    }
    for (size_t i = 0; i < m_taskAllocation->size(); i++)
    {
        (*m_taskAllocation)[i]->_initialize();
    }
    for (size_t i = 0; i < m_isrAllocation->size(); i++)
    {
        (*m_isrAllocation)[i]->_initialize();
    }
    for (size_t i = 0; i < m_memoryMapping->size(); i++)
    {
        (*m_memoryMapping)[i]->_initialize();
    }
    for (size_t i = 0; i < m_physicalSectionMapping->size(); i++)
    {
        (*m_physicalSectionMapping)[i]->_initialize();
    }

    /*PROTECTED REGION ID(MappingModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject MappingModel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__SCHEDULERALLOCATION:
    {
        _any = m_schedulerAllocation->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__RUNNABLEALLOCATION:
    {
        _any = m_runnableAllocation->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__TASKALLOCATION:
    {
        _any = m_taskAllocation->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__ISRALLOCATION:
    {
        _any = m_isrAllocation->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__MEMORYMAPPING:
    {
        _any = m_memoryMapping->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__PHYSICALSECTIONMAPPING:
    {
        _any = m_physicalSectionMapping->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__ADDRESSMAPPINGTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::MemoryAddressMappingType
                > ::toAny(_any, m_addressMappingType);
        return _any;
    }
    }
    throw std::runtime_error(
            "MappingModel::eGet Error. FeatureID:" + _featureID);
}

void MappingModel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__SCHEDULERALLOCATION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::MappingModel::getSchedulerAllocation().clear();
        ::amalthea::MappingModel::getSchedulerAllocation().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__RUNNABLEALLOCATION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::MappingModel::getRunnableAllocation().clear();
        ::amalthea::MappingModel::getRunnableAllocation().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__TASKALLOCATION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::MappingModel::getTaskAllocation().clear();
        ::amalthea::MappingModel::getTaskAllocation().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__ISRALLOCATION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::MappingModel::getIsrAllocation().clear();
        ::amalthea::MappingModel::getIsrAllocation().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__MEMORYMAPPING:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::MappingModel::getMemoryMapping().clear();
        ::amalthea::MappingModel::getMemoryMapping().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__PHYSICALSECTIONMAPPING:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::MappingModel::getPhysicalSectionMapping().clear();
        ::amalthea::MappingModel::getPhysicalSectionMapping().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__ADDRESSMAPPINGTYPE:
    {
        ::amalthea::MemoryAddressMappingType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::MemoryAddressMappingType
                > ::fromAny(_newValue, _t0);
        ::amalthea::MappingModel::setAddressMappingType(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "MappingModel::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean MappingModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__SCHEDULERALLOCATION:
    {
        return m_schedulerAllocation && m_schedulerAllocation->size();
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__RUNNABLEALLOCATION:
    {
        return m_runnableAllocation && m_runnableAllocation->size();
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__TASKALLOCATION:
    {
        return m_taskAllocation && m_taskAllocation->size();
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__ISRALLOCATION:
    {
        return m_isrAllocation && m_isrAllocation->size();
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__MEMORYMAPPING:
    {
        return m_memoryMapping && m_memoryMapping->size();
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__PHYSICALSECTIONMAPPING:
    {
        return m_physicalSectionMapping && m_physicalSectionMapping->size();
    }
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__ADDRESSMAPPINGTYPE:
    {
        return ::ecorecpp::mapping::set_traits
                < ::amalthea::MemoryAddressMappingType
                > ::is_set(m_addressMappingType);
    }
    }
    throw std::runtime_error(
            "MappingModel::eIsSet Error. FeatureID:" + _featureID);
}

void MappingModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "MappingModel::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr MappingModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getMappingModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void MappingModel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__SCHEDULERALLOCATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__RUNNABLEALLOCATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__TASKALLOCATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__ISRALLOCATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__MEMORYMAPPING:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__PHYSICALSECTIONMAPPING:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void MappingModel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__SCHEDULERALLOCATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__RUNNABLEALLOCATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__TASKALLOCATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__ISRALLOCATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__MEMORYMAPPING:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MAPPINGMODEL__PHYSICALSECTIONMAPPING:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

