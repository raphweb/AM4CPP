// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwStructure.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_HWSTRUCTURE_HPP
#define AMALTHEA_HWSTRUCTURE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/StructureType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(HwStructure_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL HwStructure : public virtual ::amalthea::ReferableBaseObject, public virtual ::amalthea::ITaggable
{
public:
    HwStructure();

    virtual ~HwStructure();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::StructureType getStructureType () const;
    virtual void setStructureType (::amalthea::StructureType _structureType);

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::HwPort_ptr >& getPorts () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::HwPort_ptr >& getPorts ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::HwStructure_ptr >& getStructures () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::HwStructure_ptr >& getStructures ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::HwModule_ptr >& getModules () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::HwModule_ptr >& getModules ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::HwConnection_ptr >& getConnections () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::HwConnection_ptr >& getConnections ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::HwPort_ptr >& getInnerPorts () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::HwPort_ptr >& getInnerPorts ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::HWSTRUCTURE;

    /*PROTECTED REGION ID(HwStructure) START*/
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

    /*PROTECTED REGION ID(HwStructureImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    HwStructure_ptr _this()
    {   return HwStructure_ptr(this);}

private:
    // Attributes

    ::amalthea::StructureType m_structureType;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::HwPort_ptr >> m_ports;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::HwStructure_ptr >> m_structures;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::HwModule_ptr >> m_modules;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::HwConnection_ptr >> m_connections;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::HwPort_ptr >> m_innerPorts;

};

}
 // amalthea

#endif // AMALTHEA_HWSTRUCTURE_HPP

