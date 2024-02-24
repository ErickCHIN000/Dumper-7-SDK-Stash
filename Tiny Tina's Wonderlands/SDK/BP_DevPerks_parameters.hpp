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

// 0x30 (0x30 - 0x0)
// Function BP_DevPerks.BP_DevPerks_C.SpawnAwesomeItems
struct UBP_DevPerks_C_SpawnAwesomeItems_Params
{
public:
	TArray<class UItemPoolData*>                 K2Node_MakeArray_Array;                            // 0x0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UItemPoolData*>                 K2Node_MakeArray_Array1;                           // 0x10(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UItemPoolData*>                 K2Node_MakeArray_Array2;                           // 0x20(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function BP_DevPerks.BP_DevPerks_C.OnDeveloperPerkActivated
struct UBP_DevPerks_C_OnDeveloperPerkActivated_Params
{
public:
	uint8                                        Perk;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function BP_DevPerks.BP_DevPerks_C.ExecuteUbergraph_BP_DevPerks
struct UBP_DevPerks_C_ExecuteUbergraph_BP_DevPerks_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_Event_Perk;                                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


