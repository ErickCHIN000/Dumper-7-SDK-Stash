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

// 0x301 (0x301 - 0x0)
// Function WBP_Inv_StorageScreen.WBP_Inv_StorageScreen_C.BndEvt__WBP_Inv_StorageScreen_WBP_StoragePanel_K2Node_ComponentBoundEvent_3_OnEntryHovered__DelegateSignature
struct UWBP_Inv_StorageScreen_C_BndEvt__WBP_Inv_StorageScreen_WBP_StoragePanel_K2Node_ComponentBoundEvent_3_OnEntryHovered__DelegateSignature_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2835[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InventoryEntry;                                    // 0x10(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETooltipSource                    TooltipSource;                                     // 0x300(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x900 (0x900 - 0x0)
// Function WBP_Inv_StorageScreen.WBP_Inv_StorageScreen_C.ExecuteUbergraph_WBP_Inv_StorageScreen
struct UWBP_Inv_StorageScreen_C_ExecuteUbergraph_WBP_Inv_StorageScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGlobalAudioSubsystem*                 CallFunc_GetEngineSubsystem_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_IsHovered;              // 0x10(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D6[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       K2Node_ComponentBoundEvent_InventoryEntry;         // 0x20(0x2F0)(ConstParm)
	enum class ETooltipSource                    K2Node_ComponentBoundEvent_TooltipSource;          // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28DF[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       K2Node_Select_Default;                             // 0x320(0x2F0)(None)
	struct FInventoryEntry                       CallFunc_GetSelectedEntry_ReturnValue;             // 0x610(0x2F0)(ConstParm)
};

// 0xC (0xC - 0x0)
// Function WBP_Inv_StorageScreen.WBP_Inv_StorageScreen_C.PickupItem__DelegateSignature
struct UWBP_Inv_StorageScreen_C_PickupItem__DelegateSignature_Params
{
public:
	class FName                                  ItemName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


