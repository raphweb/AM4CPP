// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OSModel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_OSMODEL_HPP
#define AMALTHEA_OSMODEL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(OSModel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL OSModel : public virtual ::amalthea::BaseObject
{
public:
    OSModel();

    virtual ~OSModel();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::Semaphore_ptr >& getSemaphores () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Semaphore_ptr >& getSemaphores ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::OperatingSystem_ptr >& getOperatingSystems () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::OperatingSystem_ptr >& getOperatingSystems ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::OsOverhead_ptr >& getOsOverheads () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::OsOverhead_ptr >& getOsOverheads ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::OSMODEL;

    /*PROTECTED REGION ID(OSModel) START*/
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

    /*PROTECTED REGION ID(OSModelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    OSModel_ptr _this()
    {   return OSModel_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Semaphore_ptr >> m_semaphores;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::OperatingSystem_ptr >> m_operatingSystems;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::OsOverhead_ptr >> m_osOverheads;

};

}
 // amalthea

#endif // AMALTHEA_OSMODEL_HPP

