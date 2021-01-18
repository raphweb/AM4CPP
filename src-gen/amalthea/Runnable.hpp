// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Runnable.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_RUNNABLE_HPP
#define AMALTHEA_RUNNABLE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/ASILType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Runnable_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Runnable : public virtual ::amalthea::AbstractMemoryElement, public virtual ::amalthea::INamespaceMember
{
public:
    Runnable();

    virtual ~Runnable();

    virtual void _initialize();

    // Operations

    virtual std::vector< ::amalthea::ActivityGraphItem_ptr > getRunnableItems ();

    virtual ::amalthea::Activation_ptr getFirstActivation ();

    // Attributes
    virtual ::ecore::EBoolean isCallback () const;
    virtual void setCallback (::ecore::EBoolean _callback);

    virtual ::ecore::EBoolean isService () const;
    virtual void setService (::ecore::EBoolean _service);

    virtual ::amalthea::ASILType getAsilLevel () const;
    virtual void setAsilLevel (::amalthea::ASILType _asilLevel);

    // References
    virtual ::amalthea::ModeConditionDisjunction_ptr getExecutionCondition () const;
    virtual void setExecutionCondition (::amalthea::ModeConditionDisjunction_ptr _executionCondition);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::RunnableParameter_ptr >& getParameters () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::RunnableParameter_ptr >& getParameters ();

    virtual ::amalthea::ActivityGraph_ptr getActivityGraph () const;
    virtual void setActivityGraph (::amalthea::ActivityGraph_ptr _activityGraph);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Activation_ptr >& getActivations () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Activation_ptr >& getActivations ();

    virtual ::amalthea::Section_ptr getSection () const;
    virtual void setSection (::amalthea::Section_ptr _section);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::RunnableCall_ptr >& getRunnableCalls () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::RunnableCall_ptr >& getRunnableCalls ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& getReferringComponents () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& getReferringComponents ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::RUNNABLE;

    /*PROTECTED REGION ID(Runnable) START*/
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

    /*PROTECTED REGION ID(RunnableImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Runnable_ptr _this()
    {   return Runnable_ptr(this);}

private:
    // Attributes

    ::ecore::EBoolean m_callback;

    ::ecore::EBoolean m_service;

    ::amalthea::ASILType m_asilLevel;

    // References

    ::amalthea::ModeConditionDisjunction_ptr m_executionCondition;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::RunnableParameter_ptr >> m_parameters;

    ::amalthea::ActivityGraph_ptr m_activityGraph;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Activation_ptr >> m_activations;

    ::amalthea::Section_ptr m_section;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::RunnableCall_ptr >> m_runnableCalls;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Component_ptr >> m_referringComponents;

};

}
 // amalthea

#endif // AMALTHEA_RUNNABLE_HPP

