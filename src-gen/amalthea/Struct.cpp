// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Struct.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Struct.hpp"
#include <amalthea/CompoundType.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/StructEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Struct.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Struct::Struct()
{

    m_entries.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::StructEntry_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getStruct__entries()));

    /*PROTECTED REGION ID(StructImpl__StructImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Struct::~Struct()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::StructEntry_ptr >& Struct::getEntries() const
{
    return *m_entries;
}

::ecorecpp::mapping::EList< ::amalthea::StructEntry_ptr >& Struct::getEntries()
{
    return *m_entries;
}

