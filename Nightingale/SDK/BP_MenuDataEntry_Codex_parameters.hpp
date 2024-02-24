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

// 0x28 (0x28 - 0x0)
// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetID
struct UBP_MenuDataEntry_Codex_C_GetID_Params
{
public:
	struct FGuid                                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCodexBaseDataAsset*                   CallFunc_GetCodexDataAsset_CodexDataAsset;         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetCodexAssetUniqueId_OutUniqueID;        // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetDescription
struct UBP_MenuDataEntry_Codex_C_GetDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class UCodexBaseDataAsset*                   CallFunc_GetCodexDataAsset_CodexDataAsset;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ADA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCodexSubentry                        CallFunc_Array_Get_Item;                           // 0x28(0x20)(None)
};

// 0x2A (0x2A - 0x0)
// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.IsUnlocked
struct UBP_MenuDataEntry_Codex_C_IsUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerState_C*                     CallFunc_GetLocalPlayerState_PlayerState;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCodexTrackerComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICodexTrackerInterface> CallFunc_HasUnlockedAnySubentry_self_CastInput;    // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasUnlockedAnySubentry_OutUnlocked;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetImage
struct UBP_MenuDataEntry_Codex_C_GetImage_Params
{
public:
	bool                                         IsValidReference;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             EntryImage;                                        // 0x8(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
	class UCodexBaseDataAsset*                   CallFunc_GetCodexDataAsset_CodexDataAsset;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetDisplayName
struct UBP_MenuDataEntry_Codex_C_GetDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class UCodexBaseDataAsset*                   CallFunc_GetCodexDataAsset_CodexDataAsset;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetSortingGroups
struct UBP_MenuDataEntry_Codex_C_GetSortingGroups_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm)
	class UCodexBaseDataAsset*                   CallFunc_GetCodexDataAsset_CodexDataAsset;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetTooltipWidget
struct UBP_MenuDataEntry_Codex_C_GetTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Tooltip_Subentry;                                  // 0x8(0x18)(Edit, BlueprintVisible)
	class UWBP_Tooltip_CodexEntry_C*             CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x28(0x18)(None)
	class FText                                  CallFunc_GetDescription_ReturnValue_1;             // 0x40(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xB0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x100(0x10)(ReferenceParm)
	bool                                         CallFunc_GetImage_IsValidReference;                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetImage_EntryImage;                      // 0x118(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x140(0x18)(None)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x158(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetCodexDataAsset
struct UBP_MenuDataEntry_Codex_C_GetCodexDataAsset_Params
{
public:
	class UCodexBaseDataAsset*                   CodexDataAsset;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.SetCodexDataAsset
struct UBP_MenuDataEntry_Codex_C_SetCodexDataAsset_Params
{
public:
	class UCodexBaseDataAsset*                   CodexDataAsset;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


