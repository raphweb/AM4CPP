// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ISystem.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ISYSTEM_HPP
#define AMALTHEA_ISYSTEM_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ISystem_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ISystem : public virtual ::ecore::EObject
{
public:
    ISystem();

    virtual ~ISystem();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::ComponentInstance_ptr >& getComponentInstances () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ComponentInstance_ptr >& getComponentInstances ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Connector_ptr >& getConnectors () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Connector_ptr >& getConnectors ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::QualifiedPort_ptr >& getGroundedPorts () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::QualifiedPort_ptr >& getGroundedPorts ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::QualifiedPort_ptr >& getInnerPorts () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::QualifiedPort_ptr >& getInnerPorts ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::ISYSTEM;

    /*PROTECTED REGION ID(ISystem) START*/
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

    /*PROTECTED REGION ID(ISystemImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ISystem_ptr _this()
    {   return ISystem_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ComponentInstance_ptr >> m_componentInstances;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Connector_ptr >> m_connectors;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::QualifiedPort_ptr >> m_groundedPorts;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::QualifiedPort_ptr >> m_innerPorts;

};

}
 // amalthea

#endif // AMALTHEA_ISYSTEM_HPP

