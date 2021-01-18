// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PartlyEarlyReleaseFairPD2.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PARTLYEARLYRELEASEFAIRPD2_HPP
#define AMALTHEA_PARTLYEARLYRELEASEFAIRPD2_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Pfair.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(PartlyEarlyReleaseFairPD2_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL PartlyEarlyReleaseFairPD2 : public virtual ::amalthea::Pfair
{
public:
    PartlyEarlyReleaseFairPD2();

    virtual ~PartlyEarlyReleaseFairPD2();

    virtual void _initialize();

    // Operations

    // Attributes

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PARTLYEARLYRELEASEFAIRPD2;

    /*PROTECTED REGION ID(PartlyEarlyReleaseFairPD2) START*/
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

    /*PROTECTED REGION ID(PartlyEarlyReleaseFairPD2Impl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PartlyEarlyReleaseFairPD2_ptr _this()
    {   return PartlyEarlyReleaseFairPD2_ptr(this);}

private:
    // Attributes

    // References

};

}
 // amalthea

#endif // AMALTHEA_PARTLYEARLYRELEASEFAIRPD2_HPP

