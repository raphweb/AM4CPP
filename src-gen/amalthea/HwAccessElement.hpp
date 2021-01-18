// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwAccessElement.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_HWACCESSELEMENT_HPP
#define AMALTHEA_HWACCESSELEMENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/INamed.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(HwAccessElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL HwAccessElement : public virtual ::amalthea::ITaggable, public virtual ::amalthea::INamed
{
public:
    HwAccessElement();

    virtual ~HwAccessElement();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::ProcessingUnit_ptr getSource () const;
    virtual void setSource (::amalthea::ProcessingUnit_ptr _source);
    virtual ::amalthea::ProcessingUnit_ptr basicgetSource ();
    virtual void basicsetSource (::amalthea::ProcessingUnit_ptr _source);

    virtual ::amalthea::HwDestination_ptr getDestination () const;
    virtual void setDestination (::amalthea::HwDestination_ptr _destination);

    virtual ::amalthea::HwAccessPath_ptr getAccessPath () const;
    virtual void setAccessPath (::amalthea::HwAccessPath_ptr _accessPath);
    virtual ::amalthea::HwAccessPath_ptr basicgetAccessPath ();
    virtual void basicsetAccessPath (::amalthea::HwAccessPath_ptr _accessPath);

    virtual ::amalthea::IDiscreteValueDeviation_ptr getReadLatency () const;
    virtual void setReadLatency (::amalthea::IDiscreteValueDeviation_ptr _readLatency);

    virtual ::amalthea::IDiscreteValueDeviation_ptr getWriteLatency () const;
    virtual void setWriteLatency (::amalthea::IDiscreteValueDeviation_ptr _writeLatency);

    virtual ::amalthea::DataRate_ptr getDataRate () const;
    virtual void setDataRate (::amalthea::DataRate_ptr _dataRate);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::HWACCESSELEMENT;

    /*PROTECTED REGION ID(HwAccessElement) START*/
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

    /*PROTECTED REGION ID(HwAccessElementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    HwAccessElement_ptr _this()
    {   return HwAccessElement_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::ProcessingUnit_ptr m_source;

    ::amalthea::HwDestination_ptr m_destination;

    ::amalthea::HwAccessPath_ptr m_accessPath;

    ::amalthea::IDiscreteValueDeviation_ptr m_readLatency;

    ::amalthea::IDiscreteValueDeviation_ptr m_writeLatency;

    ::amalthea::DataRate_ptr m_dataRate;

};

}
 // amalthea

#endif // AMALTHEA_HWACCESSELEMENT_HPP

