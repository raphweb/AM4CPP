// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataTypeDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataTypeDefinition.hpp"
#include <amalthea/TypeDefinition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/DataType.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DataTypeDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DataTypeDefinition::DataTypeDefinition() : m_dataType(0)
{

    /*PROTECTED REGION ID(DataTypeDefinitionImpl__DataTypeDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DataTypeDefinition::~DataTypeDefinition()
{
    if (m_dataType)
    {
        m_dataType.reset();
    }
}

// Attributes

// References

::amalthea::DataType_ptr DataTypeDefinition::getDataType() const
{
    return m_dataType;
}

void DataTypeDefinition::setDataType(::amalthea::DataType_ptr _dataType)
{
    if (m_dataType)
        m_dataType->_setEContainer(DataTypeDefinition_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getDataTypeDefinition__dataType());
    if (_dataType)
        _dataType->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getDataTypeDefinition__dataType());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataType_ptr _old_dataType = m_dataType;
#endif
    m_dataType = _dataType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataTypeDefinition__dataType(), _old_dataType, m_dataType);
        eNotify(&notification);
    }
#endif
}

