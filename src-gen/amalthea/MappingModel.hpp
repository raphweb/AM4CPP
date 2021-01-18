// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MappingModel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MAPPINGMODEL_HPP
#define AMALTHEA_MAPPINGMODEL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>
#include <amalthea/MemoryAddressMappingType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(MappingModel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL MappingModel : public virtual ::amalthea::BaseObject
{
public:
    MappingModel();

    virtual ~MappingModel();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::MemoryAddressMappingType getAddressMappingType () const;
    virtual void setAddressMappingType (::amalthea::MemoryAddressMappingType _addressMappingType);

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::SchedulerAllocation_ptr >& getSchedulerAllocation () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::SchedulerAllocation_ptr >& getSchedulerAllocation ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::RunnableAllocation_ptr >& getRunnableAllocation () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::RunnableAllocation_ptr >& getRunnableAllocation ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::TaskAllocation_ptr >& getTaskAllocation () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::TaskAllocation_ptr >& getTaskAllocation ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::ISRAllocation_ptr >& getIsrAllocation () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ISRAllocation_ptr >& getIsrAllocation ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::MemoryMapping_ptr >& getMemoryMapping () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::MemoryMapping_ptr >& getMemoryMapping ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::PhysicalSectionMapping_ptr >& getPhysicalSectionMapping () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::PhysicalSectionMapping_ptr >& getPhysicalSectionMapping ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::MAPPINGMODEL;

    /*PROTECTED REGION ID(MappingModel) START*/
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

    /*PROTECTED REGION ID(MappingModelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    MappingModel_ptr _this()
    {   return MappingModel_ptr(this);}

private:
    // Attributes

    ::amalthea::MemoryAddressMappingType m_addressMappingType;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::SchedulerAllocation_ptr >> m_schedulerAllocation;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::RunnableAllocation_ptr >> m_runnableAllocation;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::TaskAllocation_ptr >> m_taskAllocation;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ISRAllocation_ptr >> m_isrAllocation;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::MemoryMapping_ptr >> m_memoryMapping;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::PhysicalSectionMapping_ptr >> m_physicalSectionMapping;

};

}
 // amalthea

#endif // AMALTHEA_MAPPINGMODEL_HPP

