// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataCoherencyGroup.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DATACOHERENCYGROUP_HPP
#define AMALTHEA_DATACOHERENCYGROUP_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CoherencyDirection.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(DataCoherencyGroup_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL DataCoherencyGroup : public virtual ::amalthea::ReferableBaseObject
{
public:
    DataCoherencyGroup();

    virtual ~DataCoherencyGroup();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::CoherencyDirection getDirection () const;
    virtual void setDirection (::amalthea::CoherencyDirection _direction);

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& getLabels () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& getLabels ();

    virtual ::amalthea::DataGroupScope_ptr getScope () const;
    virtual void setScope (::amalthea::DataGroupScope_ptr _scope);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::DATACOHERENCYGROUP;

    /*PROTECTED REGION ID(DataCoherencyGroup) START*/
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

    /*PROTECTED REGION ID(DataCoherencyGroupImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DataCoherencyGroup_ptr _this()
    {   return DataCoherencyGroup_ptr(this);}

private:
    // Attributes

    ::amalthea::CoherencyDirection m_direction;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Label_ptr >> m_labels;

    ::amalthea::DataGroupScope_ptr m_scope;

};

}
 // amalthea

#endif // AMALTHEA_DATACOHERENCYGROUP_HPP

