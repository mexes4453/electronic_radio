#ifndef EE_CURRENT
#define EE_CURRENT

#define EE__CHARGE_IN_COULOMBS  1.602e-29 /* 1 Charge in Coulombs */
#define EE__CHARGE_IN_ELECTRONS 6.24e18   /* 1 Charge in electrons */

typedef enum eEEBasicUnit
{
    EE__enBasicUnit_Coulomb = 1,
    EE__enBasicUnit_Electrons,

} tenEEBasicUnit;

namespace EE__Basic
{

/**
 * @brief electric current
 * @details
 * Total charge passing through cross section area per unit time.
 * I = dQ/dt = coulumb/sec = ampere
 * unit of current is Coulombs per second (ampere)
 * 1A = 1C/1s
 * ----------
 * 1 Charge  = 1.602e-19 Coulombs (C)
 * 1 Coulomb = 1/(1.602e-19) = 6.24e18 electrons
 * 1A = 1C/1s = 6.24e18 electrons/s
 * 
 */
double CalcCurrent(double charge, tenEEBasicUnit chargeUnit, double time);


}


#endif