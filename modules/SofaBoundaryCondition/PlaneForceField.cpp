/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2018 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#define SOFA_COMPONENT_INTERACTIONFORCEFIELD_PLANEFORCEFIELD_CPP

#include <SofaBoundaryCondition/PlaneForceField.inl>
#include <sofa/defaulttype/VecTypes.h>
#include <sofa/core/ObjectFactory.h>
#include <limits>

namespace sofa
{

namespace component
{

namespace forcefield
{

using namespace sofa::defaulttype;

int PlaneForceFieldClass = core::RegisterObject("Repulsion applied by a plane toward the exterior (half-space)")
.add< PlaneForceField<Vec3Types> >()
.add< PlaneForceField<Vec2Types> >()
.add< PlaneForceField<Vec1Types> >()
.add< PlaneForceField<Vec6Types> >()
.add< PlaneForceField<Rigid3Types> >()

;
template class SOFA_BOUNDARY_CONDITION_API PlaneForceField<Vec3Types>;
template class SOFA_BOUNDARY_CONDITION_API PlaneForceField<Vec2Types>;
template class SOFA_BOUNDARY_CONDITION_API PlaneForceField<Vec1Types>;
template class SOFA_BOUNDARY_CONDITION_API PlaneForceField<Vec6Types>;
template class SOFA_BOUNDARY_CONDITION_API PlaneForceField<Rigid3Types>;


} // namespace forcefield

} // namespace component

} // namespace sofa
