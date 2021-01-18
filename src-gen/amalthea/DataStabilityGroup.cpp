// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataStabilityGroup.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataStabilityGroup.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/DataGroupScope.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DataStabilityGroup.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DataStabilityGroup::DataStabilityGroup() : m_scope(0)
{

    m_labels.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Label_ptr,
                    -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getDataStabilityGroup__labels()));

    /*PROTECTED REGION ID(DataStabilityGroupImpl__DataStabilityGroupImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DataStabilityGroup::~DataStabilityGroup()
{
    if (m_scope)
    {
        m_scope.reset();
    }
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& DataStabilityGroup::getLabels() const
{
    return *m_labels;
}

::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& DataStabilityGroup::getLabels()
{
    return *m_labels;
}

::amalthea::DataGroupScope_ptr DataStabilityGroup::getScope() const
{
    return m_scope;
}

void DataStabilityGroup::setScope(::amalthea::DataGroupScope_ptr _scope)
{
    if (m_scope)
        m_scope->_setEContainer(DataStabilityGroup_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getDataStabilityGroup__scope());
    if (_scope)
        _scope->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getDataStabilityGroup__scope());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataGroupScope_ptr _old_scope = m_scope;
#endif
    m_scope = _scope;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataStabilityGroup__scope(), _old_scope, m_scope);
        eNotify(&notification);
    }
#endif
}

