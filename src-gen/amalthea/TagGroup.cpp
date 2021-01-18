// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TagGroup.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TagGroup.hpp"
#include <amalthea/RunnableGroup.hpp>
#include <amalthea/ProcessGroup.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TagGroup.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TagGroup::TagGroup() : m_tag(0)
{

    /*PROTECTED REGION ID(TagGroupImpl__TagGroupImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TagGroup::~TagGroup()
{
}

// Attributes

// References

::amalthea::Tag_ptr TagGroup::getTag() const
{
    return m_tag;
}

void TagGroup::setTag(::amalthea::Tag_ptr _tag)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Tag_ptr _old_tag = m_tag;
#endif
    m_tag = _tag;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTagGroup__tag(), _old_tag, m_tag);
        eNotify(&notification);
    }
#endif
}

