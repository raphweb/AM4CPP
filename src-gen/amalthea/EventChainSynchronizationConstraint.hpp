// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventChainSynchronizationConstraint.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_EVENTCHAINSYNCHRONIZATIONCONSTRAINT_HPP
#define AMALTHEA_EVENTCHAINSYNCHRONIZATIONCONSTRAINT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/SynchronizationConstraint.hpp>
#include <amalthea/SynchronizationType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(EventChainSynchronizationConstraint_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL EventChainSynchronizationConstraint : public virtual ::amalthea::SynchronizationConstraint
{
public:
    EventChainSynchronizationConstraint();

    virtual ~EventChainSynchronizationConstraint();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::SynchronizationType getType () const;
    virtual void setType (::amalthea::SynchronizationType _type);

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::EventChain_ptr >& getScope () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::EventChain_ptr >& getScope ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::EVENTCHAINSYNCHRONIZATIONCONSTRAINT;

    /*PROTECTED REGION ID(EventChainSynchronizationConstraint) START*/
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

    /*PROTECTED REGION ID(EventChainSynchronizationConstraintImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EventChainSynchronizationConstraint_ptr _this()
    {   return EventChainSynchronizationConstraint_ptr(this);}

private:
    // Attributes

    ::amalthea::SynchronizationType m_type;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::EventChain_ptr >> m_scope;

};

}
 // amalthea

#endif // AMALTHEA_EVENTCHAINSYNCHRONIZATIONCONSTRAINT_HPP

