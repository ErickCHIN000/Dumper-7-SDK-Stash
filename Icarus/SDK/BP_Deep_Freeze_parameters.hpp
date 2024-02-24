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

// 0x440 (0x440 - 0x0)
// Function BP_Deep_Freeze.BP_Deep_Freeze_C.AddItem
struct ABP_Deep_Freeze_C_AddItem_Params
{
public:
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_678C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponent*                   CallFunc_GetTrait_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths_1;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_678D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnergyComponent*                      CallFunc_GetTrait_ReturnValue_1;                   // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            CallFunc_GetInventory_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6793[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate;       // 0x30(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths;              // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6795[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_CreateItem_ReturnValue;                   // 0x228(0x1F0)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_679E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemData>                     K2Node_MakeArray_Array;                            // 0x420(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FItemData>                     CallFunc_ForceAddItems_RemainingItems;             // 0x430(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x2C (0x2C - 0x0)
// Function BP_Deep_Freeze.BP_Deep_Freeze_C.EnergyNetworkStateUpdate
struct ABP_Deep_Freeze_C_EnergyNetworkStateUpdate_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_67C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModifier                             K2Node_MakeStruct_Modifier;                        // 0x4(0x20)(NoDestructor)
	bool                                         CallFunc_RemoveModifierState_ReturnValue;          // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_67C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddModifierState_ReturnValue;             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_Deep_Freeze.BP_Deep_Freeze_C.ExecuteUbergraph_BP_Deep_Freeze
struct ABP_Deep_Freeze_C_ExecuteUbergraph_BP_Deep_Freeze_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_67F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


