/******************************************************************************
*                 SOFA, Simulation Open-Framework Architecture                *
*                    (c) 2006 INRIA, USTL, UJF, CNRS, MGH                     *
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
#pragma once

#include <SofaMiscForceField/config.h>

#include <sofa/core/behavior/ForceField.h>
#include <sofa/core/behavior/MechanicalState.h>
#include <vector>


namespace sofa::component::forcefield
{

template<class DataTypes>
class LennardJonesForceField : public sofa::core::behavior::ForceField<DataTypes>
{
public:
    SOFA_CLASS(SOFA_TEMPLATE(LennardJonesForceField, DataTypes), SOFA_TEMPLATE(core::behavior::ForceField, DataTypes));

    typedef sofa::core::behavior::ForceField<DataTypes> Inherit;
    typedef typename DataTypes::VecCoord VecCoord;
    typedef typename DataTypes::VecDeriv VecDeriv;
    typedef typename DataTypes::Coord Coord;
    typedef typename DataTypes::Deriv Deriv;
    typedef typename Coord::value_type Real;

    typedef core::objectmodel::Data<VecDeriv>    DataVecDeriv;
    typedef core::objectmodel::Data<VecCoord>    DataVecCoord;

protected:
    Real a,b;
    Data<Real> aInit; ///< a for Gravitational FF which corresponds to G*m1*m2 alpha should be equal to 1 and beta to 0.
    Data<Real> alpha; ///< Alpha
    Data<Real> beta; ///< Beta
    Data<Real> dmax; ///< DMax
    Data<Real> fmax; ///< FMax
    Data<Real> d0; ///< d0
    Data<Real> p0; ///< p0
    Data<Real> damping; ///< Damping

    struct DForce
    {
        unsigned int a,b;
        Real df;
    };

    sofa::helper::vector<DForce> dforces;

    LennardJonesForceField();
public:

    void setAInit(Real v) { aInit.setValue(v); }
    void setAlpha(Real v) { alpha.setValue(v); }
    void setBeta(Real v) { beta.setValue(v); }
    void setFMax(Real v) { fmax.setValue(v); }
    void setDMax(Real v) { dmax.setValue(v); }
    void setD0(Real v) { d0.setValue(v); }
    void setP0(Real v) { p0.setValue(v); }
    void setDamping(Real v) { damping.setValue(v); }


    void init() override;

    void addForce(const core::MechanicalParams* mparams, DataVecDeriv& d_f, const DataVecCoord& d_x, const DataVecDeriv& d_v) override;
    void addDForce(const core::MechanicalParams* mparams, DataVecDeriv& d_df, const DataVecDeriv& d_dx) override;
    SReal getPotentialEnergy(const core::MechanicalParams*, const DataVecCoord& d_x) const override;

    void draw(const core::visual::VisualParams* vparams) override;

};

#if  !defined(SOFA_COMPONENT_FORCEFIELD_LENNARDJONESFORCEFIELD_CPP)

extern template class SOFA_SOFAMISCFORCEFIELD_API LennardJonesForceField<defaulttype::Vec3Types>;


#endif //  !defined(SOFA_COMPONENT_FORCEFIELD_LENNARDJONESFORCEFIELD_CPP)

} // namespace sofa::component::forcefield
