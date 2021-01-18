// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeValueList.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeValueList.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ModeAssignment.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ModeValueList.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ModeValueList::ModeValueList()
{

    m_entries.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ModeAssignment_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getModeValueList__entries()));

    /*PROTECTED REGION ID(ModeValueListImpl__ModeValueListImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ModeValueList::~ModeValueList()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ModeAssignment_ptr >& ModeValueList::getEntries() const
{
    return *m_entries;
}

::ecorecpp::mapping::EList< ::amalthea::ModeAssignment_ptr >& ModeValueList::getEntries()
{
    return *m_entries;
}

