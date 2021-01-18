// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwPort.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_HWPORT_HPP
#define AMALTHEA_HWPORT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/PortType.hpp>
#include <amalthea/PortInterface.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(HwPort_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL HwPort : public virtual ::amalthea::ReferableBaseObject, public virtual ::amalthea::ITaggable
{
public:
    HwPort();

    virtual ~HwPort();

    virtual void _initialize();

    // Operations

    virtual std::vector< ::ecore::EString > getNamePrefixSegments ();

    // Attributes
    virtual ::ecore::EInt getBitWidth () const;
    virtual void setBitWidth (::ecore::EInt _bitWidth);

    virtual ::ecore::EInt getPriority () const;
    virtual void setPriority (::ecore::EInt _priority);

    virtual ::amalthea::PortType getPortType () const;
    virtual void setPortType (::amalthea::PortType _portType);

    virtual ::amalthea::PortInterface getPortInterface () const;
    virtual void setPortInterface (::amalthea::PortInterface _portInterface);

    virtual ::ecore::EBoolean isDelegated () const;
    virtual void setDelegated (::ecore::EBoolean _delegated);

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::HwConnection_ptr >& getConnections () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::HwConnection_ptr >& getConnections ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::HWPORT;

    /*PROTECTED REGION ID(HwPort) START*/
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

    /*PROTECTED REGION ID(HwPortImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    HwPort_ptr _this()
    {   return HwPort_ptr(this);}

private:
    // Attributes

    ::ecore::EInt m_bitWidth;

    ::ecore::EInt m_priority;

    ::amalthea::PortType m_portType;

    ::amalthea::PortInterface m_portInterface;

    ::ecore::EBoolean m_delegated;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::HwConnection_ptr >> m_connections;

};

}
 // amalthea

#endif // AMALTHEA_HWPORT_HPP

