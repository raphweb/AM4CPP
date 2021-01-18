// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataStability.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DATASTABILITY_HPP
#define AMALTHEA_DATASTABILITY_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/AccessMultiplicity.hpp>
#include <amalthea/DataStabilityLevel.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(DataStability_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL DataStability : public virtual ::ecore::EObject
{
public:
    DataStability();

    virtual ~DataStability();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isEnabled () const;
    virtual void setEnabled (::ecore::EBoolean _enabled);

    virtual ::ecore::EString const& getAlgorithm () const;
    virtual void setAlgorithm (::ecore::EString const& _algorithm);

    virtual ::amalthea::AccessMultiplicity getAccessMultiplicity () const;
    virtual void setAccessMultiplicity (::amalthea::AccessMultiplicity _accessMultiplicity);

    virtual ::amalthea::DataStabilityLevel getLevel () const;
    virtual void setLevel (::amalthea::DataStabilityLevel _level);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::DATASTABILITY;

    /*PROTECTED REGION ID(DataStability) START*/
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

    /*PROTECTED REGION ID(DataStabilityImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DataStability_ptr _this()
    {   return DataStability_ptr(this);}

private:
    // Attributes

    ::ecore::EBoolean m_enabled;

    ::ecore::EString m_algorithm;

    ::amalthea::AccessMultiplicity m_accessMultiplicity;

    ::amalthea::DataStabilityLevel m_level;

    // References

};

}
 // amalthea

#endif // AMALTHEA_DATASTABILITY_HPP

