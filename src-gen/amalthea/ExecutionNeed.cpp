// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ExecutionNeed.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ExecutionNeed.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/NeedEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ExecutionNeed.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ExecutionNeed::ExecutionNeed()
{

    m_needs.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::NeedEntry_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getExecutionNeed__needs()));

    /*PROTECTED REGION ID(ExecutionNeedImpl__ExecutionNeedImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ExecutionNeed::~ExecutionNeed()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::NeedEntry_ptr >& ExecutionNeed::getNeeds() const
{
    return *m_needs;
}

::ecorecpp::mapping::EList< ::amalthea::NeedEntry_ptr >& ExecutionNeed::getNeeds()
{
    return *m_needs;
}

