// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MemoryMapping.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MEMORYMAPPING_HPP
#define AMALTHEA_MEMORYMAPPING_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(MemoryMapping_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL MemoryMapping : public virtual ::amalthea::BaseObject
{
public:
    MemoryMapping();

    virtual ~MemoryMapping();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::Address getMemoryPositionAddress () const;
    virtual void setMemoryPositionAddress (::amalthea::Address _memoryPositionAddress);

    // References
    virtual ::amalthea::AbstractMemoryElement_ptr getAbstractElement () const;
    virtual void setAbstractElement (::amalthea::AbstractMemoryElement_ptr _abstractElement);

    virtual ::amalthea::Memory_ptr getMemory () const;
    virtual void setMemory (::amalthea::Memory_ptr _memory);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::MEMORYMAPPING;

    /*PROTECTED REGION ID(MemoryMapping) START*/
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

    /*PROTECTED REGION ID(MemoryMappingImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    MemoryMapping_ptr _this()
    {   return MemoryMapping_ptr(this);}

private:
    // Attributes

    ::amalthea::Address m_memoryPositionAddress;

    // References

    ::amalthea::AbstractMemoryElement_ptr m_abstractElement;

    ::amalthea::Memory_ptr m_memory;

};

}
 // amalthea

#endif // AMALTHEA_MEMORYMAPPING_HPP

