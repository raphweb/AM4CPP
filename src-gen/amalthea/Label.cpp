// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Label.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Label.hpp"
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/IDisplayName.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/DataType.hpp>
#include <amalthea/Section.hpp>
#include <amalthea/LabelAccess.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Label.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Label::Label() : m_constant(false), m_bVolatile(false), m_dataType(0), m_section(
        0)
{

    m_labelAccesses.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::LabelAccess_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getLabel__labelAccesses()));
    m_referringComponents.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Component_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getLabel__referringComponents()));

    /*PROTECTED REGION ID(LabelImpl__LabelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Label::~Label()
{
    if (m_dataType)
    {
        m_dataType.reset();
    }
}

// Attributes

::ecore::EBoolean Label::isConstant() const
{
    return m_constant;
}

void Label::setConstant(::ecore::EBoolean _constant)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_constant = m_constant;
#endif
    m_constant = _constant;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabel__constant(), _old_constant, m_constant);
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean Label::isBVolatile() const
{
    return m_bVolatile;
}

void Label::setBVolatile(::ecore::EBoolean _bVolatile)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_bVolatile = m_bVolatile;
#endif
    m_bVolatile = _bVolatile;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabel__bVolatile(), _old_bVolatile, m_bVolatile);
        eNotify(&notification);
    }
#endif
}

::amalthea::LabelDataStability Label::getDataStability() const
{
    return m_dataStability;
}

void Label::setDataStability(::amalthea::LabelDataStability _dataStability)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::LabelDataStability _old_dataStability = m_dataStability;
#endif
    m_dataStability = _dataStability;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabel__dataStability(), _old_dataStability, m_dataStability);
        eNotify(&notification);
    }
#endif
}

::amalthea::DataStabilityLevel Label::getStabilityLevel() const
{
    return m_stabilityLevel;
}

void Label::setStabilityLevel(::amalthea::DataStabilityLevel _stabilityLevel)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataStabilityLevel _old_stabilityLevel = m_stabilityLevel;
#endif
    m_stabilityLevel = _stabilityLevel;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabel__stabilityLevel(), _old_stabilityLevel, m_stabilityLevel);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::DataType_ptr Label::getDataType() const
{
    return m_dataType;
}

void Label::setDataType(::amalthea::DataType_ptr _dataType)
{
    if (m_dataType)
        m_dataType->_setEContainer(Label_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getLabel__dataType());
    if (_dataType)
        _dataType->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getLabel__dataType());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataType_ptr _old_dataType = m_dataType;
#endif
    m_dataType = _dataType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabel__dataType(), _old_dataType, m_dataType);
        eNotify(&notification);
    }
#endif
}

::amalthea::Section_ptr Label::getSection() const
{
    return m_section;
}

void Label::setSection(::amalthea::Section_ptr _section)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Section_ptr _old_section = m_section;
#endif
    m_section = _section;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabel__section(), _old_section, m_section);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::LabelAccess_ptr >& Label::getLabelAccesses() const
{
    return *m_labelAccesses;
}

::ecorecpp::mapping::EList< ::amalthea::LabelAccess_ptr >& Label::getLabelAccesses()
{
    return *m_labelAccesses;
}

const ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& Label::getReferringComponents() const
{
    return *m_referringComponents;
}

::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& Label::getReferringComponents()
{
    return *m_referringComponents;
}

