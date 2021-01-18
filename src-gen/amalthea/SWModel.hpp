// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SWModel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SWMODEL_HPP
#define AMALTHEA_SWMODEL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(SWModel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL SWModel : public virtual ::amalthea::BaseObject
{
public:
    SWModel();

    virtual ~SWModel();

    virtual void _initialize();

    // Operations

    virtual ::amalthea::ModeLiteral_ptr modeLiteral ( ::ecore::EString const& _mode, ::ecore::EString const& _literal);

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::ISR_ptr >& getIsrs () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ISR_ptr >& getIsrs ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Task_ptr >& getTasks () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Task_ptr >& getTasks ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& getRunnables () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& getRunnables ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& getLabels () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& getLabels ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Channel_ptr >& getChannels () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Channel_ptr >& getChannels ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::ProcessPrototype_ptr >& getProcessPrototypes () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ProcessPrototype_ptr >& getProcessPrototypes ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Section_ptr >& getSections () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Section_ptr >& getSections ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Activation_ptr >& getActivations () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Activation_ptr >& getActivations ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::OsEvent_ptr >& getEvents () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::OsEvent_ptr >& getEvents ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::TypeDefinition_ptr >& getTypeDefinitions () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::TypeDefinition_ptr >& getTypeDefinitions ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::CustomEntity_ptr >& getCustomEntities () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::CustomEntity_ptr >& getCustomEntities ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::ProcessChain_ptr >& getProcessChains () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ProcessChain_ptr >& getProcessChains ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Mode_ptr >& getModes () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Mode_ptr >& getModes ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::ModeLabel_ptr >& getModeLabels () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ModeLabel_ptr >& getModeLabels ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::SWMODEL;

    /*PROTECTED REGION ID(SWModel) START*/
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

    /*PROTECTED REGION ID(SWModelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    SWModel_ptr _this()
    {   return SWModel_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ISR_ptr >> m_isrs;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Task_ptr >> m_tasks;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >> m_runnables;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Label_ptr >> m_labels;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Channel_ptr >> m_channels;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ProcessPrototype_ptr >> m_processPrototypes;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Section_ptr >> m_sections;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Activation_ptr >> m_activations;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::OsEvent_ptr >> m_events;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::TypeDefinition_ptr >> m_typeDefinitions;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::CustomEntity_ptr >> m_customEntities;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ProcessChain_ptr >> m_processChains;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Mode_ptr >> m_modes;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ModeLabel_ptr >> m_modeLabels;

};

}
 // amalthea

#endif // AMALTHEA_SWMODEL_HPP

