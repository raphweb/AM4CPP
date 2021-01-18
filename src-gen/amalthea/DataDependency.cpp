// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataDependency.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataDependency.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/RunnableParameter.hpp>
#include <amalthea/CallArgument.hpp>
#include <amalthea/Runnable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DataDependency.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DataDependency::DataDependency() : m_containingRunnable(0)
{

    m_labels.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Label_ptr,
                    -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getDataDependency__labels()));
    m_parameters.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::RunnableParameter_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getDataDependency__parameters()));
    m_callArguments.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::CallArgument_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getDataDependency__callArguments()));

    /*PROTECTED REGION ID(DataDependencyImpl__DataDependencyImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DataDependency::~DataDependency()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& DataDependency::getLabels() const
{
    return *m_labels;
}

::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& DataDependency::getLabels()
{
    return *m_labels;
}

const ::ecorecpp::mapping::EList< ::amalthea::RunnableParameter_ptr >& DataDependency::getParameters() const
{
    return *m_parameters;
}

::ecorecpp::mapping::EList< ::amalthea::RunnableParameter_ptr >& DataDependency::getParameters()
{
    return *m_parameters;
}

const ::ecorecpp::mapping::EList< ::amalthea::CallArgument_ptr >& DataDependency::getCallArguments() const
{
    return *m_callArguments;
}

::ecorecpp::mapping::EList< ::amalthea::CallArgument_ptr >& DataDependency::getCallArguments()
{
    return *m_callArguments;
}

::amalthea::Runnable_ptr DataDependency::getContainingRunnable() const
{
    return m_containingRunnable;
}

void DataDependency::setContainingRunnable(
        ::amalthea::Runnable_ptr _containingRunnable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_containingRunnable = m_containingRunnable;
#endif
    m_containingRunnable = _containingRunnable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataDependency__containingRunnable(), _old_containingRunnable, m_containingRunnable);
        eNotify(&notification);
    }
#endif
}

