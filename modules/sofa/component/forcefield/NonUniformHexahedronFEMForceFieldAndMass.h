/*******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, version 1.0 beta 1       *
*                (c) 2006-2007 MGH, INRIA, USTL, UJF, CNRS                     *
*                                                                              *
* This library is free software; you can redistribute it and/or modify it      *
* under the terms of the GNU Lesser General Public License as published by the *
* Free Software Foundation; either version 2.1 of the License, or (at your     *
* option) any later version.                                                   *
*                                                                              *
* This library is distributed in the hope that it will be useful, but WITHOUT  *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or        *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License  *
* for more details.                                                            *
*                                                                              *
* You should have received a copy of the GNU Lesser General Public License     *
* along with this library; if not, write to the Free Software Foundation,      *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.           *
*                                                                              *
* Contact information: contact@sofa-framework.org                              *
*                                                                              *
* Authors: J. Allard, P-J. Bensoussan, S. Cotin, C. Duriez, H. Delingette,     *
* F. Faure, S. Fonteneau, L. Heigeas, C. Mendoza, M. Nesme, P. Neumann,        *
* and F. Poyer                                                                 *
*******************************************************************************/
#ifndef SOFA_COMPONENT_FORCEFIELD_NONUNIFORMHEXAHEDRONFEMFORCEFIELD_H
#define SOFA_COMPONENT_FORCEFIELD_NONUNIFORMHEXAHEDRONFEMFORCEFIELD_H


#include <sofa/component/forcefield/HexahedronFEMForceFieldAndMass.h>

namespace sofa
{

namespace component
{

namespace forcefield
{

using namespace sofa::defaulttype;
using sofa::helper::vector;

/** Need a SparseGridTopology with _sparseGrid->_nbVirtualFinerLevels >= this->_nbVirtualFinerLevels

@InProceedings{NPF06,
author       = "Nesme, Matthieu and Payan, Yohan and Faure, Fran\c{c}ois",
title        = "Animating Shapes at Arbitrary Resolution with Non-Uniform Stiffness",
booktitle    = "Eurographics Workshop in Virtual Reality Interaction and Physical Simulation (VRIPHYS)",
month        = "nov",
year         = "2006",
organization = "Eurographics",
address      = "Madrid",
url          = "http://www-evasion.imag.fr/Publications/2006/NPF06"
}


    */


template<class DataTypes>
class NonUniformHexahedronFEMForceFieldAndMass : virtual public HexahedronFEMForceFieldAndMass<DataTypes>
{
public:
    typedef typename DataTypes::VecCoord VecCoord;
    typedef VecCoord Vector;
    typedef typename DataTypes::Coord Coord;
    typedef typename Coord::value_type Real;

    typedef topology::MeshTopology::SeqCubes VecElement;


    typedef HexahedronFEMForceFieldAndMass<DataTypes> HexahedronFEMForceFieldAndMass;

    typedef typename HexahedronFEMForceFieldAndMass::ElementStiffness ElementStiffness;
    typedef typename HexahedronFEMForceFieldAndMass::MaterialStiffness MaterialStiffness;
    typedef typename HexahedronFEMForceFieldAndMass::Mass Mass;
    typedef typename HexahedronFEMForceFieldAndMass::ElementMass ElementMass;


public:


    Data<int> _nbVirtualFinerLevels; ///< use virtual finer levels, in order to compte non-uniform stiffness, only valid if the topology is a SparseGridTopology with enough VirtualFinerLevels.
    Data<bool> _useMass; ///< Do we want to use this ForceField like a Mass? (or do we prefer using a separate Mass)

    NonUniformHexahedronFEMForceFieldAndMass():HexahedronFEMForceFieldAndMass()
        ,_finerLevel(NULL)
    {
        _nbVirtualFinerLevels = initData(&this->_nbVirtualFinerLevels,0,"nbVirtualFinerLevels","use virtual finer levels, in order to compte non-uniform stiffness");
        _useMass = initData(&this->_useMass,true,"useMass","Using this ForceField like a Mass? (rather than using a separated Mass)");

    }



    virtual void init();


protected:


    virtual void computeElementStiffness( ElementStiffness &K, const MaterialStiffness &M, const helper::fixed_array<Coord,8> &nodes, const int elementIndice);
    void computeElementStiffnessFromFiner( ElementStiffness &K,  const int elementIndice); ///< compute stiffness matrix from finer matrices, taking into account matter distribution, to build a non-uniform stiffness

    virtual void computeElementMass( ElementMass &Mass, const helper::fixed_array<Coord,8> &nodes, const int elementIndice); ///< compute the mass matrix of an element
    void computeElementMassFromFiner( ElementMass &Mass, const int elementIndice);


    helper::vector<NonUniformHexahedronFEMForceFieldAndMass<DataTypes>* > _virtualFinerLevels; ///< number of finer levels to take into account during the non-uniformity computation

    NonUniformHexahedronFEMForceFieldAndMass<DataTypes>*_finerLevel; ///< saving the finer virtual levels

    static const float FINE_TO_COARSE[8][8][8]; ///< interpolation matrices from finer level to a coarser (to build stiffness and mass matrices)
    void addFineToCoarse( ElementStiffness& coarse, const ElementStiffness& fine, int indice );


};

} // namespace forcefield

} // namespace component

} // namespace sofa

#endif
