// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AbstractMemoryElement.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AbstractMemoryElement.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractMemoryElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
AbstractMemoryElement::AbstractMemoryElement() : m_size(0)
{

    m_mappings.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::MemoryMapping_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getAbstractMemoryElement__mappings()));

    /*PROTECTED REGION ID(AbstractMemoryElementImpl__AbstractMemoryElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

AbstractMemoryElement::~AbstractMemoryElement()
{
    if (m_size)
    {
        m_size.reset();
    }
}

// Attributes

// References

::amalthea::DataSize_ptr AbstractMemoryElement::getSize() const
{
    return m_size;
}

void AbstractMemoryElement::setSize(::amalthea::DataSize_ptr _size)
{
    if (m_size)
        m_size->_setEContainer(AbstractMemoryElement_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getAbstractMemoryElement__size());
    if (_size)
        _size->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getAbstractMemoryElement__size());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataSize_ptr _old_size = m_size;
#endif
    m_size = _size;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAbstractMemoryElement__size(), _old_size, m_size);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::MemoryMapping_ptr >& AbstractMemoryElement::getMappings() const
{
    return *m_mappings;
}

::ecorecpp::mapping::EList< ::amalthea::MemoryMapping_ptr >& AbstractMemoryElement::getMappings()
{
    return *m_mappings;
}

