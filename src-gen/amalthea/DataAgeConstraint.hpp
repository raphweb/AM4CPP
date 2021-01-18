// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataAgeConstraint.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DATAAGECONSTRAINT_HPP
#define AMALTHEA_DATAAGECONSTRAINT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(DataAgeConstraint_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL DataAgeConstraint : public virtual ::amalthea::ReferableBaseObject
{
public:
    DataAgeConstraint();

    virtual ~DataAgeConstraint();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Runnable_ptr getRunnable () const;
    virtual void setRunnable (::amalthea::Runnable_ptr _runnable);

    virtual ::amalthea::Label_ptr getLabel () const;
    virtual void setLabel (::amalthea::Label_ptr _label);

    virtual ::amalthea::DataAge_ptr getDataAge () const;
    virtual void setDataAge (::amalthea::DataAge_ptr _dataAge);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::DATAAGECONSTRAINT;

    /*PROTECTED REGION ID(DataAgeConstraint) START*/
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

    /*PROTECTED REGION ID(DataAgeConstraintImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DataAgeConstraint_ptr _this()
    {   return DataAgeConstraint_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Runnable_ptr m_runnable;

    ::amalthea::Label_ptr m_label;

    ::amalthea::DataAge_ptr m_dataAge;

};

}
 // amalthea

#endif // AMALTHEA_DATAAGECONSTRAINT_HPP

