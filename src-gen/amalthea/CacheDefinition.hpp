// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CacheDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CACHEDEFINITION_HPP
#define AMALTHEA_CACHEDEFINITION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/HwDefinition.hpp>
#include <amalthea/CacheType.hpp>
#include <amalthea/WriteStrategy.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(CacheDefinition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL CacheDefinition : public virtual ::amalthea::HwDefinition
{
public:
    CacheDefinition();

    virtual ~CacheDefinition();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::CacheType getCacheType () const;
    virtual void setCacheType (::amalthea::CacheType _cacheType);

    virtual ::amalthea::WriteStrategy getWriteStrategy () const;
    virtual void setWriteStrategy (::amalthea::WriteStrategy _writeStrategy);

    virtual ::ecore::EInt getNWays () const;
    virtual void setNWays (::ecore::EInt _nWays);

    virtual ::ecore::EBoolean isCoherency () const;
    virtual void setCoherency (::ecore::EBoolean _coherency);

    virtual ::ecore::EBoolean isExclusive () const;
    virtual void setExclusive (::ecore::EBoolean _exclusive);

    virtual ::ecore::EDouble getHitRate () const;
    virtual void setHitRate (::ecore::EDouble _hitRate);

    // References
    virtual ::amalthea::DataSize_ptr getSize () const;
    virtual void setSize (::amalthea::DataSize_ptr _size);

    virtual ::amalthea::DataSize_ptr getLineSize () const;
    virtual void setLineSize (::amalthea::DataSize_ptr _lineSize);

    virtual ::amalthea::IDiscreteValueDeviation_ptr getAccessLatency () const;
    virtual void setAccessLatency (::amalthea::IDiscreteValueDeviation_ptr _accessLatency);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CACHEDEFINITION;

    /*PROTECTED REGION ID(CacheDefinition) START*/
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

    /*PROTECTED REGION ID(CacheDefinitionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    CacheDefinition_ptr _this()
    {   return CacheDefinition_ptr(this);}

private:
    // Attributes

    ::amalthea::CacheType m_cacheType;

    ::amalthea::WriteStrategy m_writeStrategy;

    ::ecore::EInt m_nWays;

    ::ecore::EBoolean m_coherency;

    ::ecore::EBoolean m_exclusive;

    ::ecore::EDouble m_hitRate;

    // References

    ::amalthea::DataSize_ptr m_size;

    ::amalthea::DataSize_ptr m_lineSize;

    ::amalthea::IDiscreteValueDeviation_ptr m_accessLatency;

};

}
 // amalthea

#endif // AMALTHEA_CACHEDEFINITION_HPP

