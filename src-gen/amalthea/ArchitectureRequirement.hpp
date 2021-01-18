// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ArchitectureRequirement.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ARCHITECTUREREQUIREMENT_HPP
#define AMALTHEA_ARCHITECTUREREQUIREMENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Requirement.hpp>
#include <amalthea/Severity.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ArchitectureRequirement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ArchitectureRequirement : public virtual ::amalthea::Requirement
{
public:
    ArchitectureRequirement();

    virtual ~ArchitectureRequirement();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Component_ptr getComponent () const;
    virtual void setComponent (::amalthea::Component_ptr _component);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::ARCHITECTUREREQUIREMENT;

    /*PROTECTED REGION ID(ArchitectureRequirement) START*/
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

    /*PROTECTED REGION ID(ArchitectureRequirementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ArchitectureRequirement_ptr _this()
    {   return ArchitectureRequirement_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Component_ptr m_component;

};

}
 // amalthea

#endif // AMALTHEA_ARCHITECTUREREQUIREMENT_HPP

