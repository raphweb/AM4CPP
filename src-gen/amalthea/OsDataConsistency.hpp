// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsDataConsistency.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_OSDATACONSISTENCY_HPP
#define AMALTHEA_OSDATACONSISTENCY_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>
#include <amalthea/OsDataConsistencyMode.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(OsDataConsistency_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL OsDataConsistency : public virtual ::amalthea::BaseObject
{
public:
    OsDataConsistency();

    virtual ~OsDataConsistency();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::OsDataConsistencyMode getMode () const;
    virtual void setMode (::amalthea::OsDataConsistencyMode _mode);

    // References
    virtual ::amalthea::DataStability_ptr getDataStability () const;
    virtual void setDataStability (::amalthea::DataStability_ptr _dataStability);

    virtual ::amalthea::NonAtomicDataCoherency_ptr getNonAtomicDataCoherency () const;
    virtual void setNonAtomicDataCoherency (::amalthea::NonAtomicDataCoherency_ptr _nonAtomicDataCoherency);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::OSDATACONSISTENCY;

    /*PROTECTED REGION ID(OsDataConsistency) START*/
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

    /*PROTECTED REGION ID(OsDataConsistencyImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    OsDataConsistency_ptr _this()
    {   return OsDataConsistency_ptr(this);}

private:
    // Attributes

    ::amalthea::OsDataConsistencyMode m_mode;

    // References

    ::amalthea::DataStability_ptr m_dataStability;

    ::amalthea::NonAtomicDataCoherency_ptr m_nonAtomicDataCoherency;

};

}
 // amalthea

#endif // AMALTHEA_OSDATACONSISTENCY_HPP

