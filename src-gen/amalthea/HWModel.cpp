// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HWModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HWModel.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/HwDefinition.hpp>
#include <amalthea/HwFeatureCategory.hpp>
#include <amalthea/HwStructure.hpp>
#include <amalthea/HwDomain.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(HWModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
HWModel::HWModel()
{

    m_definitions.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwDefinition_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHWModel__definitions()));
    m_featureCategories.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwFeatureCategory_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHWModel__featureCategories()));
    m_structures.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwStructure_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHWModel__structures()));
    m_domains.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwDomain_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHWModel__domains()));

    /*PROTECTED REGION ID(HWModelImpl__HWModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

HWModel::~HWModel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::HwDefinition_ptr >& HWModel::getDefinitions() const
{
    return *m_definitions;
}

::ecorecpp::mapping::EList< ::amalthea::HwDefinition_ptr >& HWModel::getDefinitions()
{
    return *m_definitions;
}

const ::ecorecpp::mapping::EList< ::amalthea::HwFeatureCategory_ptr >& HWModel::getFeatureCategories() const
{
    return *m_featureCategories;
}

::ecorecpp::mapping::EList< ::amalthea::HwFeatureCategory_ptr >& HWModel::getFeatureCategories()
{
    return *m_featureCategories;
}

const ::ecorecpp::mapping::EList< ::amalthea::HwStructure_ptr >& HWModel::getStructures() const
{
    return *m_structures;
}

::ecorecpp::mapping::EList< ::amalthea::HwStructure_ptr >& HWModel::getStructures()
{
    return *m_structures;
}

const ::ecorecpp::mapping::EList< ::amalthea::HwDomain_ptr >& HWModel::getDomains() const
{
    return *m_domains;
}

::ecorecpp::mapping::EList< ::amalthea::HwDomain_ptr >& HWModel::getDomains()
{
    return *m_domains;
}

