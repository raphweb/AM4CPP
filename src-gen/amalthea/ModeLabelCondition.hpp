// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeLabelCondition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MODELABELCONDITION_HPP
#define AMALTHEA_MODELABELCONDITION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/ModeCondition.hpp>
#include <amalthea/RelationalOperator.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ModeLabelCondition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ModeLabelCondition : public virtual ::amalthea::ModeCondition
{
public:
    ModeLabelCondition();

    virtual ~ModeLabelCondition();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EBoolean isSatisfiedBy ( std::vector< ::amalthea::ModeValueMapEntry_ptr > _context);

    // Attributes

    // References
    virtual ::amalthea::ModeLabel_ptr getLabel1 () const;
    virtual void setLabel1 (::amalthea::ModeLabel_ptr _label1);

    virtual ::amalthea::ModeLabel_ptr getLabel2 () const;
    virtual void setLabel2 (::amalthea::ModeLabel_ptr _label2);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::MODELABELCONDITION;

    /*PROTECTED REGION ID(ModeLabelCondition) START*/
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

    /*PROTECTED REGION ID(ModeLabelConditionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ModeLabelCondition_ptr _this()
    {   return ModeLabelCondition_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::ModeLabel_ptr m_label1;

    ::amalthea::ModeLabel_ptr m_label2;

};

}
 // amalthea

#endif // AMALTHEA_MODELABELCONDITION_HPP

