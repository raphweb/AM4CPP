// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PeriodicActivation.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PERIODICACTIVATION_HPP
#define AMALTHEA_PERIODICACTIVATION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Activation.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(PeriodicActivation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL PeriodicActivation : public virtual ::amalthea::Activation
{
public:
    PeriodicActivation();

    virtual ~PeriodicActivation();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Time_ptr getMin () const;
    virtual void setMin (::amalthea::Time_ptr _min);

    virtual ::amalthea::Time_ptr getMax () const;
    virtual void setMax (::amalthea::Time_ptr _max);

    virtual ::amalthea::Time_ptr getRecurrence () const;
    virtual void setRecurrence (::amalthea::Time_ptr _recurrence);

    virtual ::amalthea::Time_ptr getOffset () const;
    virtual void setOffset (::amalthea::Time_ptr _offset);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PERIODICACTIVATION;

    /*PROTECTED REGION ID(PeriodicActivation) START*/
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

    /*PROTECTED REGION ID(PeriodicActivationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PeriodicActivation_ptr _this()
    {   return PeriodicActivation_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Time_ptr m_min;

    ::amalthea::Time_ptr m_max;

    ::amalthea::Time_ptr m_recurrence;

    ::amalthea::Time_ptr m_offset;

};

}
 // amalthea

#endif // AMALTHEA_PERIODICACTIVATION_HPP

