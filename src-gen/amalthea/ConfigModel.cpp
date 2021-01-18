// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ConfigModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ConfigModel.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/EventConfig.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ConfigModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ConfigModel::ConfigModel()
{

    m_eventsToTrace.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::EventConfig_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getConfigModel__eventsToTrace()));

    /*PROTECTED REGION ID(ConfigModelImpl__ConfigModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ConfigModel::~ConfigModel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::EventConfig_ptr >& ConfigModel::getEventsToTrace() const
{
    return *m_eventsToTrace;
}

::ecorecpp::mapping::EList< ::amalthea::EventConfig_ptr >& ConfigModel::getEventsToTrace()
{
    return *m_eventsToTrace;
}

