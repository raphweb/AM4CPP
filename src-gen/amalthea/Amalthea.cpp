// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Amalthea.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Amalthea.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/CommonElements.hpp>
#include <amalthea/SWModel.hpp>
#include <amalthea/HWModel.hpp>
#include <amalthea/OSModel.hpp>
#include <amalthea/StimuliModel.hpp>
#include <amalthea/EventModel.hpp>
#include <amalthea/ConstraintsModel.hpp>
#include <amalthea/PropertyConstraintsModel.hpp>
#include <amalthea/MappingModel.hpp>
#include <amalthea/ComponentsModel.hpp>
#include <amalthea/ConfigModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Amalthea.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Amalthea::Amalthea() : m_commonElements(0), m_swModel(0), m_hwModel(0), m_osModel(
        0), m_stimuliModel(0), m_eventModel(0), m_constraintsModel(0), m_propertyConstraintsModel(
        0), m_mappingModel(0), m_componentsModel(0), m_configModel(0)
{

    /*PROTECTED REGION ID(AmaltheaImpl__AmaltheaImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Amalthea::~Amalthea()
{
    if (m_commonElements)
    {
        m_commonElements.reset();
    }
    if (m_swModel)
    {
        m_swModel.reset();
    }
    if (m_hwModel)
    {
        m_hwModel.reset();
    }
    if (m_osModel)
    {
        m_osModel.reset();
    }
    if (m_stimuliModel)
    {
        m_stimuliModel.reset();
    }
    if (m_eventModel)
    {
        m_eventModel.reset();
    }
    if (m_constraintsModel)
    {
        m_constraintsModel.reset();
    }
    if (m_propertyConstraintsModel)
    {
        m_propertyConstraintsModel.reset();
    }
    if (m_mappingModel)
    {
        m_mappingModel.reset();
    }
    if (m_componentsModel)
    {
        m_componentsModel.reset();
    }
    if (m_configModel)
    {
        m_configModel.reset();
    }
}

// Attributes

::ecore::EString const& Amalthea::getVersion() const
{
    return m_version;
}

void Amalthea::setVersion(::ecore::EString const &_version)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_version = m_version;
#endif
    m_version = _version;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAmalthea__version(), _old_version, m_version);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::CommonElements_ptr Amalthea::getCommonElements() const
{
    return m_commonElements;
}

void Amalthea::setCommonElements(::amalthea::CommonElements_ptr _commonElements)
{
    if (m_commonElements)
        m_commonElements->_setEContainer(Amalthea_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__commonElements());
    if (_commonElements)
        _commonElements->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__commonElements());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::CommonElements_ptr _old_commonElements = m_commonElements;
#endif
    m_commonElements = _commonElements;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAmalthea__commonElements(), _old_commonElements, m_commonElements);
        eNotify(&notification);
    }
#endif
}

::amalthea::SWModel_ptr Amalthea::getSwModel() const
{
    return m_swModel;
}

void Amalthea::setSwModel(::amalthea::SWModel_ptr _swModel)
{
    if (m_swModel)
        m_swModel->_setEContainer(Amalthea_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__swModel());
    if (_swModel)
        _swModel->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__swModel());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::SWModel_ptr _old_swModel = m_swModel;
#endif
    m_swModel = _swModel;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAmalthea__swModel(), _old_swModel, m_swModel);
        eNotify(&notification);
    }
#endif
}

::amalthea::HWModel_ptr Amalthea::getHwModel() const
{
    return m_hwModel;
}

void Amalthea::setHwModel(::amalthea::HWModel_ptr _hwModel)
{
    if (m_hwModel)
        m_hwModel->_setEContainer(Amalthea_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__hwModel());
    if (_hwModel)
        _hwModel->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__hwModel());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::HWModel_ptr _old_hwModel = m_hwModel;
#endif
    m_hwModel = _hwModel;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAmalthea__hwModel(), _old_hwModel, m_hwModel);
        eNotify(&notification);
    }
#endif
}

::amalthea::OSModel_ptr Amalthea::getOsModel() const
{
    return m_osModel;
}

void Amalthea::setOsModel(::amalthea::OSModel_ptr _osModel)
{
    if (m_osModel)
        m_osModel->_setEContainer(Amalthea_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__osModel());
    if (_osModel)
        _osModel->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__osModel());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::OSModel_ptr _old_osModel = m_osModel;
#endif
    m_osModel = _osModel;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAmalthea__osModel(), _old_osModel, m_osModel);
        eNotify(&notification);
    }
#endif
}

::amalthea::StimuliModel_ptr Amalthea::getStimuliModel() const
{
    return m_stimuliModel;
}

void Amalthea::setStimuliModel(::amalthea::StimuliModel_ptr _stimuliModel)
{
    if (m_stimuliModel)
        m_stimuliModel->_setEContainer(Amalthea_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__stimuliModel());
    if (_stimuliModel)
        _stimuliModel->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__stimuliModel());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::StimuliModel_ptr _old_stimuliModel = m_stimuliModel;
#endif
    m_stimuliModel = _stimuliModel;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAmalthea__stimuliModel(), _old_stimuliModel, m_stimuliModel);
        eNotify(&notification);
    }
#endif
}

::amalthea::EventModel_ptr Amalthea::getEventModel() const
{
    return m_eventModel;
}

void Amalthea::setEventModel(::amalthea::EventModel_ptr _eventModel)
{
    if (m_eventModel)
        m_eventModel->_setEContainer(Amalthea_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__eventModel());
    if (_eventModel)
        _eventModel->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__eventModel());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::EventModel_ptr _old_eventModel = m_eventModel;
#endif
    m_eventModel = _eventModel;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAmalthea__eventModel(), _old_eventModel, m_eventModel);
        eNotify(&notification);
    }
#endif
}

::amalthea::ConstraintsModel_ptr Amalthea::getConstraintsModel() const
{
    return m_constraintsModel;
}

void Amalthea::setConstraintsModel(
        ::amalthea::ConstraintsModel_ptr _constraintsModel)
{
    if (m_constraintsModel)
        m_constraintsModel->_setEContainer(Amalthea_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__constraintsModel());
    if (_constraintsModel)
        _constraintsModel->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__constraintsModel());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ConstraintsModel_ptr _old_constraintsModel = m_constraintsModel;
#endif
    m_constraintsModel = _constraintsModel;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAmalthea__constraintsModel(), _old_constraintsModel, m_constraintsModel);
        eNotify(&notification);
    }
#endif
}

::amalthea::PropertyConstraintsModel_ptr Amalthea::getPropertyConstraintsModel() const
{
    return m_propertyConstraintsModel;
}

void Amalthea::setPropertyConstraintsModel(
        ::amalthea::PropertyConstraintsModel_ptr _propertyConstraintsModel)
{
    if (m_propertyConstraintsModel)
        m_propertyConstraintsModel->_setEContainer(Amalthea_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__propertyConstraintsModel());
    if (_propertyConstraintsModel)
        _propertyConstraintsModel->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__propertyConstraintsModel());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PropertyConstraintsModel_ptr _old_propertyConstraintsModel = m_propertyConstraintsModel;
#endif
    m_propertyConstraintsModel = _propertyConstraintsModel;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAmalthea__propertyConstraintsModel(), _old_propertyConstraintsModel, m_propertyConstraintsModel);
        eNotify(&notification);
    }
#endif
}

::amalthea::MappingModel_ptr Amalthea::getMappingModel() const
{
    return m_mappingModel;
}

void Amalthea::setMappingModel(::amalthea::MappingModel_ptr _mappingModel)
{
    if (m_mappingModel)
        m_mappingModel->_setEContainer(Amalthea_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__mappingModel());
    if (_mappingModel)
        _mappingModel->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__mappingModel());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::MappingModel_ptr _old_mappingModel = m_mappingModel;
#endif
    m_mappingModel = _mappingModel;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAmalthea__mappingModel(), _old_mappingModel, m_mappingModel);
        eNotify(&notification);
    }
#endif
}

::amalthea::ComponentsModel_ptr Amalthea::getComponentsModel() const
{
    return m_componentsModel;
}

void Amalthea::setComponentsModel(
        ::amalthea::ComponentsModel_ptr _componentsModel)
{
    if (m_componentsModel)
        m_componentsModel->_setEContainer(Amalthea_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__componentsModel());
    if (_componentsModel)
        _componentsModel->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__componentsModel());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ComponentsModel_ptr _old_componentsModel = m_componentsModel;
#endif
    m_componentsModel = _componentsModel;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAmalthea__componentsModel(), _old_componentsModel, m_componentsModel);
        eNotify(&notification);
    }
#endif
}

::amalthea::ConfigModel_ptr Amalthea::getConfigModel() const
{
    return m_configModel;
}

void Amalthea::setConfigModel(::amalthea::ConfigModel_ptr _configModel)
{
    if (m_configModel)
        m_configModel->_setEContainer(Amalthea_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__configModel());
    if (_configModel)
        _configModel->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getAmalthea__configModel());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ConfigModel_ptr _old_configModel = m_configModel;
#endif
    m_configModel = _configModel;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAmalthea__configModel(), _old_configModel, m_configModel);
        eNotify(&notification);
    }
#endif
}

