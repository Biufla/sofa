/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2015 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This library is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This library is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this library; if not, write to the Free Software Foundation,     *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.          *
*******************************************************************************
*                               SOFA :: Modules                               *
*                                                                             *
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/



// File automatically generated by "generateTypedef"


#ifndef SOFA_TYPEDEF_MechanicalMapping_double_H
#define SOFA_TYPEDEF_MechanicalMapping_double_H

//Default files containing the declaration of the vector type
#include <sofa/defaulttype/VecTypes.h>
#include <sofa/defaulttype/RigidTypes.h>
#include <sofa/defaulttype/Mat.h>

//Default files needed to create a Mechanical Mapping
#include <sofa/core/behavior/MechanicalState.h>
#include <sofa/core/behavior/MechanicalMapping.h>


#include <SofaRigid/ArticulatedSystemMapping.h>
#include <SofaBaseMechanics/BarycentricMapping.h>
#include <SofaMiscMapping/BeamLinearMapping.h>
#include <SofaMiscMapping/CenterOfMassMapping.h>
#include <SofaMiscMapping/CenterPointMechanicalMapping.h>
#include <SofaMiscMapping/CurveMapping.h>
#include <SofaMiscMapping/ExternalInterpolationMapping.h>
#include <SofaBaseMechanics/IdentityMapping.h>
#include <SofaRigid/LineSetSkinningMapping.h>
#include <SofaTopologyMapping/Mesh2PointMechanicalMapping.h>
#include <SofaRigid/RigidMapping.h>
#include <SofaRigid/RigidRigidMapping.h>
#include <SofaTopologyMapping/SimpleTesselatedTetraMechanicalMapping.h>
#include <SofaRigid/SkinningMapping.h>
#include <SofaBaseMechanics/SubsetMapping.h>
#include <SofaMiscMapping/TubularMapping.h>



//---------------------------------------------------------------------------------------------
//Typedef for ArticulatedSystemMapping
typedef sofa::component::mapping::ArticulatedSystemMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> > > > ArticulatedSystemMechanicalMapping1d_to_Rigid3d;



//---------------------------------------------------------------------------------------------
//Typedef for BarycentricMapping
typedef sofa::component::mapping::BarycentricMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> > > > BarycentricMechanicalMapping3d_to_Rigid3d;
typedef sofa::component::mapping::BarycentricMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > BarycentricMechanicalMapping3d_to_3d;



//---------------------------------------------------------------------------------------------
//Typedef for BeamLinearMapping
typedef sofa::component::mapping::BeamLinearMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > BeamLinearMechanicalMappingRigid3d_to_3d;



//---------------------------------------------------------------------------------------------
//Typedef for CenterOfMassMapping
typedef sofa::component::mapping::CenterOfMassMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > CenterOfMassMechanicalMappingRigid3d_to_3d;
typedef sofa::component::mapping::CenterOfMassMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<2, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > > > CenterOfMassMechanicalMappingRigid2d_to_2d;



//---------------------------------------------------------------------------------------------
//Typedef for CenterPointMechanicalMapping
typedef sofa::component::mapping::CenterPointMechanicalMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > CenterPointMechanicalMechanicalMapping3d_to_3d;



//---------------------------------------------------------------------------------------------
//Typedef for CurveMapping
typedef sofa::component::mapping::CurveMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> > > > CurveMechanicalMapping3d_to_Rigid3d;



//---------------------------------------------------------------------------------------------
//Typedef for ExternalInterpolationMapping
typedef sofa::component::mapping::ExternalInterpolationMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > ExternalInterpolationMechanicalMapping3d_to_3d;
typedef sofa::component::mapping::ExternalInterpolationMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > > > ExternalInterpolationMechanicalMapping2d_to_2d;
typedef sofa::component::mapping::ExternalInterpolationMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > > > ExternalInterpolationMechanicalMapping1d_to_1d;



//---------------------------------------------------------------------------------------------
//Typedef for IdentityMapping
typedef sofa::component::mapping::IdentityMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > IdentityMechanicalMapping3d_to_3d;
typedef sofa::component::mapping::IdentityMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > > > IdentityMechanicalMapping2d_to_2d;
typedef sofa::component::mapping::IdentityMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > > > IdentityMechanicalMapping1d_to_1d;
typedef sofa::component::mapping::IdentityMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > > > IdentityMechanicalMapping6d_to_6d;
typedef sofa::component::mapping::IdentityMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> > > > IdentityMechanicalMappingRigid3d_to_Rigid3d;
typedef sofa::component::mapping::IdentityMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<2, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<2, double> > > > IdentityMechanicalMappingRigid2d_to_Rigid2d;
typedef sofa::component::mapping::IdentityMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > IdentityMechanicalMappingRigid3d_to_3d;
typedef sofa::component::mapping::IdentityMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<2, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > > > IdentityMechanicalMappingRigid2d_to_2d;



//---------------------------------------------------------------------------------------------
//Typedef for LineSetSkinningMapping
typedef sofa::component::mapping::LineSetSkinningMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > LineSetSkinningMechanicalMappingRigid3d_to_3d;



//---------------------------------------------------------------------------------------------
//Typedef for Mesh2PointMechanicalMapping
typedef sofa::component::mapping::Mesh2PointMechanicalMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > Mesh2PointMechanicalMechanicalMapping3d_to_3d;



