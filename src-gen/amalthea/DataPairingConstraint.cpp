// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataPairingConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataPairingConstraint.hpp"
#include <amalthea/PairingConstraint.hpp>
#include <amalthea/DataConstraint.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/DataConstraintTarget.hpp>
#include <amalthea/LabelGroup.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DataPairingConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DataPairingConstraint::DataPairingConstraint() : m_group(0)
{

    /*PROTECTED REGION ID(DataPairingConstraintImpl__DataPairingConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DataPairingConstraint::~DataPairingConstraint()
{
    if (m_group)
    {
        m_group.reset();
    }
}

// Attributes

// References

::amalthea::LabelGroup_ptr DataPairingConstraint::getGroup() const
{
    return m_group;
}

void DataPairingConstraint::setGroup(::amalthea::LabelGroup_ptr _group)
{
    if (m_group)
        m_group->_setEContainer(DataPairingConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getDataPairingConstraint__group());
    if (_group)
        _group->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getDataPairingConstraint__group());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::LabelGroup_ptr _old_group = m_group;
#endif
    m_group = _group;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataPairingConstraint__group(), _old_group, m_group);
        eNotify(&notification);
    }
#endif
}

