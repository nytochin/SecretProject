/*
 * $Id$
 *
 * Ipseity is a rich-client platform developed in C++ with the Qt
 * framework (http://qt-project.org).
 * More details on <http://www.ipseity-project.com>
 * Copyright (C) 2013 Ipseity Core Developers
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
 */


#include "ParameterSchedule.h"


const char*
ParameterSchedule::getName() const
{
	return "ParameterSchedule";
}


const char*
ParameterSchedule::getDescription() const
{
    return "";
}


const char*
ParameterSchedule::getAuthors() const
{
    return "Fabrice Lauri (fabrice.lauri@utbm.fr)";
}


void
ParameterSchedule::attachToWidget( QWidget* )
{
	m_AsymptoticSpeed = 0.05;

	cout << "ParameterSchedulingAsymptoticSpeed= " << m_AsymptoticSpeed << endl;
}


Ipseity::Scalar
ParameterSchedule::getValue( uint32 nbr_visits, Ipseity::Scalar td ) const
{
	return exp( ((Ipseity::Scalar) nbr_visits)*m_AsymptoticSpeed );
}
