// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableConstraint.hpp"
#include <amalthea/RunnableConstraintTarget.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RunnableConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RunnableConstraint::RunnableConstraint() : m_target(0)
{

    /*PROTECTED REGION ID(RunnableConstraintImpl__RunnableConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RunnableConstraint::~RunnableConstraint()
{
    if (m_target)
    {
        m_target.reset();
    }
}

// Attributes

// References

::amalthea::RunnableConstraintTarget_ptr RunnableConstraint::getTarget() const
{
    return m_target;
}

void RunnableConstraint::setTarget(
        ::amalthea::RunnableConstraintTarget_ptr _target)
{
    if (m_target)
        m_target->_setEContainer(RunnableConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRunnableConstraint__target());
    if (_target)
        _target->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRunnableConstraint__target());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::RunnableConstraintTarget_ptr _old_target = m_target;
#endif
    m_target = _target;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableConstraint__target(), _old_target, m_target);
        eNotify(&notification);
    }
#endif
}

