// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ConnectionHandlerDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CONNECTIONHANDLERDEFINITION_HPP
#define AMALTHEA_CONNECTIONHANDLERDEFINITION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/HwDefinition.hpp>
#include <amalthea/SchedPolicy.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ConnectionHandlerDefinition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ConnectionHandlerDefinition : public virtual ::amalthea::HwDefinition
{
public:
    ConnectionHandlerDefinition();

    virtual ~ConnectionHandlerDefinition();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::SchedPolicy getPolicy () const;
    virtual void setPolicy (::amalthea::SchedPolicy _policy);

    virtual ::amalthea::PositiveInt getMaxBurstSize () const;
    virtual void setMaxBurstSize (::amalthea::PositiveInt _maxBurstSize);

    virtual ::amalthea::PositiveInt getMaxConcurrentTransfers () const;
    virtual void setMaxConcurrentTransfers (::amalthea::PositiveInt _maxConcurrentTransfers);

    // References
    virtual ::amalthea::IDiscreteValueDeviation_ptr getReadLatency () const;
    virtual void setReadLatency (::amalthea::IDiscreteValueDeviation_ptr _readLatency);

    virtual ::amalthea::IDiscreteValueDeviation_ptr getWriteLatency () const;
    virtual void setWriteLatency (::amalthea::IDiscreteValueDeviation_ptr _writeLatency);

    virtual ::amalthea::DataRate_ptr getDataRate () const;
    virtual void setDataRate (::amalthea::DataRate_ptr _dataRate);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CONNECTIONHANDLERDEFINITION;

    /*PROTECTED REGION ID(ConnectionHandlerDefinition) START*/
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

    /*PROTECTED REGION ID(ConnectionHandlerDefinitionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ConnectionHandlerDefinition_ptr _this()
    {   return ConnectionHandlerDefinition_ptr(this);}

private:
    // Attributes

    ::amalthea::SchedPolicy m_policy;

    ::amalthea::PositiveInt m_maxBurstSize;

    ::amalthea::PositiveInt m_maxConcurrentTransfers;

    // References

    ::amalthea::IDiscreteValueDeviation_ptr m_readLatency;

    ::amalthea::IDiscreteValueDeviation_ptr m_writeLatency;

    ::amalthea::DataRate_ptr m_dataRate;

};

}
 // amalthea

#endif // AMALTHEA_CONNECTIONHANDLERDEFINITION_HPP

