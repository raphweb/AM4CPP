// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentStructure.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_COMPONENTSTRUCTURE_HPP
#define AMALTHEA_COMPONENTSTRUCTURE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ComponentStructure_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ComponentStructure : public virtual ::amalthea::ReferableObject
{
public:
    ComponentStructure();

    virtual ~ComponentStructure();

    virtual void _initialize();

    // Operations

    virtual ::amalthea::ComponentStructure_ptr getContainingStructure ();

    virtual ::ecore::EString getDefaultNameSeparator ();

    virtual std::vector< ::ecore::EString > getNamePrefixSegments ();

    // Attributes
    virtual ::ecore::EString const& getStructureType () const;
    virtual void setStructureType (::ecore::EString const& _structureType);

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::ComponentStructure_ptr >& getSubStructures () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ComponentStructure_ptr >& getSubStructures ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::IComponentStructureMember_ptr >& getMemberObjects () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::IComponentStructureMember_ptr >& getMemberObjects ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::COMPONENTSTRUCTURE;

    /*PROTECTED REGION ID(ComponentStructure) START*/
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

    /*PROTECTED REGION ID(ComponentStructureImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ComponentStructure_ptr _this()
    {   return ComponentStructure_ptr(this);}

private:
    // Attributes

    ::ecore::EString m_structureType;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ComponentStructure_ptr >> m_subStructures;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::IComponentStructureMember_ptr >> m_memberObjects;

};

}
 // amalthea

#endif // AMALTHEA_COMPONENTSTRUCTURE_HPP

