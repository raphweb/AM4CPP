// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Ticks.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Ticks.hpp"
#include <amalthea/ComputationItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/TicksEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Ticks.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Ticks::Ticks() : m_default(0)
{

    m_extended.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::TicksEntry_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getTicks__extended()));

    /*PROTECTED REGION ID(TicksImpl__TicksImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Ticks::~Ticks()
{
    if (m_default)
    {
        m_default.reset();
    }
}

// Attributes

// References

::amalthea::IDiscreteValueDeviation_ptr Ticks::getDefault() const
{
    return m_default;
}

void Ticks::setDefault(::amalthea::IDiscreteValueDeviation_ptr _default)
{
    if (m_default)
        m_default->_setEContainer(Ticks_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTicks__default());
    if (_default)
        _default->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTicks__default());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IDiscreteValueDeviation_ptr _old_default = m_default;
#endif
    m_default = _default;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTicks__default(), _old_default, m_default);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::TicksEntry_ptr >& Ticks::getExtended() const
{
    return *m_extended;
}

::ecorecpp::mapping::EList< ::amalthea::TicksEntry_ptr >& Ticks::getExtended()
{
    return *m_extended;
}

