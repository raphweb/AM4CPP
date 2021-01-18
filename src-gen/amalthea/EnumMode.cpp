// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EnumMode.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EnumMode.hpp"
#include <amalthea/Mode.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ModeLiteral.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EnumMode.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
EnumMode::EnumMode()
{

    m_literals.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ModeLiteral_ptr, -1, true, true >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getEnumMode__literals(),
                    ::amalthea::AmaltheaPackage::MODELITERAL__CONTAININGMODE));

    /*PROTECTED REGION ID(EnumModeImpl__EnumModeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EnumMode::~EnumMode()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ModeLiteral_ptr >& EnumMode::getLiterals() const
{
    return *m_literals;
}

::ecorecpp::mapping::EList< ::amalthea::ModeLiteral_ptr >& EnumMode::getLiterals()
{
    return *m_literals;
}

