// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataConstraint.hpp"
#include <amalthea/DataConstraintTarget.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DataConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DataConstraint::DataConstraint() : m_target(0)
{

    /*PROTECTED REGION ID(DataConstraintImpl__DataConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DataConstraint::~DataConstraint()
{
    if (m_target)
    {
        m_target.reset();
    }
}

// Attributes

// References

::amalthea::DataConstraintTarget_ptr DataConstraint::getTarget() const
{
    return m_target;
}

void DataConstraint::setTarget(::amalthea::DataConstraintTarget_ptr _target)
{
    if (m_target)
        m_target->_setEContainer(DataConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getDataConstraint__target());
    if (_target)
        _target->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getDataConstraint__target());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataConstraintTarget_ptr _old_target = m_target;
#endif
    m_target = _target;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataConstraint__target(), _old_target, m_target);
        eNotify(&notification);
    }
#endif
}

