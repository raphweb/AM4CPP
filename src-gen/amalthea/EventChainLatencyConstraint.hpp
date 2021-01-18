// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventChainLatencyConstraint.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_EVENTCHAINLATENCYCONSTRAINT_HPP
#define AMALTHEA_EVENTCHAINLATENCYCONSTRAINT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/TimingConstraint.hpp>
#include <amalthea/LatencyType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(EventChainLatencyConstraint_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL EventChainLatencyConstraint : public virtual ::amalthea::TimingConstraint
{
public:
    EventChainLatencyConstraint();

    virtual ~EventChainLatencyConstraint();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::LatencyType getType () const;
    virtual void setType (::amalthea::LatencyType _type);

    // References
    virtual ::amalthea::EventChain_ptr getScope () const;
    virtual void setScope (::amalthea::EventChain_ptr _scope);

    virtual ::amalthea::Time_ptr getMinimum () const;
    virtual void setMinimum (::amalthea::Time_ptr _minimum);

    virtual ::amalthea::Time_ptr getMaximum () const;
    virtual void setMaximum (::amalthea::Time_ptr _maximum);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT;

    /*PROTECTED REGION ID(EventChainLatencyConstraint) START*/
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

    /*PROTECTED REGION ID(EventChainLatencyConstraintImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EventChainLatencyConstraint_ptr _this()
    {   return EventChainLatencyConstraint_ptr(this);}

private:
    // Attributes

    ::amalthea::LatencyType m_type;

    // References

    ::amalthea::EventChain_ptr m_scope;

    ::amalthea::Time_ptr m_minimum;

    ::amalthea::Time_ptr m_maximum;

};

}
 // amalthea

#endif // AMALTHEA_EVENTCHAINLATENCYCONSTRAINT_HPP

