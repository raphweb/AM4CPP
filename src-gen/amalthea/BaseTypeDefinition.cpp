// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/BaseTypeDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "BaseTypeDefinition.hpp"
#include <amalthea/TypeDefinition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/Alias.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(BaseTypeDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
BaseTypeDefinition::BaseTypeDefinition()
{

    m_aliases.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Alias_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getBaseTypeDefinition__aliases()));

    /*PROTECTED REGION ID(BaseTypeDefinitionImpl__BaseTypeDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

BaseTypeDefinition::~BaseTypeDefinition()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Alias_ptr >& BaseTypeDefinition::getAliases() const
{
    return *m_aliases;
}

::ecorecpp::mapping::EList< ::amalthea::Alias_ptr >& BaseTypeDefinition::getAliases()
{
    return *m_aliases;
}

