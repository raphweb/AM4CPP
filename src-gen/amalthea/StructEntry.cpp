// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/StructEntry.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "StructEntry.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataType.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(StructEntry.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
StructEntry::StructEntry() : m_dataType(0)
{

    /*PROTECTED REGION ID(StructEntryImpl__StructEntryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

StructEntry::~StructEntry()
{
    if (m_dataType)
    {
        m_dataType.reset();
    }
}

// Attributes

// References

::amalthea::DataType_ptr StructEntry::getDataType() const
{
    return m_dataType;
}

void StructEntry::setDataType(::amalthea::DataType_ptr _dataType)
{
    if (m_dataType)
        m_dataType->_setEContainer(StructEntry_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getStructEntry__dataType());
    if (_dataType)
        _dataType->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getStructEntry__dataType());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataType_ptr _old_dataType = m_dataType;
#endif
    m_dataType = _dataType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getStructEntry__dataType(), _old_dataType, m_dataType);
        eNotify(&notification);
    }
#endif
}

