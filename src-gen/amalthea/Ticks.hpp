// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Ticks.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TICKS_HPP
#define AMALTHEA_TICKS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/ComputationItem.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Ticks_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Ticks : public virtual ::amalthea::ComputationItem
{
public:
    Ticks();

    virtual ~Ticks();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::IDiscreteValueDeviation_ptr getDefault () const;
    virtual void setDefault (::amalthea::IDiscreteValueDeviation_ptr _default);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::TicksEntry_ptr >& getExtended () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::TicksEntry_ptr >& getExtended ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TICKS;

    /*PROTECTED REGION ID(Ticks) START*/
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

    /*PROTECTED REGION ID(TicksImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Ticks_ptr _this()
    {   return Ticks_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::IDiscreteValueDeviation_ptr m_default;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::TicksEntry_ptr >> m_extended;

};

}
 // amalthea

#endif // AMALTHEA_TICKS_HPP

