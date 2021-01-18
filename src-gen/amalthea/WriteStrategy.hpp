// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/WriteStrategy.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_WRITESTRATEGY_HPP
#define AMALTHEA_WRITESTRATEGY_HPP

#include <string>

namespace amalthea
{

    enum class WriteStrategy
    {
        _undefined_ = 0 /* _undefined_*/
        , none = 0 /* none*/
        , writeback = 0 /* writeback*/
        , writethrough = 0 /* writethrough*/
    };
// WriteStrategy Values array.
    static const WriteStrategy WriteStrategy_Values[] =
    { WriteStrategy::_undefined_, WriteStrategy::none, WriteStrategy::writeback,
            WriteStrategy::writethrough };
    inline const std::string getLiteral(WriteStrategy e)
    {
        switch (e)
        {
        case WriteStrategy::_undefined_:
            return "_undefined_";
        case WriteStrategy::none:
            return "none";
        case WriteStrategy::writeback:
            return "writeback";
        case WriteStrategy::writethrough:
            return "writethrough";
        }
        return "";
    }
    ;
} // amalthea

#endif
