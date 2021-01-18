// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataCoherencyGroup.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataCoherencyGroup.hpp"
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

/*PROTECTED REGION ID(DataCoherencyGroup.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DataCoherencyGroup::DataCoherencyGroup() : m_scope(0)
{

    m_labels.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Label_ptr,
                    -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getDataCoherencyGroup__labels()));

    /*PROTECTED REGION ID(DataCoherencyGroupImpl__DataCoherencyGroupImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DataCoherencyGroup::~DataCoherencyGroup()
{
    if (m_scope)
    {
        m_scope.reset();
    }
}

// Attributes

::amalthea::CoherencyDirection DataCoherencyGroup::getDirection() const
{
    return m_direction;
}

void DataCoherencyGroup::setDirection(::amalthea::CoherencyDirection _direction)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::CoherencyDirection _old_direction = m_direction;
#endif
    m_direction = _direction;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataCoherencyGroup__direction(), _old_direction, m_direction);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& DataCoherencyGroup::getLabels() const
{
    return *m_labels;
}

::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& DataCoherencyGroup::getLabels()
{
    return *m_labels;
}

::amalthea::DataGroupScope_ptr DataCoherencyGroup::getScope() const
{
    return m_scope;
}

void DataCoherencyGroup::setScope(::amalthea::DataGroupScope_ptr _scope)
{
    if (m_scope)
        m_scope->_setEContainer(DataCoherencyGroup_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getDataCoherencyGroup__scope());
    if (_scope)
        _scope->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getDataCoherencyGroup__scope());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataGroupScope_ptr _old_scope = m_scope;
#endif
    m_scope = _scope;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataCoherencyGroup__scope(), _old_scope, m_scope);
        eNotify(&notification);
    }
#endif
}

