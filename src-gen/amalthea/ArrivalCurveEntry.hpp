// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ArrivalCurveEntry.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ARRIVALCURVEENTRY_HPP
#define AMALTHEA_ARRIVALCURVEENTRY_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ArrivalCurveEntry_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ArrivalCurveEntry : public virtual ::amalthea::BaseObject
{
public:
    ArrivalCurveEntry();

    virtual ~ArrivalCurveEntry();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getNumberOfOccurrences () const;
    virtual void setNumberOfOccurrences (::ecore::EInt _numberOfOccurrences);

    // References
    virtual ::amalthea::Time_ptr getLowerTimeBorder () const;
    virtual void setLowerTimeBorder (::amalthea::Time_ptr _lowerTimeBorder);

    virtual ::amalthea::Time_ptr getUpperTimeBorder () const;
    virtual void setUpperTimeBorder (::amalthea::Time_ptr _upperTimeBorder);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::ARRIVALCURVEENTRY;

    /*PROTECTED REGION ID(ArrivalCurveEntry) START*/
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

    /*PROTECTED REGION ID(ArrivalCurveEntryImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ArrivalCurveEntry_ptr _this()
    {   return ArrivalCurveEntry_ptr(this);}

private:
    // Attributes

    ::ecore::EInt m_numberOfOccurrences;

    // References

    ::amalthea::Time_ptr m_lowerTimeBorder;

    ::amalthea::Time_ptr m_upperTimeBorder;

};

}
 // amalthea

#endif // AMALTHEA_ARRIVALCURVEENTRY_HPP

