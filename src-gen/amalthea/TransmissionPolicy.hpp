// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TransmissionPolicy.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TRANSMISSIONPOLICY_HPP
#define AMALTHEA_TRANSMISSIONPOLICY_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(TransmissionPolicy_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL TransmissionPolicy : public virtual ::ecore::EObject
{
public:
    TransmissionPolicy();

    virtual ~TransmissionPolicy();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getChunkProcessingTicks () const;
    virtual void setChunkProcessingTicks (::ecore::EInt _chunkProcessingTicks);

    virtual ::ecore::EDouble getTransmitRatio () const;
    virtual void setTransmitRatio (::ecore::EDouble _transmitRatio);

    // References
    virtual ::amalthea::DataSize_ptr getChunkSize () const;
    virtual void setChunkSize (::amalthea::DataSize_ptr _chunkSize);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TRANSMISSIONPOLICY;

    /*PROTECTED REGION ID(TransmissionPolicy) START*/
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

    /*PROTECTED REGION ID(TransmissionPolicyImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TransmissionPolicy_ptr _this()
    {   return TransmissionPolicy_ptr(this);}

private:
    // Attributes

    ::ecore::EInt m_chunkProcessingTicks;

    ::ecore::EDouble m_transmitRatio;

    // References

    ::amalthea::DataSize_ptr m_chunkSize;

};

}
 // amalthea

#endif // AMALTHEA_TRANSMISSIONPOLICY_HPP

