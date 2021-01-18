// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RepetitionConstraint.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_REPETITIONCONSTRAINT_HPP
#define AMALTHEA_REPETITIONCONSTRAINT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/TimingConstraint.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(RepetitionConstraint_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL RepetitionConstraint : public virtual ::amalthea::TimingConstraint
{
public:
    RepetitionConstraint();

    virtual ~RepetitionConstraint();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getSpan () const;
    virtual void setSpan (::ecore::EInt _span);

    // References
    virtual ::amalthea::EntityEvent_ptr getEvent () const;
    virtual void setEvent (::amalthea::EntityEvent_ptr _event);

    virtual ::amalthea::Time_ptr getLower () const;
    virtual void setLower (::amalthea::Time_ptr _lower);

    virtual ::amalthea::Time_ptr getUpper () const;
    virtual void setUpper (::amalthea::Time_ptr _upper);

    virtual ::amalthea::Time_ptr getJitter () const;
    virtual void setJitter (::amalthea::Time_ptr _jitter);

    virtual ::amalthea::Time_ptr getPeriod () const;
    virtual void setPeriod (::amalthea::Time_ptr _period);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::REPETITIONCONSTRAINT;

    /*PROTECTED REGION ID(RepetitionConstraint) START*/
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

    /*PROTECTED REGION ID(RepetitionConstraintImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    RepetitionConstraint_ptr _this()
    {   return RepetitionConstraint_ptr(this);}

private:
    // Attributes

    ::ecore::EInt m_span;

    // References

    ::amalthea::EntityEvent_ptr m_event;

    ::amalthea::Time_ptr m_lower;

    ::amalthea::Time_ptr m_upper;

    ::amalthea::Time_ptr m_jitter;

    ::amalthea::Time_ptr m_period;

};

}
 // amalthea

#endif // AMALTHEA_REPETITIONCONSTRAINT_HPP

