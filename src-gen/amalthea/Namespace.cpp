// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Namespace.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Namespace.hpp"
#include <amalthea/ReferableObject.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Namespace.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Namespace::Namespace() : m_previousSegment(0)
{

    m_nextSegments.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Namespace_ptr, -1, true, true >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getNamespace__nextSegments(),
                    ::amalthea::AmaltheaPackage::NAMESPACE__PREVIOUSSEGMENT));
    m_memberObjects.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::INamespaceMember_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getNamespace__memberObjects()));

    /*PROTECTED REGION ID(NamespaceImpl__NamespaceImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Namespace::~Namespace()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Namespace_ptr >& Namespace::getNextSegments() const
{
    return *m_nextSegments;
}

::ecorecpp::mapping::EList< ::amalthea::Namespace_ptr >& Namespace::getNextSegments()
{
    return *m_nextSegments;
}

::amalthea::Namespace_ptr Namespace::getPreviousSegment() const
{
    return m_previousSegment;
}

::amalthea::Namespace_ptr Namespace::basicgetPreviousSegment()
{
    return m_previousSegment;
}

void Namespace::basicsetPreviousSegment(
        ::amalthea::Namespace_ptr _previousSegment)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Namespace_ptr _old_previousSegment = m_previousSegment;
#endif
    m_previousSegment = _previousSegment;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getNamespace__previousSegment(), _old_previousSegment, m_previousSegment);
        eNotify(&notification);
    }
#endif
}

void Namespace::setPreviousSegment(::amalthea::Namespace_ptr _previousSegment)
{
    if (_previousSegment != m_previousSegment)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_previousSegment != nullptr)
        {
            m_previousSegment->_inverseRemove(
                    ::amalthea::AmaltheaPackage::NAMESPACE__NEXTSEGMENTS,
                    _this);
        }
        if (_previousSegment != nullptr)
        {
            _previousSegment->_inverseAdd(
                    ::amalthea::AmaltheaPackage::NAMESPACE__NEXTSEGMENTS,
                    _this);
        }
        basicsetPreviousSegment(_previousSegment);
    }
}

const ::ecorecpp::mapping::EList< ::amalthea::INamespaceMember_ptr >& Namespace::getMemberObjects() const
{
    return *m_memberObjects;
}

::ecorecpp::mapping::EList< ::amalthea::INamespaceMember_ptr >& Namespace::getMemberObjects()
{
    return *m_memberObjects;
}

