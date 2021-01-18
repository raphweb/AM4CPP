// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwAccessPath.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwAccessPath.hpp"
#include <amalthea/HwPath.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <amalthea/HwDestination.hpp>
#include <amalthea/HwAccessElement.hpp>
#include <amalthea/HwPathElement.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(HwAccessPath.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
HwAccessPath::HwAccessPath() : m_startAddress(0), m_endAddress(0), m_memOffset(
        0), m_containingAccessElement(0)
{

    m_pathElements.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwPathElement_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHwAccessPath__pathElements()));

    /*PROTECTED REGION ID(HwAccessPathImpl__HwAccessPathImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

HwAccessPath::~HwAccessPath()
{
}

// Attributes

::amalthea::Address HwAccessPath::getStartAddress() const
{
    return m_startAddress;
}

void HwAccessPath::setStartAddress(::amalthea::Address _startAddress)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Address _old_startAddress = m_startAddress;
#endif
    m_startAddress = _startAddress;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwAccessPath__startAddress(), _old_startAddress, m_startAddress);
        eNotify(&notification);
    }
#endif
}

::amalthea::Address HwAccessPath::getEndAddress() const
{
    return m_endAddress;
}

void HwAccessPath::setEndAddress(::amalthea::Address _endAddress)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Address _old_endAddress = m_endAddress;
#endif
    m_endAddress = _endAddress;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwAccessPath__endAddress(), _old_endAddress, m_endAddress);
        eNotify(&notification);
    }
#endif
}

::amalthea::Address HwAccessPath::getMemOffset() const
{
    return m_memOffset;
}

void HwAccessPath::setMemOffset(::amalthea::Address _memOffset)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Address _old_memOffset = m_memOffset;
#endif
    m_memOffset = _memOffset;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwAccessPath__memOffset(), _old_memOffset, m_memOffset);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::HwAccessElement_ptr HwAccessPath::getContainingAccessElement() const
{
    return m_containingAccessElement;
}

::amalthea::HwAccessElement_ptr HwAccessPath::basicgetContainingAccessElement()
{
    return m_containingAccessElement;
}

void HwAccessPath::basicsetContainingAccessElement(
        ::amalthea::HwAccessElement_ptr _containingAccessElement)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::HwAccessElement_ptr _old_containingAccessElement = m_containingAccessElement;
#endif
    m_containingAccessElement = _containingAccessElement;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwAccessPath__containingAccessElement(), _old_containingAccessElement, m_containingAccessElement);
        eNotify(&notification);
    }
#endif
}

void HwAccessPath::setContainingAccessElement(
        ::amalthea::HwAccessElement_ptr _containingAccessElement)
{
    if (_containingAccessElement != m_containingAccessElement)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_containingAccessElement != nullptr)
        {
            m_containingAccessElement->_inverseRemove(
                    ::amalthea::AmaltheaPackage::HWACCESSELEMENT__ACCESSPATH,
                    _this);
        }
        if (_containingAccessElement != nullptr)
        {
            _containingAccessElement->_inverseAdd(
                    ::amalthea::AmaltheaPackage::HWACCESSELEMENT__ACCESSPATH,
                    _this);
        }
        basicsetContainingAccessElement(_containingAccessElement);
    }
}

const ::ecorecpp::mapping::EList< ::amalthea::HwPathElement_ptr >& HwAccessPath::getPathElements() const
{
    return *m_pathElements;
}

::ecorecpp::mapping::EList< ::amalthea::HwPathElement_ptr >& HwAccessPath::getPathElements()
{
    return *m_pathElements;
}

