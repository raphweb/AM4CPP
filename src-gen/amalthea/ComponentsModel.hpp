// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentsModel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_COMPONENTSMODEL_HPP
#define AMALTHEA_COMPONENTSMODEL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>
#include <amalthea/IComponentContainer.hpp>
#include <amalthea/IInterfaceContainer.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ComponentsModel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ComponentsModel : public virtual ::amalthea::BaseObject, public virtual ::amalthea::IComponentContainer, public virtual ::amalthea::IInterfaceContainer
{
public:
    ComponentsModel();

    virtual ~ComponentsModel();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::ComponentStructure_ptr >& getStructures () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ComponentStructure_ptr >& getStructures ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::System_ptr >& getSystems () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::System_ptr >& getSystems ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::COMPONENTSMODEL;

    /*PROTECTED REGION ID(ComponentsModel) START*/
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

    /*PROTECTED REGION ID(ComponentsModelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ComponentsModel_ptr _this()
    {   return ComponentsModel_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ComponentStructure_ptr >> m_structures;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::System_ptr >> m_systems;

};

}
 // amalthea

#endif // AMALTHEA_COMPONENTSMODEL_HPP

