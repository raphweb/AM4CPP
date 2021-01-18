// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueInterval.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DISCRETEVALUEINTERVAL_HPP
#define AMALTHEA_DISCRETEVALUEINTERVAL_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(DiscreteValueInterval_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL DiscreteValueInterval : public virtual ::ecore::EObject
{
public:
    DiscreteValueInterval();

    virtual ~DiscreteValueInterval();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EDoubleObject getAverage ();

    virtual ::ecore::EBoolean validateInvariants ( ::ecore::EDiagnosticChain _diagnostics, std::map< ::ecore::EJavaObject, ::ecore::EJavaObject> const& _context);

    // Attributes
    virtual ::ecore::ELongObject getLowerBound () const;
    virtual void setLowerBound (::ecore::ELongObject _lowerBound);

    virtual ::ecore::ELongObject getUpperBound () const;
    virtual void setUpperBound (::ecore::ELongObject _upperBound);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::DISCRETEVALUEINTERVAL;

    /*PROTECTED REGION ID(DiscreteValueInterval) START*/
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

    /*PROTECTED REGION ID(DiscreteValueIntervalImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DiscreteValueInterval_ptr _this()
    {   return DiscreteValueInterval_ptr(this);}

private:
    // Attributes

    ::ecore::ELongObject m_lowerBound;

    ::ecore::ELongObject m_upperBound;

    // References

};

}
 // amalthea

#endif // AMALTHEA_DISCRETEVALUEINTERVAL_HPP

