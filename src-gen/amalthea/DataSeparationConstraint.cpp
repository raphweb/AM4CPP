// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataSeparationConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataSeparationConstraint.hpp"
#include <amalthea/SeparationConstraint.hpp>
#include <amalthea/DataConstraint.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/DataConstraintTarget.hpp>
#include <amalthea/LabelEntityGroup.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DataSeparationConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DataSeparationConstraint::DataSeparationConstraint()
{

    m_groups.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::LabelEntityGroup_ptr, 2, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getDataSeparationConstraint__groups()));

    /*PROTECTED REGION ID(DataSeparationConstraintImpl__DataSeparationConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DataSeparationConstraint::~DataSeparationConstraint()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::LabelEntityGroup_ptr >& DataSeparationConstraint::getGroups() const
{
    return *m_groups;
}

::ecorecpp::mapping::EList< ::amalthea::LabelEntityGroup_ptr >& DataSeparationConstraint::getGroups()
{
    return *m_groups;
}

