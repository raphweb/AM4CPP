// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PowerDomain.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_POWERDOMAIN_HPP
#define AMALTHEA_POWERDOMAIN_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/HwDomain.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(PowerDomain_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL PowerDomain : public virtual ::amalthea::HwDomain
{
public:
    PowerDomain();

    virtual ~PowerDomain();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isPowerGating () const;
    virtual void setPowerGating (::ecore::EBoolean _powerGating);

    // References
    virtual ::amalthea::Voltage_ptr getDefaultValue () const;
    virtual void setDefaultValue (::amalthea::Voltage_ptr _defaultValue);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::POWERDOMAIN;

    /*PROTECTED REGION ID(PowerDomain) START*/
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

    /*PROTECTED REGION ID(PowerDomainImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PowerDomain_ptr _this()
    {   return PowerDomain_ptr(this);}

private:
    // Attributes

    ::ecore::EBoolean m_powerGating;

    // References

    ::amalthea::Voltage_ptr m_defaultValue;

};

}
 // amalthea

#endif // AMALTHEA_POWERDOMAIN_HPP

