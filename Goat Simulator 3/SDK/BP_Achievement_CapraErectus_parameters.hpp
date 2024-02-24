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

// 0x11 (0x11 - 0x0)
// Function BP_Achievement_CapraErectus.BP_Achievement_CapraErectus_C.HasMetRequirements
struct ABP_Achievement_CapraErectus_C_HasMetRequirements_Params
{
public:
	bool                                         bIsClient;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsMainMenu;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsIsland;                                         // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_134[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGInventory*                          CallFunc_GetPlayerInventory_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGearUnlockedDataAsset_ReturnValue;      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_Achievement_CapraErectus.BP_Achievement_CapraErectus_C.ExecuteUbergraph_BP_Achievement_CapraErectus
struct ABP_Achievement_CapraErectus_C_ExecuteUbergraph_BP_Achievement_CapraErectus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


