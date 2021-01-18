// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableSequencingConstraint.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_RUNNABLESEQUENCINGCONSTRAINT_HPP
#define AMALTHEA_RUNNABLESEQUENCINGCONSTRAINT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/RunnableOrderType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(RunnableSequencingConstraint_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL RunnableSequencingConstraint : public virtual ::amalthea::ReferableBaseObject
{
public:
    RunnableSequencingConstraint();

    virtual ~RunnableSequencingConstraint();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::RunnableOrderType getOrderType () const;
    virtual void setOrderType (::amalthea::RunnableOrderType _orderType);

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::RunnableEntityGroup_ptr >& getRunnableGroups () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::RunnableEntityGroup_ptr >& getRunnableGroups ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::AbstractProcess_ptr >& getProcessScope () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::AbstractProcess_ptr >& getProcessScope ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT;

    /*PROTECTED REGION ID(RunnableSequencingConstraint) START*/
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

    /*PROTECTED REGION ID(RunnableSequencingConstraintImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    RunnableSequencingConstraint_ptr _this()
    {   return RunnableSequencingConstraint_ptr(this);}

private:
    // Attributes

    ::amalthea::RunnableOrderType m_orderType;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::RunnableEntityGroup_ptr >> m_runnableGroups;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::AbstractProcess_ptr >> m_processScope;

};

}
 // amalthea

#endif // AMALTHEA_RUNNABLESEQUENCINGCONSTRAINT_HPP

