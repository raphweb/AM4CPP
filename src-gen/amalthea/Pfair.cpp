// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Pfair.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Pfair.hpp"
#include <amalthea/TaskSchedulingAlgorithm.hpp>
#include <amalthea/CustomProperty.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Pfair.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Pfair::Pfair() : m_quantSizeNs(0)
{

    /*PROTECTED REGION ID(PfairImpl__PfairImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Pfair::~Pfair()
{
}

// Attributes

::ecore::EInt Pfair::getQuantSizeNs() const
{
    return m_quantSizeNs;
}

void Pfair::setQuantSizeNs(::ecore::EInt _quantSizeNs)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_quantSizeNs = m_quantSizeNs;
#endif
    m_quantSizeNs = _quantSizeNs;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPfair__quantSizeNs(), _old_quantSizeNs, m_quantSizeNs);
        eNotify(&notification);
    }
#endif
}

// References

