// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessingUnit.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PROCESSINGUNIT_HPP
#define AMALTHEA_PROCESSINGUNIT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/HwModule.hpp>
#include <amalthea/HwDestination.hpp>
#include <amalthea/HwPathElement.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ProcessingUnit_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ProcessingUnit : public virtual ::amalthea::HwModule, public virtual ::amalthea::HwDestination, public virtual ::amalthea::HwPathElement
{
public:
    ProcessingUnit();

    virtual ~ProcessingUnit();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::ProcessingUnitDefinition_ptr getDefinition () const;
    virtual void setDefinition (::amalthea::ProcessingUnitDefinition_ptr _definition);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::HwAccessElement_ptr >& getAccessElements () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::HwAccessElement_ptr >& getAccessElements ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Cache_ptr >& getCaches () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Cache_ptr >& getCaches ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PROCESSINGUNIT;

    /*PROTECTED REGION ID(ProcessingUnit) START*/
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

    /*PROTECTED REGION ID(ProcessingUnitImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ProcessingUnit_ptr _this()
    {   return ProcessingUnit_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::ProcessingUnitDefinition_ptr m_definition;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::HwAccessElement_ptr >> m_accessElements;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Cache_ptr >> m_caches;

};

}
 // amalthea

#endif // AMALTHEA_PROCESSINGUNIT_HPP

