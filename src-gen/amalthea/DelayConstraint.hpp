// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DelayConstraint.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DELAYCONSTRAINT_HPP
#define AMALTHEA_DELAYCONSTRAINT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/TimingConstraint.hpp>
#include <amalthea/MappingType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(DelayConstraint_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL DelayConstraint : public virtual ::amalthea::TimingConstraint
{
public:
    DelayConstraint();

    virtual ~DelayConstraint();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::MappingType getMappingType () const;
    virtual void setMappingType (::amalthea::MappingType _mappingType);

    // References
    virtual ::amalthea::EntityEvent_ptr getSource () const;
    virtual void setSource (::amalthea::EntityEvent_ptr _source);

    virtual ::amalthea::EntityEvent_ptr getTarget () const;
    virtual void setTarget (::amalthea::EntityEvent_ptr _target);

    virtual ::amalthea::Time_ptr getUpper () const;
    virtual void setUpper (::amalthea::Time_ptr _upper);

    virtual ::amalthea::Time_ptr getLower () const;
    virtual void setLower (::amalthea::Time_ptr _lower);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::DELAYCONSTRAINT;

    /*PROTECTED REGION ID(DelayConstraint) START*/
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

    /*PROTECTED REGION ID(DelayConstraintImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DelayConstraint_ptr _this()
    {   return DelayConstraint_ptr(this);}

private:
    // Attributes

    ::amalthea::MappingType m_mappingType;

    // References

    ::amalthea::EntityEvent_ptr m_source;

    ::amalthea::EntityEvent_ptr m_target;

    ::amalthea::Time_ptr m_upper;

    ::amalthea::Time_ptr m_lower;

};

}
 // amalthea

#endif // AMALTHEA_DELAYCONSTRAINT_HPP

