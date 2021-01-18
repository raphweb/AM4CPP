// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwFeature.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_HWFEATURE_HPP
#define AMALTHEA_HWFEATURE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(HwFeature_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL HwFeature : public virtual ::amalthea::ReferableBaseObject
{
public:
    HwFeature();

    virtual ~HwFeature();

    virtual void _initialize();

    // Operations

    virtual std::vector< ::ecore::EString > getNamePrefixSegments ();

    virtual ::ecore::EString toString ();

    // Attributes
    virtual ::ecore::EDouble getValue () const;
    virtual void setValue (::ecore::EDouble _value);

    // References
    virtual ::amalthea::HwFeatureCategory_ptr getContainingCategory () const;
    virtual void setContainingCategory (::amalthea::HwFeatureCategory_ptr _containingCategory);
    virtual ::amalthea::HwFeatureCategory_ptr basicgetContainingCategory ();
    virtual void basicsetContainingCategory (::amalthea::HwFeatureCategory_ptr _containingCategory);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::HWFEATURE;

    /*PROTECTED REGION ID(HwFeature) START*/
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

    /*PROTECTED REGION ID(HwFeatureImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    HwFeature_ptr _this()
    {   return HwFeature_ptr(this);}

private:
    // Attributes

    ::ecore::EDouble m_value;

    // References

    ::amalthea::HwFeatureCategory_ptr m_containingCategory;

};

}
 // amalthea

#endif // AMALTHEA_HWFEATURE_HPP

