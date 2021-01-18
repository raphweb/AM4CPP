// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwConnection.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_HWCONNECTION_HPP
#define AMALTHEA_HWCONNECTION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/HwPathElement.hpp>
#include <amalthea/ITaggable.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(HwConnection_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL HwConnection : public virtual ::amalthea::ReferableBaseObject, public virtual ::amalthea::HwPathElement, public virtual ::amalthea::ITaggable
{
public:
    HwConnection();

    virtual ~HwConnection();

    virtual void _initialize();

    // Operations

    virtual std::vector< ::ecore::EString > getNamePrefixSegments ();

    virtual std::vector< ::amalthea::HwPort_ptr > getPorts ();

    // Attributes
    virtual ::ecore::EBoolean isInternal () const;
    virtual void setInternal (::ecore::EBoolean _internal);

    // References
    virtual ::amalthea::IDiscreteValueDeviation_ptr getReadLatency () const;
    virtual void setReadLatency (::amalthea::IDiscreteValueDeviation_ptr _readLatency);

    virtual ::amalthea::IDiscreteValueDeviation_ptr getWriteLatency () const;
    virtual void setWriteLatency (::amalthea::IDiscreteValueDeviation_ptr _writeLatency);

    virtual ::amalthea::DataRate_ptr getDataRate () const;
    virtual void setDataRate (::amalthea::DataRate_ptr _dataRate);

    virtual ::amalthea::HwPort_ptr getPort1 () const;
    virtual void setPort1 (::amalthea::HwPort_ptr _port1);

    virtual ::amalthea::HwPort_ptr getPort2 () const;
    virtual void setPort2 (::amalthea::HwPort_ptr _port2);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::HWCONNECTION;

    /*PROTECTED REGION ID(HwConnection) START*/
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

    /*PROTECTED REGION ID(HwConnectionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    HwConnection_ptr _this()
    {   return HwConnection_ptr(this);}

private:
    // Attributes

    ::ecore::EBoolean m_internal;

    // References

    ::amalthea::IDiscreteValueDeviation_ptr m_readLatency;

    ::amalthea::IDiscreteValueDeviation_ptr m_writeLatency;

    ::amalthea::DataRate_ptr m_dataRate;

    ::amalthea::HwPort_ptr m_port1;

    ::amalthea::HwPort_ptr m_port2;

};

}
 // amalthea

#endif // AMALTHEA_HWCONNECTION_HPP

