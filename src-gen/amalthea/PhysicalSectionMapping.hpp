// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PhysicalSectionMapping.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PHYSICALSECTIONMAPPING_HPP
#define AMALTHEA_PHYSICALSECTIONMAPPING_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(PhysicalSectionMapping_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL PhysicalSectionMapping : public virtual ::amalthea::ReferableBaseObject
{
public:
    PhysicalSectionMapping();

    virtual ~PhysicalSectionMapping();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::Address getStartAddress () const;
    virtual void setStartAddress (::amalthea::Address _startAddress);

    virtual ::amalthea::Address getEndAddress () const;
    virtual void setEndAddress (::amalthea::Address _endAddress);

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::Section_ptr >& getOrigin () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Section_ptr >& getOrigin ();

    virtual ::amalthea::Memory_ptr getMemory () const;
    virtual void setMemory (::amalthea::Memory_ptr _memory);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& getLabels () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& getLabels ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& getRunEntities () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& getRunEntities ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PHYSICALSECTIONMAPPING;

    /*PROTECTED REGION ID(PhysicalSectionMapping) START*/
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

    /*PROTECTED REGION ID(PhysicalSectionMappingImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PhysicalSectionMapping_ptr _this()
    {   return PhysicalSectionMapping_ptr(this);}

private:
    // Attributes

    ::amalthea::Address m_startAddress;

    ::amalthea::Address m_endAddress;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Section_ptr >> m_origin;

    ::amalthea::Memory_ptr m_memory;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Label_ptr >> m_labels;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >> m_runEntities;

};

}
 // amalthea

#endif // AMALTHEA_PHYSICALSECTIONMAPPING_HPP

