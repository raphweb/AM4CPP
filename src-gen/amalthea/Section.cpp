// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Section.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Section.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Section.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Section::Section()
{

    m_labels.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Label_ptr,
                    -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSection__labels()));
    m_runnables.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Runnable_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSection__runnables()));

    /*PROTECTED REGION ID(SectionImpl__SectionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Section::~Section()
{
}

// Attributes

::amalthea::ASILType Section::getAsilLevel() const
{
    return m_asilLevel;
}

void Section::setAsilLevel(::amalthea::ASILType _asilLevel)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ASILType _old_asilLevel = m_asilLevel;
#endif
    m_asilLevel = _asilLevel;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSection__asilLevel(), _old_asilLevel, m_asilLevel);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& Section::getLabels() const
{
    return *m_labels;
}

::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& Section::getLabels()
{
    return *m_labels;
}

const ::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& Section::getRunnables() const
{
    return *m_runnables;
}

::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& Section::getRunnables()
{
    return *m_runnables;
}

