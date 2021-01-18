// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TargetCore.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TargetCore.hpp"
#include <amalthea/RunnableConstraintTarget.hpp>
#include <amalthea/ProcessConstraintTarget.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TargetCore.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TargetCore::TargetCore()
{

    m_cores.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ProcessingUnit_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getTargetCore__cores()));

    /*PROTECTED REGION ID(TargetCoreImpl__TargetCoreImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TargetCore::~TargetCore()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ProcessingUnit_ptr >& TargetCore::getCores() const
{
    return *m_cores;
}

::ecorecpp::mapping::EList< ::amalthea::ProcessingUnit_ptr >& TargetCore::getCores()
{
    return *m_cores;
}

