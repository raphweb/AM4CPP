// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwAccessPath.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_HWACCESSPATH_HPP
#define AMALTHEA_HWACCESSPATH_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/HwPath.hpp>
#include <amalthea/INamed.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(HwAccessPath_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL HwAccessPath : public virtual ::amalthea::HwPath, public virtual ::amalthea::INamed
{
public:
    HwAccessPath();

    virtual ~HwAccessPath();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::Address getStartAddress () const;
    virtual void setStartAddress (::amalthea::Address _startAddress);

    virtual ::amalthea::Address getEndAddress () const;
    virtual void setEndAddress (::amalthea::Address _endAddress);

    virtual ::amalthea::Address getMemOffset () const;
    virtual void setMemOffset (::amalthea::Address _memOffset);

    // References
    virtual ::amalthea::HwAccessElement_ptr getContainingAccessElement () const;
    virtual void setContainingAccessElement (::amalthea::HwAccessElement_ptr _containingAccessElement);
    virtual ::amalthea::HwAccessElement_ptr basicgetContainingAccessElement ();
    virtual void basicsetContainingAccessElement (::amalthea::HwAccessElement_ptr _containingAccessElement);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::HwPathElement_ptr >& getPathElements () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::HwPathElement_ptr >& getPathElements ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::HWACCESSPATH;

    /*PROTECTED REGION ID(HwAccessPath) START*/
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

    /*PROTECTED REGION ID(HwAccessPathImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    HwAccessPath_ptr _this()
    {   return HwAccessPath_ptr(this);}

private:
    // Attributes

    ::amalthea::Address m_startAddress;

    ::amalthea::Address m_endAddress;

    ::amalthea::Address m_memOffset;

    // References

    ::amalthea::HwAccessElement_ptr m_containingAccessElement;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::HwPathElement_ptr >> m_pathElements;

};

}
 // amalthea

#endif // AMALTHEA_HWACCESSPATH_HPP

