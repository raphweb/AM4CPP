// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Stimulus.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_STIMULUS_HPP
#define AMALTHEA_STIMULUS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Stimulus_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Stimulus : public virtual ::amalthea::ReferableBaseObject, public virtual ::amalthea::ITaggable
{
public:
    Stimulus();

    virtual ~Stimulus();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::ModeValueList_ptr getSetModeValueList () const;
    virtual void setSetModeValueList (::amalthea::ModeValueList_ptr _setModeValueList);

    virtual ::amalthea::ModeConditionDisjunction_ptr getExecutionCondition () const;
    virtual void setExecutionCondition (::amalthea::ModeConditionDisjunction_ptr _executionCondition);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Process_ptr >& getAffectedProcesses () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Process_ptr >& getAffectedProcesses ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::STIMULUS;

    /*PROTECTED REGION ID(Stimulus) START*/
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

    /*PROTECTED REGION ID(StimulusImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Stimulus_ptr _this()
    {   return Stimulus_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::ModeValueList_ptr m_setModeValueList;

    ::amalthea::ModeConditionDisjunction_ptr m_executionCondition;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Process_ptr >> m_affectedProcesses;

};

}
 // amalthea

#endif // AMALTHEA_STIMULUS_HPP

