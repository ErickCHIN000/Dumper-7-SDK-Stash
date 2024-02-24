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

// 0x98 (0x98 - 0x0)
// Function UMG_ItemTooltip_LivingItem.UMG_ItemTooltip_LivingItem_C.TrySetupChallengeInfo
struct UUMG_ItemTooltip_LivingItem_C_TrySetupChallengeInfo_Params
{
public:
	struct FLivingItemSlotState                  LivingItemSlotState;                               // 0x0(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x2C0 (0x2C0 - 0x0)
// Function UMG_ItemTooltip_LivingItem.UMG_ItemTooltip_LivingItem_C.ExecuteUbergraph_UMG_ItemTooltip_LivingItem
struct UUMG_ItemTooltip_LivingItem_C_ExecuteUbergraph_UMG_ItemTooltip_LivingItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLivingItemSlotState>          CallFunc_GetLivingItemSlotStates_Slots;            // 0x10(0x10)(ReferenceParm)
	bool                                         CallFunc_GetLivingItemSlotStates_ReturnValue;      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BDE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLivingItemSlotState                  CallFunc_Array_Get_Item;                           // 0x28(0x98)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUMG_BioLab_UpgradeSlotMain_C*> K2Node_MakeArray_Array;                            // 0xC8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUMG_BioLab_UpgradeSlotMain_C*         CallFunc_Array_Get_Item_1;                         // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLivingItemSlotState                  K2Node_CustomEvent_LivingItemSlotState;            // 0xF0(0x98)(ConstParm)
	struct FChallenge                            CallFunc_GetChallengesStruct_Challenges;           // 0x188(0x70)(None)
	enum class EValid                            CallFunc_GetChallengesStruct_Paths;                // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x200(0x40)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x248(0x40)(HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x290(0x10)(ReferenceParm)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2A8(0x18)(None)
};

}
}


