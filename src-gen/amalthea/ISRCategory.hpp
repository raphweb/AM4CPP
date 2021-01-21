// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ISRCategory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ISRCATEGORY_HPP
#define AMALTHEA_ISRCATEGORY_HPP

#include <string>

namespace amalthea
{

    enum class ISRCategory
    {
        _undefined_ = 0 /* _undefined_*/
        , CATEGORY_1 = 1 /* CATEGORY_1*/
        , CATEGORY_2 = 2 /* CATEGORY_2*/
    };
// ISRCategory Values array.
    static const ISRCategory ISRCategory_Values[] =
            { ISRCategory::_undefined_, ISRCategory::CATEGORY_1,
                    ISRCategory::CATEGORY_2 };
    inline const std::string getLiteral(ISRCategory e)
    {
        switch (e)
        {
        case ISRCategory::_undefined_:
            return "_undefined_";
        case ISRCategory::CATEGORY_1:
            return "CATEGORY_1";
        case ISRCategory::CATEGORY_2:
            return "CATEGORY_2";
        }
        return "";
    }
    ;
} // amalthea

#endif
