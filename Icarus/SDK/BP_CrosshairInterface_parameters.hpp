#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function BP_CrosshairInterface.BP_CrosshairInterface_C.GetCrosshairAimAlpha
struct IBP_CrosshairInterface_C_GetCrosshairAimAlpha_Params
{
public:
	float                                        AimAlpha;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CrosshairInterface.BP_CrosshairInterface_C.WantsShowCrosshair
struct IBP_CrosshairInterface_C_WantsShowCrosshair_Params
{
public:
	bool                                         bShowCrosshair;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_CrosshairInterface.BP_CrosshairInterface_C.WantsBowMode
struct IBP_CrosshairInterface_C_WantsBowMode_Params
{
public:
	bool                                         bWantsBowMode;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


