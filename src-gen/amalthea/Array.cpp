// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Array.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Array.hpp"
#include <amalthea/CompoundType.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/DataType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Array.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Array::Array() : m_numberElements(0), m_dataType(0)
{

    /*PROTECTED REGION ID(ArrayImpl__ArrayImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Array::~Array()
{
    if (m_dataType)
    {
        m_dataType.reset();
    }
}

// Attributes

::ecore::EInt Array::getNumberElements() const
{
    return m_numberElements;
}

void Array::setNumberElements(::ecore::EInt _numberElements)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_numberElements = m_numberElements;
#endif
    m_numberElements = _numberElements;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getArray__numberElements(), _old_numberElements, m_numberElements);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::DataType_ptr Array::getDataType() const
{
    return m_dataType;
}

void Array::setDataType(::amalthea::DataType_ptr _dataType)
{
    if (m_dataType)
        m_dataType->_setEContainer(Array_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getArray__dataType());
    if (_dataType)
        _dataType->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getArray__dataType());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataType_ptr _old_dataType = m_dataType;
#endif
    m_dataType = _dataType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getArray__dataType(), _old_dataType, m_dataType);
        eNotify(&notification);
    }
#endif
}

