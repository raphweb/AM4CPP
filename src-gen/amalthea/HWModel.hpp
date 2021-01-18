// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HWModel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_HWMODEL_HPP
#define AMALTHEA_HWMODEL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(HWModel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL HWModel : public virtual ::amalthea::BaseObject
{
public:
    HWModel();

    virtual ~HWModel();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::HwDefinition_ptr >& getDefinitions () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::HwDefinition_ptr >& getDefinitions ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::HwFeatureCategory_ptr >& getFeatureCategories () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::HwFeatureCategory_ptr >& getFeatureCategories ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::HwStructure_ptr >& getStructures () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::HwStructure_ptr >& getStructures ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::HwDomain_ptr >& getDomains () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::HwDomain_ptr >& getDomains ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::HWMODEL;

    /*PROTECTED REGION ID(HWModel) START*/
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

    /*PROTECTED REGION ID(HWModelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    HWModel_ptr _this()
    {   return HWModel_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::HwDefinition_ptr >> m_definitions;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::HwFeatureCategory_ptr >> m_featureCategories;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::HwStructure_ptr >> m_structures;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::HwDomain_ptr >> m_domains;

};

}
 // amalthea

#endif // AMALTHEA_HWMODEL_HPP

