// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeConditionDisjunction.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MODECONDITIONDISJUNCTION_HPP
#define AMALTHEA_MODECONDITIONDISJUNCTION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ModeConditionDisjunction_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ModeConditionDisjunction : public virtual ::amalthea::BaseObject
{
public:
    ModeConditionDisjunction();

    virtual ~ModeConditionDisjunction();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EBoolean isSatisfiedBy ( std::vector< ::amalthea::ModeValueMapEntry_ptr > _context);

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::ModeConditionDisjunctionEntry_ptr >& getEntries () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ModeConditionDisjunctionEntry_ptr >& getEntries ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::MODECONDITIONDISJUNCTION;

    /*PROTECTED REGION ID(ModeConditionDisjunction) START*/
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

    /*PROTECTED REGION ID(ModeConditionDisjunctionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ModeConditionDisjunction_ptr _this()
    {   return ModeConditionDisjunction_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ModeConditionDisjunctionEntry_ptr >> m_entries;

};

}
 // amalthea

#endif // AMALTHEA_MODECONDITIONDISJUNCTION_HPP

