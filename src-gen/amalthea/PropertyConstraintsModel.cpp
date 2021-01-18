// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PropertyConstraintsModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PropertyConstraintsModel.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/CoreAllocationConstraint.hpp>
#include <amalthea/MemoryMappingConstraint.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(PropertyConstraintsModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
PropertyConstraintsModel::PropertyConstraintsModel()
{

    m_allocationConstraints.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::CoreAllocationConstraint_ptr, -1, true, false >(
                    this,
                    ::amalthea::AmaltheaPackage::_instance()->getPropertyConstraintsModel__allocationConstraints()));
    m_mappingConstraints.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::MemoryMappingConstraint_ptr, -1, true, false >(
                    this,
                    ::amalthea::AmaltheaPackage::_instance()->getPropertyConstraintsModel__mappingConstraints()));

    /*PROTECTED REGION ID(PropertyConstraintsModelImpl__PropertyConstraintsModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

PropertyConstraintsModel::~PropertyConstraintsModel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::CoreAllocationConstraint_ptr >& PropertyConstraintsModel::getAllocationConstraints() const
{
    return *m_allocationConstraints;
}

::ecorecpp::mapping::EList< ::amalthea::CoreAllocationConstraint_ptr >& PropertyConstraintsModel::getAllocationConstraints()
{
    return *m_allocationConstraints;
}

const ::ecorecpp::mapping::EList< ::amalthea::MemoryMappingConstraint_ptr >& PropertyConstraintsModel::getMappingConstraints() const
{
    return *m_mappingConstraints;
}

::ecorecpp::mapping::EList< ::amalthea::MemoryMappingConstraint_ptr >& PropertyConstraintsModel::getMappingConstraints()
{
    return *m_mappingConstraints;
}

