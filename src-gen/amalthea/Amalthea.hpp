// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Amalthea.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_AMALTHEA_HPP
#define AMALTHEA_AMALTHEA_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Amalthea_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Amalthea : public virtual ::amalthea::BaseObject
{
public:
    Amalthea();

    virtual ~Amalthea();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getVersion () const;
    virtual void setVersion (::ecore::EString const& _version);

    // References
    virtual ::amalthea::CommonElements_ptr getCommonElements () const;
    virtual void setCommonElements (::amalthea::CommonElements_ptr _commonElements);

    virtual ::amalthea::SWModel_ptr getSwModel () const;
    virtual void setSwModel (::amalthea::SWModel_ptr _swModel);

    virtual ::amalthea::HWModel_ptr getHwModel () const;
    virtual void setHwModel (::amalthea::HWModel_ptr _hwModel);

    virtual ::amalthea::OSModel_ptr getOsModel () const;
    virtual void setOsModel (::amalthea::OSModel_ptr _osModel);

    virtual ::amalthea::StimuliModel_ptr getStimuliModel () const;
    virtual void setStimuliModel (::amalthea::StimuliModel_ptr _stimuliModel);

    virtual ::amalthea::EventModel_ptr getEventModel () const;
    virtual void setEventModel (::amalthea::EventModel_ptr _eventModel);

    virtual ::amalthea::ConstraintsModel_ptr getConstraintsModel () const;
    virtual void setConstraintsModel (::amalthea::ConstraintsModel_ptr _constraintsModel);

    virtual ::amalthea::PropertyConstraintsModel_ptr getPropertyConstraintsModel () const;
    virtual void setPropertyConstraintsModel (::amalthea::PropertyConstraintsModel_ptr _propertyConstraintsModel);

    virtual ::amalthea::MappingModel_ptr getMappingModel () const;
    virtual void setMappingModel (::amalthea::MappingModel_ptr _mappingModel);

    virtual ::amalthea::ComponentsModel_ptr getComponentsModel () const;
    virtual void setComponentsModel (::amalthea::ComponentsModel_ptr _componentsModel);

    virtual ::amalthea::ConfigModel_ptr getConfigModel () const;
    virtual void setConfigModel (::amalthea::ConfigModel_ptr _configModel);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::AMALTHEA;

    /*PROTECTED REGION ID(Amalthea) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve) override;
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID) override;
    virtual void eUnset ( ::ecore::EInt _featureID) override;
    virtual ::ecore::EClass_ptr _eClass () override;
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue) override;

    /*PROTECTED REGION ID(AmaltheaImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Amalthea_ptr _this()
    {   return Amalthea_ptr(this);}

private:
    // Attributes

    ::ecore::EString m_version;

    // References

    ::amalthea::CommonElements_ptr m_commonElements;

    ::amalthea::SWModel_ptr m_swModel;

    ::amalthea::HWModel_ptr m_hwModel;

    ::amalthea::OSModel_ptr m_osModel;

    ::amalthea::StimuliModel_ptr m_stimuliModel;

    ::amalthea::EventModel_ptr m_eventModel;

    ::amalthea::ConstraintsModel_ptr m_constraintsModel;

    ::amalthea::PropertyConstraintsModel_ptr m_propertyConstraintsModel;

    ::amalthea::MappingModel_ptr m_mappingModel;

    ::amalthea::ComponentsModel_ptr m_componentsModel;

    ::amalthea::ConfigModel_ptr m_configModel;

};

}
 // amalthea

#endif // AMALTHEA_AMALTHEA_HPP

