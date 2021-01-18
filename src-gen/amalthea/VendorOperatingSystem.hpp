// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/VendorOperatingSystem.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_VENDOROPERATINGSYSTEM_HPP
#define AMALTHEA_VENDOROPERATINGSYSTEM_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/OperatingSystem.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(VendorOperatingSystem_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL VendorOperatingSystem : public virtual ::amalthea::OperatingSystem
{
public:
    VendorOperatingSystem();

    virtual ~VendorOperatingSystem();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getOsName () const;
    virtual void setOsName (::ecore::EString const& _osName);

    virtual ::ecore::EString const& getVendor () const;
    virtual void setVendor (::ecore::EString const& _vendor);

    virtual ::ecore::EString const& getVersion () const;
    virtual void setVersion (::ecore::EString const& _version);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::VENDOROPERATINGSYSTEM;

    /*PROTECTED REGION ID(VendorOperatingSystem) START*/
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

    /*PROTECTED REGION ID(VendorOperatingSystemImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    VendorOperatingSystem_ptr _this()
    {   return VendorOperatingSystem_ptr(this);}

private:
    // Attributes

    ::ecore::EString m_osName;

    ::ecore::EString m_vendor;

    ::ecore::EString m_version;

    // References

};

}
 // amalthea

#endif // AMALTHEA_VENDOROPERATINGSYSTEM_HPP

