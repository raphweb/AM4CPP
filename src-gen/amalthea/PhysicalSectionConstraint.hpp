// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PhysicalSectionConstraint.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PHYSICALSECTIONCONSTRAINT_HPP
#define AMALTHEA_PHYSICALSECTIONCONSTRAINT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(PhysicalSectionConstraint_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL PhysicalSectionConstraint : public virtual ::amalthea::ReferableBaseObject
{
public:
    PhysicalSectionConstraint();

    virtual ~PhysicalSectionConstraint();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Section_ptr getSection () const;
    virtual void setSection (::amalthea::Section_ptr _section);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Memory_ptr >& getMemories () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Memory_ptr >& getMemories ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PHYSICALSECTIONCONSTRAINT;

    /*PROTECTED REGION ID(PhysicalSectionConstraint) START*/
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

    /*PROTECTED REGION ID(PhysicalSectionConstraintImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PhysicalSectionConstraint_ptr _this()
    {   return PhysicalSectionConstraint_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Section_ptr m_section;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Memory_ptr >> m_memories;

};

}
 // amalthea

#endif // AMALTHEA_PHYSICALSECTIONCONSTRAINT_HPP

