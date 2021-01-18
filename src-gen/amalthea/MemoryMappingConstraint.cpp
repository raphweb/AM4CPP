// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MemoryMappingConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MemoryMappingConstraint.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/MemoryClassification.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(MemoryMappingConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
MemoryMappingConstraint::MemoryMappingConstraint() : m_memoryClassification(0)
{

    /*PROTECTED REGION ID(MemoryMappingConstraintImpl__MemoryMappingConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

MemoryMappingConstraint::~MemoryMappingConstraint()
{
    if (m_memoryClassification)
    {
        m_memoryClassification.reset();
    }
}

// Attributes

// References

::amalthea::MemoryClassification_ptr MemoryMappingConstraint::getMemoryClassification() const
{
    return m_memoryClassification;
}

void MemoryMappingConstraint::setMemoryClassification(
        ::amalthea::MemoryClassification_ptr _memoryClassification)
{
    if (m_memoryClassification)
        m_memoryClassification->_setEContainer(MemoryMappingConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getMemoryMappingConstraint__memoryClassification());
    if (_memoryClassification)
        _memoryClassification->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getMemoryMappingConstraint__memoryClassification());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::MemoryClassification_ptr _old_memoryClassification = m_memoryClassification;
#endif
    m_memoryClassification = _memoryClassification;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMemoryMappingConstraint__memoryClassification(), _old_memoryClassification, m_memoryClassification);
        eNotify(&notification);
    }
#endif
}

