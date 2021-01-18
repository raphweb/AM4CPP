// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Label.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_LABEL_HPP
#define AMALTHEA_LABEL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/IDisplayName.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/LabelDataStability.hpp>
#include <amalthea/DataStabilityLevel.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Label_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Label : public virtual ::amalthea::AbstractMemoryElement, public virtual ::amalthea::IDisplayName, public virtual ::amalthea::INamespaceMember
{
public:
    Label();

    virtual ~Label();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isConstant () const;
    virtual void setConstant (::ecore::EBoolean _constant);

    virtual ::ecore::EBoolean isBVolatile () const;
    virtual void setBVolatile (::ecore::EBoolean _bVolatile);

    virtual ::amalthea::LabelDataStability getDataStability () const;
    virtual void setDataStability (::amalthea::LabelDataStability _dataStability);

    virtual ::amalthea::DataStabilityLevel getStabilityLevel () const;
    virtual void setStabilityLevel (::amalthea::DataStabilityLevel _stabilityLevel);

    // References
    virtual ::amalthea::DataType_ptr getDataType () const;
    virtual void setDataType (::amalthea::DataType_ptr _dataType);

    virtual ::amalthea::Section_ptr getSection () const;
    virtual void setSection (::amalthea::Section_ptr _section);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::LabelAccess_ptr >& getLabelAccesses () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::LabelAccess_ptr >& getLabelAccesses ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& getReferringComponents () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& getReferringComponents ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::LABEL;

    /*PROTECTED REGION ID(Label) START*/
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

    /*PROTECTED REGION ID(LabelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Label_ptr _this()
    {   return Label_ptr(this);}

private:
    // Attributes

    ::ecore::EBoolean m_constant;

    ::ecore::EBoolean m_bVolatile;

    ::amalthea::LabelDataStability m_dataStability;

    ::amalthea::DataStabilityLevel m_stabilityLevel;

    // References

    ::amalthea::DataType_ptr m_dataType;

    ::amalthea::Section_ptr m_section;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::LabelAccess_ptr >> m_labelAccesses;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Component_ptr >> m_referringComponents;

};

}
 // amalthea

#endif // AMALTHEA_LABEL_HPP

