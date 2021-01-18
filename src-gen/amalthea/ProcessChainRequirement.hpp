// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessChainRequirement.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PROCESSCHAINREQUIREMENT_HPP
#define AMALTHEA_PROCESSCHAINREQUIREMENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Requirement.hpp>
#include <amalthea/Severity.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ProcessChainRequirement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ProcessChainRequirement : public virtual ::amalthea::Requirement
{
public:
    ProcessChainRequirement();

    virtual ~ProcessChainRequirement();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::ProcessChain_ptr getProcessChain () const;
    virtual void setProcessChain (::amalthea::ProcessChain_ptr _processChain);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PROCESSCHAINREQUIREMENT;

    /*PROTECTED REGION ID(ProcessChainRequirement) START*/
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

    /*PROTECTED REGION ID(ProcessChainRequirementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ProcessChainRequirement_ptr _this()
    {   return ProcessChainRequirement_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::ProcessChain_ptr m_processChain;

};

}
 // amalthea

#endif // AMALTHEA_PROCESSCHAINREQUIREMENT_HPP

