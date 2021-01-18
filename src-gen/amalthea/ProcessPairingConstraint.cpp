// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessPairingConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessPairingConstraint.hpp"
#include <amalthea/PairingConstraint.hpp>
#include <amalthea/ProcessConstraint.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ProcessConstraintTarget.hpp>
#include <amalthea/ProcessGroup.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProcessPairingConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProcessPairingConstraint::ProcessPairingConstraint() : m_group(0)
{

    /*PROTECTED REGION ID(ProcessPairingConstraintImpl__ProcessPairingConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProcessPairingConstraint::~ProcessPairingConstraint()
{
    if (m_group)
    {
        m_group.reset();
    }
}

// Attributes

// References

::amalthea::ProcessGroup_ptr ProcessPairingConstraint::getGroup() const
{
    return m_group;
}

void ProcessPairingConstraint::setGroup(::amalthea::ProcessGroup_ptr _group)
{
    if (m_group)
        m_group->_setEContainer(ProcessPairingConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getProcessPairingConstraint__group());
    if (_group)
        _group->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getProcessPairingConstraint__group());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessGroup_ptr _old_group = m_group;
#endif
    m_group = _group;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessPairingConstraint__group(), _old_group, m_group);
        eNotify(&notification);
    }
#endif
}

