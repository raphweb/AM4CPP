// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Group.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Group.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/IActivityGraphItemContainer.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Group.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Group::Group() : m_ordered(true)
{

    /*PROTECTED REGION ID(GroupImpl__GroupImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Group::~Group()
{
}

// Attributes

::ecore::EBoolean Group::isOrdered() const
{
    return m_ordered;
}

void Group::setOrdered(::ecore::EBoolean _ordered)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_ordered = m_ordered;
#endif
    m_ordered = _ordered;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getGroup__ordered(), _old_ordered, m_ordered);
        eNotify(&notification);
    }
#endif
}

// References

