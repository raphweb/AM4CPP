// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OperatingSystem.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_OPERATINGSYSTEM_HPP
#define AMALTHEA_OPERATINGSYSTEM_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(OperatingSystem_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL OperatingSystem : public virtual ::amalthea::BaseObject, public virtual ::amalthea::INamed
{
public:
    OperatingSystem();

    virtual ~OperatingSystem();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::OsOverhead_ptr getOverhead () const;
    virtual void setOverhead (::amalthea::OsOverhead_ptr _overhead);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::TaskScheduler_ptr >& getTaskSchedulers () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::TaskScheduler_ptr >& getTaskSchedulers ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::InterruptController_ptr >& getInterruptControllers () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::InterruptController_ptr >& getInterruptControllers ();

    virtual ::amalthea::OsDataConsistency_ptr getOsDataConsistency () const;
    virtual void setOsDataConsistency (::amalthea::OsDataConsistency_ptr _osDataConsistency);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::OPERATINGSYSTEM;

    /*PROTECTED REGION ID(OperatingSystem) START*/
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

    /*PROTECTED REGION ID(OperatingSystemImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    OperatingSystem_ptr _this()
    {   return OperatingSystem_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::OsOverhead_ptr m_overhead;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::TaskScheduler_ptr >> m_taskSchedulers;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::InterruptController_ptr >> m_interruptControllers;

    ::amalthea::OsDataConsistency_ptr m_osDataConsistency;

};

}
 // amalthea

#endif // AMALTHEA_OPERATINGSYSTEM_HPP

