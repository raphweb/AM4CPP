// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SamplingType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SAMPLINGTYPE_HPP
#define AMALTHEA_SAMPLINGTYPE_HPP

#include <string>

namespace amalthea
{

    enum class SamplingType
    {
default = 0 /* default*/
, BestCase = 0 /* BestCase*/
, WorstCase = 0 /* WorstCase*/
, AverageCase = 0 /* AverageCase*/
, CornerCase = 0 /* CornerCase*/
, Uniform = 0 /* Uniform*/
};
// SamplingType Values array.
static const SamplingType SamplingType_Values[] =
{
SamplingType::default , SamplingType::BestCase , SamplingType::WorstCase , SamplingType::AverageCase , SamplingType::CornerCase , SamplingType::Uniform}
;
inline const std::string getLiteral(SamplingType e)
{
switch (e)
{
case SamplingType::default: return "default";
case SamplingType::BestCase:
return "BestCase";
case SamplingType::WorstCase:
return "WorstCase";
case SamplingType::AverageCase:
return "AverageCase";
case SamplingType::CornerCase:
return "CornerCase";
case SamplingType::Uniform:
return "Uniform";
}
return "";
}
;
} // amalthea

#endif
