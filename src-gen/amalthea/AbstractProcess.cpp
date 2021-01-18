// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AbstractProcess.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AbstractProcess.hpp"
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractProcess.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
AbstractProcess::AbstractProcess()
{

    m_referringComponents.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Component_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getAbstractProcess__referringComponents()));

    /*PROTECTED REGION ID(AbstractProcessImpl__AbstractProcessImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

AbstractProcess::~AbstractProcess()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& AbstractProcess::getReferringComponents() const
{
    return *m_referringComponents;
}

::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& AbstractProcess::getReferringComponents()
{
    return *m_referringComponents;
}

