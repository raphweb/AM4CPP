// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Process.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PROCESS_HPP
#define AMALTHEA_PROCESS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/AbstractProcess.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Process_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Process : public virtual ::amalthea::AbstractProcess
{
public:
    Process();

    virtual ~Process();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::ActivityGraph_ptr getActivityGraph () const;
    virtual void setActivityGraph (::amalthea::ActivityGraph_ptr _activityGraph);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Stimulus_ptr >& getStimuli () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Stimulus_ptr >& getStimuli ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PROCESS;

    /*PROTECTED REGION ID(Process) START*/
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

    /*PROTECTED REGION ID(ProcessImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Process_ptr _this()
    {   return Process_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::ActivityGraph_ptr m_activityGraph;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Stimulus_ptr >> m_stimuli;

};

}
 // amalthea

#endif // AMALTHEA_PROCESS_HPP

