// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IComponentContainer.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IComponentContainer.hpp"
#include <amalthea/Component.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(IComponentContainer.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
IComponentContainer::IComponentContainer()
{

    m_components.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Component_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getIComponentContainer__components()));

    /*PROTECTED REGION ID(IComponentContainerImpl__IComponentContainerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

IComponentContainer::~IComponentContainer()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& IComponentContainer::getComponents() const
{
    return *m_components;
}

::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& IComponentContainer::getComponents()
{
    return *m_components;
}

