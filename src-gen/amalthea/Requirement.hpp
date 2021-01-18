// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Requirement.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_REQUIREMENT_HPP
#define AMALTHEA_REQUIREMENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Severity.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Requirement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Requirement : public virtual ::amalthea::BaseObject, public virtual ::amalthea::INamed
{
public:
    Requirement();

    virtual ~Requirement();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::Severity getSeverity () const;
    virtual void setSeverity (::amalthea::Severity _severity);

    // References
    virtual ::amalthea::RequirementLimit_ptr getLimit () const;
    virtual void setLimit (::amalthea::RequirementLimit_ptr _limit);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::REQUIREMENT;

    /*PROTECTED REGION ID(Requirement) START*/
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

    /*PROTECTED REGION ID(RequirementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Requirement_ptr _this()
    {   return Requirement_ptr(this);}

private:
    // Attributes

    ::amalthea::Severity m_severity;

    // References

    ::amalthea::RequirementLimit_ptr m_limit;

};

}
 // amalthea

#endif // AMALTHEA_REQUIREMENT_HPP

