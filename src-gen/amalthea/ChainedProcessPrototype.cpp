// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChainedProcessPrototype.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ChainedProcessPrototype.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ProcessPrototype.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ChainedProcessPrototype.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ChainedProcessPrototype::ChainedProcessPrototype() : m_apply(0), m_offset(0), m_prototype(
        0)
{

    /*PROTECTED REGION ID(ChainedProcessPrototypeImpl__ChainedProcessPrototypeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ChainedProcessPrototype::~ChainedProcessPrototype()
{
}

// Attributes

::ecore::EInt ChainedProcessPrototype::getApply() const
{
    return m_apply;
}

void ChainedProcessPrototype::setApply(::ecore::EInt _apply)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_apply = m_apply;
#endif
    m_apply = _apply;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChainedProcessPrototype__apply(), _old_apply, m_apply);
        eNotify(&notification);
    }
#endif
}

::ecore::EInt ChainedProcessPrototype::getOffset() const
{
    return m_offset;
}

void ChainedProcessPrototype::setOffset(::ecore::EInt _offset)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_offset = m_offset;
#endif
    m_offset = _offset;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChainedProcessPrototype__offset(), _old_offset, m_offset);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::ProcessPrototype_ptr ChainedProcessPrototype::getPrototype() const
{
    return m_prototype;
}

void ChainedProcessPrototype::setPrototype(
        ::amalthea::ProcessPrototype_ptr _prototype)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessPrototype_ptr _old_prototype = m_prototype;
#endif
    m_prototype = _prototype;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChainedProcessPrototype__prototype(), _old_prototype, m_prototype);
        eNotify(&notification);
    }
#endif
}

