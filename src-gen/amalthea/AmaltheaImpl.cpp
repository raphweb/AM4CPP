// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AmaltheaImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Amalthea.hpp"
#include <amalthea/AmaltheaPackage.hpp>
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
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(AmaltheaImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Amalthea::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_commonElements)
    {
        m_commonElements->_initialize();
    }
    if (m_swModel)
    {
        m_swModel->_initialize();
    }
    if (m_hwModel)
    {
        m_hwModel->_initialize();
    }
    if (m_osModel)
    {
        m_osModel->_initialize();
    }
    if (m_stimuliModel)
    {
        m_stimuliModel->_initialize();
    }
    if (m_eventModel)
    {
        m_eventModel->_initialize();
    }
    if (m_constraintsModel)
    {
        m_constraintsModel->_initialize();
    }
    if (m_propertyConstraintsModel)
    {
        m_propertyConstraintsModel->_initialize();
    }
    if (m_mappingModel)
    {
        m_mappingModel->_initialize();
    }
    if (m_componentsModel)
    {
        m_componentsModel->_initialize();
    }
    if (m_configModel)
    {
        m_configModel->_initialize();
    }

    /*PROTECTED REGION ID(AmaltheaImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Amalthea::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__COMMONELEMENTS:
    {
        if (m_commonElements)
            _any = ::ecore::as < ::ecore::EObject > (m_commonElements);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__SWMODEL:
    {
        if (m_swModel)
            _any = ::ecore::as < ::ecore::EObject > (m_swModel);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__HWMODEL:
    {
        if (m_hwModel)
            _any = ::ecore::as < ::ecore::EObject > (m_hwModel);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__OSMODEL:
    {
        if (m_osModel)
            _any = ::ecore::as < ::ecore::EObject > (m_osModel);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__STIMULIMODEL:
    {
        if (m_stimuliModel)
            _any = ::ecore::as < ::ecore::EObject > (m_stimuliModel);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__EVENTMODEL:
    {
        if (m_eventModel)
            _any = ::ecore::as < ::ecore::EObject > (m_eventModel);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__CONSTRAINTSMODEL:
    {
        if (m_constraintsModel)
            _any = ::ecore::as < ::ecore::EObject > (m_constraintsModel);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__PROPERTYCONSTRAINTSMODEL:
    {
        if (m_propertyConstraintsModel)
            _any = ::ecore::as < ::ecore::EObject
                    > (m_propertyConstraintsModel);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__MAPPINGMODEL:
    {
        if (m_mappingModel)
            _any = ::ecore::as < ::ecore::EObject > (m_mappingModel);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__COMPONENTSMODEL:
    {
        if (m_componentsModel)
            _any = ::ecore::as < ::ecore::EObject > (m_componentsModel);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__CONFIGMODEL:
    {
        if (m_configModel)
            _any = ::ecore::as < ::ecore::EObject > (m_configModel);
        return _any;
    }
    }
    throw std::runtime_error("Amalthea::eGet Error. FeatureID:" + _featureID);
}

void Amalthea::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__COMMONELEMENTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::CommonElements_ptr _t1 =
                dynamic_cast< ::amalthea::CommonElements* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::CommonElements >(_t0);*/
        ::amalthea::Amalthea::setCommonElements(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__SWMODEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::SWModel_ptr _t1 =
                dynamic_cast< ::amalthea::SWModel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::SWModel >(_t0);*/
        ::amalthea::Amalthea::setSwModel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__HWMODEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::HWModel_ptr _t1 =
                dynamic_cast< ::amalthea::HWModel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::HWModel >(_t0);*/
        ::amalthea::Amalthea::setHwModel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__OSMODEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::OSModel_ptr _t1 =
                dynamic_cast< ::amalthea::OSModel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::OSModel >(_t0);*/
        ::amalthea::Amalthea::setOsModel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__STIMULIMODEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::StimuliModel_ptr _t1 =
                dynamic_cast< ::amalthea::StimuliModel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::StimuliModel >(_t0);*/
        ::amalthea::Amalthea::setStimuliModel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__EVENTMODEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::EventModel_ptr _t1 =
                dynamic_cast< ::amalthea::EventModel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::EventModel >(_t0);*/
        ::amalthea::Amalthea::setEventModel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__CONSTRAINTSMODEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ConstraintsModel_ptr _t1 =
                dynamic_cast< ::amalthea::ConstraintsModel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ConstraintsModel >(_t0);*/
        ::amalthea::Amalthea::setConstraintsModel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__PROPERTYCONSTRAINTSMODEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::PropertyConstraintsModel_ptr _t1 =
                dynamic_cast< ::amalthea::PropertyConstraintsModel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::PropertyConstraintsModel >(_t0);*/
        ::amalthea::Amalthea::setPropertyConstraintsModel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__MAPPINGMODEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::MappingModel_ptr _t1 =
                dynamic_cast< ::amalthea::MappingModel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::MappingModel >(_t0);*/
        ::amalthea::Amalthea::setMappingModel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__COMPONENTSMODEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ComponentsModel_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentsModel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ComponentsModel >(_t0);*/
        ::amalthea::Amalthea::setComponentsModel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__CONFIGMODEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ConfigModel_ptr _t1 =
                dynamic_cast< ::amalthea::ConfigModel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ConfigModel >(_t0);*/
        ::amalthea::Amalthea::setConfigModel(_t1);
        return;
    }
    }
    throw std::runtime_error("Amalthea::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Amalthea::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__VERSION:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_version);
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__COMMONELEMENTS:
    {
        return (bool) m_commonElements;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__SWMODEL:
    {
        return (bool) m_swModel;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__HWMODEL:
    {
        return (bool) m_hwModel;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__OSMODEL:
    {
        return (bool) m_osModel;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__STIMULIMODEL:
    {
        return (bool) m_stimuliModel;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__EVENTMODEL:
    {
        return (bool) m_eventModel;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__CONSTRAINTSMODEL:
    {
        return (bool) m_constraintsModel;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__PROPERTYCONSTRAINTSMODEL:
    {
        return (bool) m_propertyConstraintsModel;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__MAPPINGMODEL:
    {
        return (bool) m_mappingModel;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__COMPONENTSMODEL:
    {
        return (bool) m_componentsModel;
    }
    case ::amalthea::AmaltheaPackage::AMALTHEA__CONFIGMODEL:
    {
        return (bool) m_configModel;
    }
    }
    throw std::runtime_error("Amalthea::eIsSet Error. FeatureID:" + _featureID);
}

void Amalthea::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Amalthea::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Amalthea::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getAmalthea();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Amalthea::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__COMMONELEMENTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__SWMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__HWMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__OSMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__STIMULIMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__EVENTMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__CONSTRAINTSMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__PROPERTYCONSTRAINTSMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__MAPPINGMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__COMPONENTSMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__CONFIGMODEL:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Amalthea::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__COMMONELEMENTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__SWMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__HWMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__OSMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__STIMULIMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__EVENTMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__CONSTRAINTSMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__PROPERTYCONSTRAINTSMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__MAPPINGMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__COMPONENTSMODEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::AMALTHEA__CONFIGMODEL:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

