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

// 0x90 (0x90 - 0x0)
// Function BP_MenuDataEntry_Crafting.BP_MenuDataEntry_Crafting_C.TogglePinnedState
struct UBP_MenuDataEntry_Crafting_C_TogglePinnedState_Params
{
public:
	bool                                         CallFunc_IsPinned_ReturnValue;                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUnlocked_ReturnValue;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60EC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_HUDGoalTrackingComponent_C*        CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FCraftingRecipeReference              CallFunc_GetCraftingRecipeAssetReference_ReturnValue; // 0x10(0x70)(ConstParm, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UI_GoalTracking_C> CallFunc_TrackCraftingEntity_self_CastInput;       // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D (0x4D - 0x0)
// Function BP_MenuDataEntry_Crafting.BP_MenuDataEntry_Crafting_C.IsPinned
struct UBP_MenuDataEntry_Crafting_C_IsPinned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_616E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_GetID_ReturnValue;                        // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6173[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_HUDGoalTrackingComponent_C*        CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent; // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_GuidToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UI_GoalTracking_C> K2Node_DynamicCast_AsBPI_UI_Goal_Tracking;         // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_617E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEntityPinned_IsPinned;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MenuDataEntry_Crafting.BP_MenuDataEntry_Crafting_C.GetTooltipWidget
struct UBP_MenuDataEntry_Crafting_C_GetTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Tooltip_CraftingEntry_C*          CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function BP_MenuDataEntry_Crafting.BP_MenuDataEntry_Crafting_C.IsCraftable
struct UBP_MenuDataEntry_Crafting_C_IsCraftable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_620E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingCreationComponent_C*       CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCraftable_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECraftingScreenState              CallFunc_GetCraftingScreenState_ReturnValue;       // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6220[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipe                       CallFunc_GetCraftingRecipeData_ReturnValue;        // 0x18(0x120)(ContainsInstancedReference)
	bool                                         CallFunc_CraftingMenu_AllSlotsSatisfied_bAllMet;   // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_622C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_CraftingMenu_AllSlotsSatisfied_OutUnmetSlots; // 0x140(0x10)(ReferenceParm)
};

// 0x150 (0x150 - 0x0)
// Function BP_MenuDataEntry_Crafting.BP_MenuDataEntry_Crafting_C.CalculateMissingSlots
struct UBP_MenuDataEntry_Crafting_C_CalculateMissingSlots_Params
{
public:
	bool                                         bAllMet;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6268[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                OutUnmetSlots;                                     // 0x8(0x10)(Parm, OutParm)
	struct FCraftingRecipe                       CallFunc_GetCraftingRecipeData_ReturnValue;        // 0x18(0x120)(ContainsInstancedReference)
	bool                                         CallFunc_CraftingMenu_AllSlotsSatisfied_bAllMet;   // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6278[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_CraftingMenu_AllSlotsSatisfied_OutUnmetSlots; // 0x140(0x10)(ReferenceParm)
};

}
}


