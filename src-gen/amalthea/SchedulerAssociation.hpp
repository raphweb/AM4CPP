// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SchedulerAssociation.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SCHEDULERASSOCIATION_HPP
#define AMALTHEA_SCHEDULERASSOCIATION_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(SchedulerAssociation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL SchedulerAssociation : public virtual ::ecore::EObject
{
public:
    SchedulerAssociation();

    virtual ~SchedulerAssociation();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::TaskScheduler_ptr getChild () const;
    virtual void setChild (::amalthea::TaskScheduler_ptr _child);
    virtual ::amalthea::TaskScheduler_ptr basicgetChild ();
    virtual void basicsetChild (::amalthea::TaskScheduler_ptr _child);

    virtual ::amalthea::TaskScheduler_ptr getParent () const;
    virtual void setParent (::amalthea::TaskScheduler_ptr _parent);

    virtual ::amalthea::SchedulingParameters_ptr getSchedulingParameters () const;
    virtual void setSchedulingParameters (::amalthea::SchedulingParameters_ptr _schedulingParameters);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::ParameterExtension_ptr >& getParameterExtensions () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ParameterExtension_ptr >& getParameterExtensions ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::SCHEDULERASSOCIATION;

    /*PROTECTED REGION ID(SchedulerAssociation) START*/
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

    /*PROTECTED REGION ID(SchedulerAssociationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    SchedulerAssociation_ptr _this()
    {   return SchedulerAssociation_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::TaskScheduler_ptr m_child;

    ::amalthea::TaskScheduler_ptr m_parent;

    ::amalthea::SchedulingParameters_ptr m_schedulingParameters;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ParameterExtension_ptr >> m_parameterExtensions;

};

}
 // amalthea

#endif // AMALTHEA_SCHEDULERASSOCIATION_HPP

