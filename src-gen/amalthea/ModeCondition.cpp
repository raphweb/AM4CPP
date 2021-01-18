// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeCondition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeCondition.hpp"
#include <amalthea/ModeConditionDisjunctionEntry.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ModeValueMapEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ModeCondition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ModeCondition::ModeCondition()
{

    /*PROTECTED REGION ID(ModeConditionImpl__ModeConditionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ModeCondition::~ModeCondition()
{
}

// Attributes

::amalthea::RelationalOperator ModeCondition::getRelation() const
{
    return m_relation;
}

void ModeCondition::setRelation(::amalthea::RelationalOperator _relation)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::RelationalOperator _old_relation = m_relation;
#endif
    m_relation = _relation;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeCondition__relation(), _old_relation, m_relation);
        eNotify(&notification);
    }
#endif
}

// References

