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

// 0x6A (0x6A - 0x0)
// Function ItemDescription.ItemDescription_C.SetItemFamEffectText
struct UItemDescription_C_SetItemFamEffectText_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Effect;                                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_StormMode_ItemFamEffectText_ReturnValue;  // 0x40(0x18)(None)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StormModeIsActive_ReturnValue;            // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function ItemDescription.ItemDescription_C.SetItemEffectText
struct UItemDescription_C_SetItemEffectText_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Effect;                                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_861[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_StormMode_ItemEffectText_ReturnValue;     // 0x58(0x18)(None)
	bool                                         CallFunc_StormModeIsActive_ReturnValue;            // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x33 (0x33 - 0x0)
// Function ItemDescription.ItemDescription_C.HandleScale
struct UItemDescription_C_HandleScale_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_HUD_Size                     CallFunc_GetUIScale_ReturnValue;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function ItemDescription.ItemDescription_C.SetItemName
struct UItemDescription_C_SetItemName_Params
{
public:
	class FText                                  ItemName;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8F3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_CheckItemName_ReturnValue;                // 0x20(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8FA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8FD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x98(0x18)(None)
};

// 0x1D (0x1D - 0x0)
// Function ItemDescription.ItemDescription_C.IsSelectedItemAWeaponAndHasUpgrades
struct UItemDescription_C_IsSelectedItemAWeaponAndHasUpgrades_Params
{
public:
	class FName                                  CallFunc_GetAxatanaOreID_ID;                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value_1;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value_2;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value_3;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value_4;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function ItemDescription.ItemDescription_C.HideEffectDescription
struct UItemDescription_C_HideEffectDescription_Params
{
public:
	class FText                                  EffectDescription;                                 // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  ID;                                                // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Familiarity;                                       // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_946[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  Temp_text_Variable;                                // 0x40(0x18)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_950[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x60(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function ItemDescription.ItemDescription_C.ItalicDescription
struct UItemDescription_C_ItalicDescription_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function ItemDescription.ItemDescription_C.GetCannotUseString
struct UItemDescription_C_GetCannotUseString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	enum class Enum_InventoryItem_CanUse         Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function ItemDescription.ItemDescription_C.ItemDetails
struct UItemDescription_C_ItemDetails_Params
{
public:
	bool                                         Local_HasFamiliarity;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A6F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Local_FamiliarityDescription;                      // 0x8(0x18)(Edit, BlueprintVisible)
	int32                                        Local_AmountToUnlock;                              // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A76[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Local_Description;                                 // 0x28(0x18)(Edit, BlueprintVisible)
	enum class EItemType                         Local_ItemType;                                    // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A81[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Local_Name;                                        // 0x48(0x18)(Edit, BlueprintVisible)
	class FName                                  Local_ID;                                          // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCannotUseString_ReturnValue;           // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A89[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ItalicDescription_ReturnValue;            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetItemMaxFamiliarity_MaxFamiliarity;     // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetItemFamiliarity_Value;                 // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_CreateExtendedDescription_ReturnValue;    // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateExtendedDescription_OutputPin;      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A93[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xD0(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_CreateItemEffectDescription_ReturnValue;  // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetItemMaxFamiliarity_MaxFamiliarity_1;   // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetItemFamiliarity_Value_1;               // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_SetItemFamEffectText_ReturnValue;         // 0x160(0x18)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AC4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetAverageFamiliarity_ReturnValue;        // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_SetItemEffectText_ReturnValue;            // 0x180(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AC9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default_1;                           // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1C0(0x18)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemDescription.ItemDescription_C.Reset
struct UItemDescription_C_Reset_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemDescription.ItemDescription_C.SetFamiliarityVisibility
struct UItemDescription_C_SetFamiliarityVisibility_Params
{
public:
	bool                                         bVisiblity;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ItemDescription.ItemDescription_C.HandleParallax
struct UItemDescription_C_HandleParallax_Params
{
public:
	struct FVector2D                             NormalizedMousePos;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetMousePosFromCenterOfScreen_Position;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemDescription.ItemDescription_C.PreConstruct
struct UItemDescription_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x139 (0x139 - 0x0)
// Function ItemDescription.ItemDescription_C.SetItemInfo
struct UItemDescription_C_SetItemInfo_Params
{
public:
	struct FInventoryItem                        Item;                                              // 0x0(0x132)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_B8C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class Enum_InventoryItem_CanUse         CanUse;                                            // 0x138(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x142 (0x142 - 0x0)
// Function ItemDescription.ItemDescription_C.ExecuteUbergraph_ItemDescription
struct UItemDescription_C_ExecuteUbergraph_ItemDescription_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        K2Node_CustomEvent_Item;                           // 0x8(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_BB4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class Enum_InventoryItem_CanUse         K2Node_CustomEvent_CanUse;                         // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


