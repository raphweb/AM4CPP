// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IInterfaceContainer.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IInterfaceContainer.hpp"
#include <amalthea/MainInterface.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(IInterfaceContainer.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
IInterfaceContainer::IInterfaceContainer()
{

    m_interfaces.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::MainInterface_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getIInterfaceContainer__interfaces()));

    /*PROTECTED REGION ID(IInterfaceContainerImpl__IInterfaceContainerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

IInterfaceContainer::~IInterfaceContainer()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::MainInterface_ptr >& IInterfaceContainer::getInterfaces() const
{
    return *m_interfaces;
}

::ecorecpp::mapping::EList< ::amalthea::MainInterface_ptr >& IInterfaceContainer::getInterfaces()
{
    return *m_interfaces;
}

