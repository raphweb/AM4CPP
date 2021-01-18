// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PropertyConstraintsModel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PROPERTYCONSTRAINTSMODEL_HPP
#define AMALTHEA_PROPERTYCONSTRAINTSMODEL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(PropertyConstraintsModel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL PropertyConstraintsModel : public virtual ::amalthea::BaseObject
{
public:
    PropertyConstraintsModel();

    virtual ~PropertyConstraintsModel();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::CoreAllocationConstraint_ptr >& getAllocationConstraints () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::CoreAllocationConstraint_ptr >& getAllocationConstraints ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::MemoryMappingConstraint_ptr >& getMappingConstraints () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::MemoryMappingConstraint_ptr >& getMappingConstraints ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PROPERTYCONSTRAINTSMODEL;

    /*PROTECTED REGION ID(PropertyConstraintsModel) START*/
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

    /*PROTECTED REGION ID(PropertyConstraintsModelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PropertyConstraintsModel_ptr _this()
    {   return PropertyConstraintsModel_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::CoreAllocationConstraint_ptr >> m_allocationConstraints;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::MemoryMappingConstraint_ptr >> m_mappingConstraints;

};

}
 // amalthea

#endif // AMALTHEA_PROPERTYCONSTRAINTSMODEL_HPP

