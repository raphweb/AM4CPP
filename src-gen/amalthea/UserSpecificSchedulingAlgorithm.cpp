// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/UserSpecificSchedulingAlgorithm.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "UserSpecificSchedulingAlgorithm.hpp"
#include <amalthea/TaskSchedulingAlgorithm.hpp>
#include <amalthea/InterruptSchedulingAlgorithm.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ParameterExtension.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(UserSpecificSchedulingAlgorithm.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
UserSpecificSchedulingAlgorithm::UserSpecificSchedulingAlgorithm()
{

    m_parameterExtensions.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ParameterExtension_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getUserSpecificSchedulingAlgorithm__parameterExtensions()));

    /*PROTECTED REGION ID(UserSpecificSchedulingAlgorithmImpl__UserSpecificSchedulingAlgorithmImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

UserSpecificSchedulingAlgorithm::~UserSpecificSchedulingAlgorithm()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ParameterExtension_ptr >& UserSpecificSchedulingAlgorithm::getParameterExtensions() const
{
    return *m_parameterExtensions;
}

::ecorecpp::mapping::EList< ::amalthea::ParameterExtension_ptr >& UserSpecificSchedulingAlgorithm::getParameterExtensions()
{
    return *m_parameterExtensions;
}

