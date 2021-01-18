// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnablePairingConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnablePairingConstraint.hpp"
#include <amalthea/PairingConstraint.hpp>
#include <amalthea/RunnableConstraint.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/RunnableConstraintTarget.hpp>
#include <amalthea/RunnableGroup.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RunnablePairingConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RunnablePairingConstraint::RunnablePairingConstraint() : m_group(0)
{

    /*PROTECTED REGION ID(RunnablePairingConstraintImpl__RunnablePairingConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RunnablePairingConstraint::~RunnablePairingConstraint()
{
    if (m_group)
    {
        m_group.reset();
    }
}

// Attributes

// References

::amalthea::RunnableGroup_ptr RunnablePairingConstraint::getGroup() const
{
    return m_group;
}

void RunnablePairingConstraint::setGroup(::amalthea::RunnableGroup_ptr _group)
{
    if (m_group)
        m_group->_setEContainer(RunnablePairingConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRunnablePairingConstraint__group());
    if (_group)
        _group->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRunnablePairingConstraint__group());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::RunnableGroup_ptr _old_group = m_group;
#endif
    m_group = _group;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnablePairingConstraint__group(), _old_group, m_group);
        eNotify(&notification);
    }
#endif
}

