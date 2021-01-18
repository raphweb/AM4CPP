// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/InterProcessStimulus.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_INTERPROCESSSTIMULUS_HPP
#define AMALTHEA_INTERPROCESSSTIMULUS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Stimulus.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(InterProcessStimulus_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL InterProcessStimulus : public virtual ::amalthea::Stimulus
{
public:
    InterProcessStimulus();

    virtual ~InterProcessStimulus();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Counter_ptr getCounter () const;
    virtual void setCounter (::amalthea::Counter_ptr _counter);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::InterProcessTrigger_ptr >& getExplicitTriggers () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::InterProcessTrigger_ptr >& getExplicitTriggers ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::INTERPROCESSSTIMULUS;

    /*PROTECTED REGION ID(InterProcessStimulus) START*/
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

    /*PROTECTED REGION ID(InterProcessStimulusImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    InterProcessStimulus_ptr _this()
    {   return InterProcessStimulus_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Counter_ptr m_counter;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::InterProcessTrigger_ptr >> m_explicitTriggers;

};

}
 // amalthea

#endif // AMALTHEA_INTERPROCESSSTIMULUS_HPP

