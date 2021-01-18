// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MemoryDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MEMORYDEFINITION_HPP
#define AMALTHEA_MEMORYDEFINITION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/HwDefinition.hpp>
#include <amalthea/MemoryType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(MemoryDefinition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL MemoryDefinition : public virtual ::amalthea::HwDefinition
{
public:
    MemoryDefinition();

    virtual ~MemoryDefinition();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::MemoryType getMemoryType () const;
    virtual void setMemoryType (::amalthea::MemoryType _memoryType);

    // References
    virtual ::amalthea::DataSize_ptr getSize () const;
    virtual void setSize (::amalthea::DataSize_ptr _size);

    virtual ::amalthea::IDiscreteValueDeviation_ptr getAccessLatency () const;
    virtual void setAccessLatency (::amalthea::IDiscreteValueDeviation_ptr _accessLatency);

    virtual ::amalthea::DataRate_ptr getDataRate () const;
    virtual void setDataRate (::amalthea::DataRate_ptr _dataRate);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::MemoryClassifier_ptr >& getClassifiers () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::MemoryClassifier_ptr >& getClassifiers ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::MEMORYDEFINITION;

    /*PROTECTED REGION ID(MemoryDefinition) START*/
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

    /*PROTECTED REGION ID(MemoryDefinitionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    MemoryDefinition_ptr _this()
    {   return MemoryDefinition_ptr(this);}

private:
    // Attributes

    ::amalthea::MemoryType m_memoryType;

    // References

    ::amalthea::DataSize_ptr m_size;

    ::amalthea::IDiscreteValueDeviation_ptr m_accessLatency;

    ::amalthea::DataRate_ptr m_dataRate;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::MemoryClassifier_ptr >> m_classifiers;

};

}
 // amalthea

#endif // AMALTHEA_MEMORYDEFINITION_HPP

