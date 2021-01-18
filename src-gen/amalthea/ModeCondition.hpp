// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeCondition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MODECONDITION_HPP
#define AMALTHEA_MODECONDITION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/ModeConditionDisjunctionEntry.hpp>
#include <amalthea/RelationalOperator.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ModeCondition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ModeCondition : public virtual ::amalthea::ModeConditionDisjunctionEntry
{
public:
    ModeCondition();

    virtual ~ModeCondition();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EBoolean isSatisfiedBy ( std::vector< ::amalthea::ModeValueMapEntry_ptr > _context);

    // Attributes
    virtual ::amalthea::RelationalOperator getRelation () const;
    virtual void setRelation (::amalthea::RelationalOperator _relation);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::MODECONDITION;

    /*PROTECTED REGION ID(ModeCondition) START*/
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

    /*PROTECTED REGION ID(ModeConditionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ModeCondition_ptr _this()
    {   return ModeCondition_ptr(this);}

private:
    // Attributes

    ::amalthea::RelationalOperator m_relation;

    // References

};

}
 // amalthea

#endif // AMALTHEA_MODECONDITION_HPP

