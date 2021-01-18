// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Connector.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CONNECTOR_HPP
#define AMALTHEA_CONNECTOR_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/ITaggable.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Connector_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Connector : public virtual ::amalthea::BaseObject, public virtual ::amalthea::INamed, public virtual ::amalthea::ITaggable
{
public:
    Connector();

    virtual ~Connector();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::ISystem_ptr getContainingSystem () const;
    virtual void setContainingSystem (::amalthea::ISystem_ptr _containingSystem);
    virtual ::amalthea::ISystem_ptr basicgetContainingSystem ();
    virtual void basicsetContainingSystem (::amalthea::ISystem_ptr _containingSystem);

    virtual ::amalthea::QualifiedPort_ptr getSourcePort () const;
    virtual void setSourcePort (::amalthea::QualifiedPort_ptr _sourcePort);

    virtual ::amalthea::QualifiedPort_ptr getTargetPort () const;
    virtual void setTargetPort (::amalthea::QualifiedPort_ptr _targetPort);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::InterfaceChannel_ptr >& getImplementedInterfaces () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::InterfaceChannel_ptr >& getImplementedInterfaces ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CONNECTOR;

    /*PROTECTED REGION ID(Connector) START*/
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

    /*PROTECTED REGION ID(ConnectorImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Connector_ptr _this()
    {   return Connector_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::ISystem_ptr m_containingSystem;

    ::amalthea::QualifiedPort_ptr m_sourcePort;

    ::amalthea::QualifiedPort_ptr m_targetPort;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::InterfaceChannel_ptr >> m_implementedInterfaces;

};

}
 // amalthea

#endif // AMALTHEA_CONNECTOR_HPP

