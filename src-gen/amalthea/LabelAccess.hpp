// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LabelAccess.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_LABELACCESS_HPP
#define AMALTHEA_LABELACCESS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/ComputationItem.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/IDependsOn.hpp>
#include <amalthea/LabelAccessEnum.hpp>
#include <amalthea/LabelAccessDataStability.hpp>
#include <amalthea/LabelAccessImplementation.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(LabelAccess_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL LabelAccess : public virtual ::amalthea::ComputationItem, public virtual ::amalthea::ITaggable, public virtual ::amalthea::IDependsOn
{
public:
    LabelAccess();

    virtual ~LabelAccess();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::LabelAccessEnum getAccess () const;
    virtual void setAccess (::amalthea::LabelAccessEnum _access);

    virtual ::amalthea::LabelAccessDataStability getDataStability () const;
    virtual void setDataStability (::amalthea::LabelAccessDataStability _dataStability);

    virtual ::amalthea::LabelAccessImplementation getImplementation () const;
    virtual void setImplementation (::amalthea::LabelAccessImplementation _implementation);

    // References
    virtual ::amalthea::Label_ptr getData () const;
    virtual void setData (::amalthea::Label_ptr _data);

    virtual ::amalthea::LabelAccessStatistic_ptr getStatistic () const;
    virtual void setStatistic (::amalthea::LabelAccessStatistic_ptr _statistic);

    virtual ::amalthea::TransmissionPolicy_ptr getTransmissionPolicy () const;
    virtual void setTransmissionPolicy (::amalthea::TransmissionPolicy_ptr _transmissionPolicy);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::LABELACCESS;

    /*PROTECTED REGION ID(LabelAccess) START*/
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

    /*PROTECTED REGION ID(LabelAccessImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    LabelAccess_ptr _this()
    {   return LabelAccess_ptr(this);}

private:
    // Attributes

    ::amalthea::LabelAccessEnum m_access;

    ::amalthea::LabelAccessDataStability m_dataStability;

    ::amalthea::LabelAccessImplementation m_implementation;

    // References

    ::amalthea::Label_ptr m_data;

    ::amalthea::LabelAccessStatistic_ptr m_statistic;

    ::amalthea::TransmissionPolicy_ptr m_transmissionPolicy;

};

}
 // amalthea

#endif // AMALTHEA_LABELACCESS_HPP

