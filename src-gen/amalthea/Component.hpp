// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Component.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_COMPONENT_HPP
#define AMALTHEA_COMPONENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/IComponentStructureMember.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Component_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Component : public virtual ::amalthea::ReferableBaseObject, public virtual ::amalthea::ITaggable, public virtual ::amalthea::INamespaceMember, public virtual ::amalthea::IComponentStructureMember
{
public:
    Component();

    virtual ~Component();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::ComponentPort_ptr >& getPorts () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ComponentPort_ptr >& getPorts ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::AbstractProcess_ptr >& getProcesses () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::AbstractProcess_ptr >& getProcesses ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& getRunnables () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& getRunnables ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& getLabels () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& getLabels ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Semaphore_ptr >& getSemaphores () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Semaphore_ptr >& getSemaphores ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::OsEvent_ptr >& getOsEvents () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::OsEvent_ptr >& getOsEvents ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::COMPONENT;

    /*PROTECTED REGION ID(Component) START*/
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

    /*PROTECTED REGION ID(ComponentImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Component_ptr _this()
    {   return Component_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ComponentPort_ptr >> m_ports;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::AbstractProcess_ptr >> m_processes;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >> m_runnables;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Label_ptr >> m_labels;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Semaphore_ptr >> m_semaphores;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::OsEvent_ptr >> m_osEvents;

};

}
 // amalthea

#endif // AMALTHEA_COMPONENT_HPP

