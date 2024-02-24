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

// 0x3C6 (0x3C6 - 0x0)
// Function BP_WidgetInventoryFilter_PlayerLoadout.BP_WidgetInventoryFilter_PlayerLoadout_C.ShouldShowLoadoutEntry
struct UBP_WidgetInventoryFilter_PlayerLoadout_C_ShouldShowLoadoutEntry_Params
{
public:
	struct FInventoryEntry                       Entry;                                             // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ShouldShow;                                        // 0x2F0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C06[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLoadoutSlot>                  CallFunc_GetLoadoutSlots_LoadoutSlots;             // 0x300(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C1E[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLoadoutSlot                          CallFunc_Array_Get_Item;                           // 0x320(0xA0)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x3C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F2 (0x2F2 - 0x0)
// Function BP_WidgetInventoryFilter_PlayerLoadout.BP_WidgetInventoryFilter_PlayerLoadout_C.ShouldShowEntry
struct UBP_WidgetInventoryFilter_PlayerLoadout_C_ShouldShowEntry_Params
{
public:
	struct FInventoryEntry                       Entry;                                             // 0x0(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x2F0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShowLoadoutEntry_shouldShow;        // 0x2F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_WidgetInventoryFilter_PlayerLoadout.BP_WidgetInventoryFilter_PlayerLoadout_C.ExecuteUbergraph_BP_WidgetInventoryFilter_PlayerLoadout
struct UBP_WidgetInventoryFilter_PlayerLoadout_C_ExecuteUbergraph_BP_WidgetInventoryFilter_PlayerLoadout_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CCF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_LoadoutComponent_C*                CallFunc_GetComponentByClass_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


