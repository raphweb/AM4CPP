// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableSequencingConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableSequencingConstraint.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/RunnableEntityGroup.hpp>
#include <amalthea/AbstractProcess.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RunnableSequencingConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RunnableSequencingConstraint::RunnableSequencingConstraint()
{

    m_runnableGroups.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::RunnableEntityGroup_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getRunnableSequencingConstraint__runnableGroups()));
    m_processScope.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::AbstractProcess_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getRunnableSequencingConstraint__processScope()));

    /*PROTECTED REGION ID(RunnableSequencingConstraintImpl__RunnableSequencingConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RunnableSequencingConstraint::~RunnableSequencingConstraint()
{
}

// Attributes

::amalthea::RunnableOrderType RunnableSequencingConstraint::getOrderType() const
{
    return m_orderType;
}

void RunnableSequencingConstraint::setOrderType(
        ::amalthea::RunnableOrderType _orderType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::RunnableOrderType _old_orderType = m_orderType;
#endif
    m_orderType = _orderType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableSequencingConstraint__orderType(), _old_orderType, m_orderType);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::RunnableEntityGroup_ptr >& RunnableSequencingConstraint::getRunnableGroups() const
{
    return *m_runnableGroups;
}

::ecorecpp::mapping::EList< ::amalthea::RunnableEntityGroup_ptr >& RunnableSequencingConstraint::getRunnableGroups()
{
    return *m_runnableGroups;
}

const ::ecorecpp::mapping::EList< ::amalthea::AbstractProcess_ptr >& RunnableSequencingConstraint::getProcessScope() const
{
    return *m_processScope;
}

::ecorecpp::mapping::EList< ::amalthea::AbstractProcess_ptr >& RunnableSequencingConstraint::getProcessScope()
{
    return *m_processScope;
}

