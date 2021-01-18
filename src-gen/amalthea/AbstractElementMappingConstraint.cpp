// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AbstractElementMappingConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AbstractElementMappingConstraint.hpp"
#include <amalthea/MemoryMappingConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/MemoryClassification.hpp>
#include <amalthea/AbstractMemoryElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractElementMappingConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
AbstractElementMappingConstraint::AbstractElementMappingConstraint() : m_abstractElement(
        0)
{

    /*PROTECTED REGION ID(AbstractElementMappingConstraintImpl__AbstractElementMappingConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

AbstractElementMappingConstraint::~AbstractElementMappingConstraint()
{
}

// Attributes

// References

::amalthea::AbstractMemoryElement_ptr AbstractElementMappingConstraint::getAbstractElement() const
{
    return m_abstractElement;
}

void AbstractElementMappingConstraint::setAbstractElement(
        ::amalthea::AbstractMemoryElement_ptr _abstractElement)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::AbstractMemoryElement_ptr _old_abstractElement = m_abstractElement;
#endif
    m_abstractElement = _abstractElement;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAbstractElementMappingConstraint__abstractElement(), _old_abstractElement, m_abstractElement);
        eNotify(&notification);
    }
#endif
}

