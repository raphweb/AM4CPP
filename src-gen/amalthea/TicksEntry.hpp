// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TicksEntry.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TICKSENTRY_HPP
#define AMALTHEA_TICKSENTRY_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(TicksEntry_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL TicksEntry : public virtual ::ecore::EObject
{
public:
    TicksEntry();

    virtual ~TicksEntry();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::ProcessingUnitDefinition_ptr getKey () const;
    virtual void setKey (::amalthea::ProcessingUnitDefinition_ptr _key);

    virtual ::amalthea::IDiscreteValueDeviation_ptr getValue () const;
    virtual void setValue (::amalthea::IDiscreteValueDeviation_ptr _value);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TICKSENTRY;

    /*PROTECTED REGION ID(TicksEntry) START*/
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

    /*PROTECTED REGION ID(TicksEntryImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TicksEntry_ptr _this()
    {   return TicksEntry_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::ProcessingUnitDefinition_ptr m_key;

    ::amalthea::IDiscreteValueDeviation_ptr m_value;

};

}
 // amalthea

#endif // AMALTHEA_TICKSENTRY_HPP

