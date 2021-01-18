// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessPairingConstraint.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PROCESSPAIRINGCONSTRAINT_HPP
#define AMALTHEA_PROCESSPAIRINGCONSTRAINT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/PairingConstraint.hpp>
#include <amalthea/ProcessConstraint.hpp>
#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ProcessPairingConstraint_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ProcessPairingConstraint : public virtual ::amalthea::PairingConstraint, public virtual ::amalthea::ProcessConstraint, public virtual ::amalthea::BaseObject
{
public:
    ProcessPairingConstraint();

    virtual ~ProcessPairingConstraint();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::ProcessGroup_ptr getGroup () const;
    virtual void setGroup (::amalthea::ProcessGroup_ptr _group);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PROCESSPAIRINGCONSTRAINT;

    /*PROTECTED REGION ID(ProcessPairingConstraint) START*/
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

    /*PROTECTED REGION ID(ProcessPairingConstraintImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ProcessPairingConstraint_ptr _this()
    {   return ProcessPairingConstraint_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::ProcessGroup_ptr m_group;

};

}
 // amalthea

#endif // AMALTHEA_PROCESSPAIRINGCONSTRAINT_HPP

