// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunEntityCallStatistic.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_RUNENTITYCALLSTATISTIC_HPP
#define AMALTHEA_RUNENTITYCALLSTATISTIC_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(RunEntityCallStatistic_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL RunEntityCallStatistic : public virtual ::amalthea::BaseObject
{
public:
    RunEntityCallStatistic();

    virtual ~RunEntityCallStatistic();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::NumericStatistic_ptr getStatistic () const;
    virtual void setStatistic (::amalthea::NumericStatistic_ptr _statistic);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::RUNENTITYCALLSTATISTIC;

    /*PROTECTED REGION ID(RunEntityCallStatistic) START*/
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

    /*PROTECTED REGION ID(RunEntityCallStatisticImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    RunEntityCallStatistic_ptr _this()
    {   return RunEntityCallStatistic_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::NumericStatistic_ptr m_statistic;

};

}
 // amalthea

#endif // AMALTHEA_RUNENTITYCALLSTATISTIC_HPP