//---------------------------------------------------------------------------------------------
//Typedef for RigidMapping
typedef sofa::component::mapping::RigidMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > RigidMechanicalMappingRigid3d_to_3d;
typedef sofa::component::mapping::RigidMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<2, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > > > RigidMechanicalMappingRigid2d_to_2d;



//---------------------------------------------------------------------------------------------
//Typedef for RigidRigidMapping
typedef sofa::component::mapping::RigidRigidMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> > > > RigidRigidMechanicalMappingRigid3d_to_Rigid3d;



//---------------------------------------------------------------------------------------------
//Typedef for SimpleTesselatedTetraMechanicalMapping
typedef sofa::component::mapping::SimpleTesselatedTetraMechanicalMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > SimpleTesselatedTetraMechanicalMechanicalMapping3d_to_3d;



//---------------------------------------------------------------------------------------------
//Typedef for SkinningMapping
typedef sofa::component::mapping::SkinningMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > SkinningMechanicalMappingRigid3d_to_3d;



//---------------------------------------------------------------------------------------------
//Typedef for SubsetMapping
typedef sofa::component::mapping::SubsetMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > SubsetMechanicalMapping3d_to_3d;
typedef sofa::component::mapping::SubsetMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > > > SubsetMechanicalMapping1d_to_1d;
typedef sofa::component::mapping::SubsetMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> > > > SubsetMechanicalMappingRigid3d_to_Rigid3d;



//---------------------------------------------------------------------------------------------
//Typedef for TubularMapping
typedef sofa::component::mapping::TubularMapping<sofa::core::behavior::MechanicalMapping<sofa::core::behavior::MechanicalState<sofa::defaulttype::StdRigidTypes<3, double> >, sofa::core::behavior::MechanicalState<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > > > TubularMechanicalMappingRigid3d_to_3d;





#ifndef SOFA_FLOAT
typedef ArticulatedSystemMechanicalMapping1d_to_Rigid3d ArticulatedSystemMechanicalMapping1_to_Rigid3;
typedef BarycentricMechanicalMapping3d_to_Rigid3d BarycentricMechanicalMapping3_to_Rigid3;
typedef BarycentricMechanicalMapping3d_to_3d BarycentricMechanicalMapping3_to_3;
typedef BeamLinearMechanicalMappingRigid3d_to_3d BeamLinearMechanicalMappingRigid3_to_3;
typedef CenterOfMassMechanicalMappingRigid3d_to_3d CenterOfMassMechanicalMappingRigid3_to_3;
typedef CenterOfMassMechanicalMappingRigid2d_to_2d CenterOfMassMechanicalMappingRigid2_to_2;
typedef CenterPointMechanicalMechanicalMapping3d_to_3d CenterPointMechanicalMechanicalMapping3_to_3;
typedef CurveMechanicalMapping3d_to_Rigid3d CurveMechanicalMapping3_to_Rigid3;
typedef ExternalInterpolationMechanicalMapping3d_to_3d ExternalInterpolationMechanicalMapping3_to_3;
typedef ExternalInterpolationMechanicalMapping2d_to_2d ExternalInterpolationMechanicalMapping2_to_2;
typedef ExternalInterpolationMechanicalMapping1d_to_1d ExternalInterpolationMechanicalMapping1_to_1;
typedef IdentityMechanicalMapping3d_to_3d IdentityMechanicalMapping3_to_3;
typedef IdentityMechanicalMapping2d_to_2d IdentityMechanicalMapping2_to_2;
typedef IdentityMechanicalMapping1d_to_1d IdentityMechanicalMapping1_to_1;
typedef IdentityMechanicalMapping6d_to_6d IdentityMechanicalMapping6_to_6;
typedef IdentityMechanicalMappingRigid3d_to_Rigid3d IdentityMechanicalMappingRigid3_to_Rigid3;
typedef IdentityMechanicalMappingRigid2d_to_Rigid2d IdentityMechanicalMappingRigid2_to_Rigid2;
typedef IdentityMechanicalMappingRigid3d_to_3d IdentityMechanicalMappingRigid3_to_3;
typedef IdentityMechanicalMappingRigid2d_to_2d IdentityMechanicalMappingRigid2_to_2;
typedef LineSetSkinningMechanicalMappingRigid3d_to_3d LineSetSkinningMechanicalMappingRigid3_to_3;
typedef Mesh2PointMechanicalMechanicalMapping3d_to_3d Mesh2PointMechanicalMechanicalMapping3_to_3;
typedef RigidMechanicalMappingRigid3d_to_3d RigidMechanicalMappingRigid3_to_3;
typedef RigidMechanicalMappingRigid2d_to_2d RigidMechanicalMappingRigid2_to_2;
typedef RigidRigidMechanicalMappingRigid3d_to_Rigid3d RigidRigidMechanicalMappingRigid3_to_Rigid3;
typedef SimpleTesselatedTetraMechanicalMechanicalMapping3d_to_3d SimpleTesselatedTetraMechanicalMechanicalMapping3_to_3;
typedef SkinningMechanicalMappingRigid3d_to_3d SkinningMechanicalMappingRigid3_to_3;
typedef SubsetMechanicalMapping3d_to_3d SubsetMechanicalMapping3_to_3;
typedef SubsetMechanicalMapping1d_to_1d SubsetMechanicalMapping1_to_1;
typedef SubsetMechanicalMappingRigid3d_to_Rigid3d SubsetMechanicalMappingRigid3_to_Rigid3;
typedef TubularMechanicalMappingRigid3d_to_3d TubularMechanicalMappingRigid3_to_3;
#endif

#endif
