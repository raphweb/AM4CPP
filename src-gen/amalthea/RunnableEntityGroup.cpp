// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableEntityGroup.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableEntityGroup.hpp"
#include <amalthea/RunnableGroup.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Runnable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RunnableEntityGroup.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RunnableEntityGroup::RunnableEntityGroup()
{

    m_runnables.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Runnable_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getRunnableEntityGroup__runnables()));

    /*PROTECTED REGION ID(RunnableEntityGroupImpl__RunnableEntityGroupImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RunnableEntityGroup::~RunnableEntityGroup()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& RunnableEntityGroup::getRunnables() const
{
    return *m_runnables;
}

::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& RunnableEntityGroup::getRunnables()
{
    return *m_runnables;
}

