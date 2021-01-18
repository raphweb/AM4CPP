// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Tag.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Tag.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/IDescription.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Tag.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Tag::Tag()
{

    m_taggedObjects.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ITaggable_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getTag__taggedObjects()));

    /*PROTECTED REGION ID(TagImpl__TagImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Tag::~Tag()
{
}

// Attributes

::ecore::EString const& Tag::getTagType() const
{
    return m_tagType;
}

void Tag::setTagType(::ecore::EString const &_tagType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_tagType = m_tagType;
#endif
    m_tagType = _tagType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTag__tagType(), _old_tagType, m_tagType);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::ITaggable_ptr >& Tag::getTaggedObjects() const
{
    return *m_taggedObjects;
}

::ecorecpp::mapping::EList< ::amalthea::ITaggable_ptr >& Tag::getTaggedObjects()
{
    return *m_taggedObjects;
}

