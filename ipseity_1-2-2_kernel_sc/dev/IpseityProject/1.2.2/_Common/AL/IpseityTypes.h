/*
 * $Id$
 *
 * Ipseity is an open-source platform dedicated to the development and
 * validation of Artificial Intelligence techniques in Multiagent Systems.
 * It is developed in C++ with the Qt framework (http://qt-project.org).
 * More details on <http://www.ipseity-project.com>
 * Copyright (C) 2015, 2014, 2013 Ipseity Core Developers
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


#ifndef IpseityTypes_h
#define IpseityTypes_h


#include "Types.h"
#include "Math/Vector.h"


namespace Ipseity
{
    typedef float64 Scalar;

    //! ScalarDomain is a closed set (like [a;b] or {a_1, a_2, ..., a_n} with a_{i+1}-a_i = s, for all i, with s > 0)
    typedef ScalarDomain<Scalar> ScalarDomain;

    typedef Vector<Scalar> Vector;

    typedef VectorDomain<Scalar> VectorDomain;
}


typedef std::list<uint32> AgentSet;

typedef Ipseity::Vector SensorySignal;
typedef Ipseity::Vector ResponseSignal;

typedef Ipseity::Vector PerformanceMeasure;

typedef Ipseity::VectorDomain SensorySignalProperties;
typedef Ipseity::VectorDomain ResponseSignalProperties;
typedef Ipseity::VectorDomain AgentDataProperties;


#endif