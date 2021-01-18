// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeValueMapEntry.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MODEVALUEMAPENTRY_HPP
#define AMALTHEA_MODEVALUEMAPENTRY_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ModeValueMapEntry_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ModeValueMapEntry : public virtual ::ecore::EObject
{
public:
    ModeValueMapEntry();

    virtual ~ModeValueMapEntry();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getValue () const;
    virtual void setValue (::ecore::EString const& _value);

    // References
    virtual ::amalthea::ModeLabel_ptr getKey () const;
    virtual void setKey (::amalthea::ModeLabel_ptr _key);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::MODEVALUEMAPENTRY;

    /*PROTECTED REGION ID(ModeValueMapEntry) START*/
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

    /*PROTECTED REGION ID(ModeValueMapEntryImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ModeValueMapEntry_ptr _this()
    {   return ModeValueMapEntry_ptr(this);}

private:
    // Attributes

    ::ecore::EString m_value;

    // References

    ::amalthea::ModeLabel_ptr m_key;

};

}
 // amalthea

#endif // AMALTHEA_MODEVALUEMAPENTRY_HPP

