// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentsModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentsModel.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/IComponentContainer.hpp>
#include <amalthea/IInterfaceContainer.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/MainInterface.hpp>
#include <amalthea/ComponentStructure.hpp>
#include <amalthea/System.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentsModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ComponentsModel::ComponentsModel()
{

    m_structures.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ComponentStructure_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getComponentsModel__structures()));
    m_systems.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::System_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getComponentsModel__systems()));

    /*PROTECTED REGION ID(ComponentsModelImpl__ComponentsModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ComponentsModel::~ComponentsModel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ComponentStructure_ptr >& ComponentsModel::getStructures() const
{
    return *m_structures;
}

::ecorecpp::mapping::EList< ::amalthea::ComponentStructure_ptr >& ComponentsModel::getStructures()
{
    return *m_structures;
}

const ::ecorecpp::mapping::EList< ::amalthea::System_ptr >& ComponentsModel::getSystems() const
{
    return *m_systems;
}

::ecorecpp::mapping::EList< ::amalthea::System_ptr >& ComponentsModel::getSystems()
{
    return *m_systems;
}

