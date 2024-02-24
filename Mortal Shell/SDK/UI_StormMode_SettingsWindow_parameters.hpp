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

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetSelectedCharacter
struct UUI_StormMode_SettingsWindow_C_GetSelectedCharacter_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetVerticalIndex
struct UUI_StormMode_SettingsWindow_C_GetVerticalIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetSettings
struct UUI_StormMode_SettingsWindow_C_GetSettings_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1813[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Notify_StormMode_Duration    CallFunc_StormMode_Notify_RunicFam_GetDuration_Duration; // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Notify_StormMode_Visibility  CallFunc_StormMode_Notify_RunicFam_GetVisibility_Visibility; // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1827[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_182C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_OverrideCurrentValue_self_CastInput;      // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_OverrideCurrentValue_self_CastInput_1;    // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2; // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1844[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_3;            // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Notify_StormMode_Visibility  CallFunc_StormMode_Notify_Instinct_GetVisibility_Visibility; // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1848[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3; // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Notify_StormMode_Duration    CallFunc_StormMode_Notify_Instinct_GetDuration_Duration; // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_184E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_OverrideCurrentValue_self_CastInput_2;    // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1855[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_OverrideCurrentValue_self_CastInput_3;    // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_4;            // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4; // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1868[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_StormMode_GetDifficulty_ReturnValue;      // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_OverrideCurrentValue_self_CastInput_4;    // 0xF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ResetSeedButton
struct UUI_StormMode_SettingsWindow_C_ResetSeedButton_Params
{
public:
	bool                                         PlaySound;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetSeedButtons
struct UUI_StormMode_SettingsWindow_C_GetSeedButtons_Params
{
public:
	TArray<class UUI_StormMode_SeedButton_C*>    Array;                                             // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUI_StormMode_SeedButton_C*>    CallFunc_GetSeedButtons_Array;                     // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetIsAscended
struct UUI_StormMode_SettingsWindow_C_GetIsAscended_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_196C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Ascended;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput;     // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput_1;   // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1974[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_IsAscendedFromSaveGame_Value;             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetAscensionName_ID;                      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.IsAscendedFromSaveGame
struct UUI_StormMode_SettingsWindow_C_IsAscendedFromSaveGame_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetAscensionName_ID;                      // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetSaveData
struct UUI_StormMode_SettingsWindow_C_GetSaveData_Params
{
public:
	int32                                        SaveSlot;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerSaveGame_C*                     SaveGameReference;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetParentWidget
struct UUI_StormMode_SettingsWindow_C_GetParentWidget_Params
{
public:
	class UWidget*                               WidgetParent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_StormMode_Menu_C*                  K2Node_DynamicCast_AsUI_Storm_Mode_Menu;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D (0x2D - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ResetSeedButtons_Value
struct UUI_StormMode_SettingsWindow_C_ResetSeedButtons_Value_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_StormMode_SeedButton_C*>    CallFunc_GetSeedButtons_Array;                     // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUI_StormMode_SeedButton_C*            CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ResetCurrentSeed
struct UUI_StormMode_SettingsWindow_C_ResetCurrentSeed_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Seed_ApplyInitial_Seed;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x42 (0x42 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ConfirmCustomSeed
struct UUI_StormMode_SettingsWindow_C_ConfirmCustomSeed_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_StormMode_SeedButton_C*>    CallFunc_GetSeedButtons_Array;                     // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUI_StormMode_SeedButton_C*            CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_DeactivateButton_self_CastInput;          // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D (0x2D - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ResetSeedButtons_Highlight
struct UUI_StormMode_SettingsWindow_C_ResetSeedButtons_Highlight_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_StormMode_SeedButton_C*>    CallFunc_GetSeedButtons_Array;                     // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUI_StormMode_SeedButton_C*            CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.Sound_Confirm
struct UUI_StormMode_SettingsWindow_C_Sound_Confirm_Params
{
public:
	float                                        Min;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VolumeMultiplier;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetCurrentSeed
struct UUI_StormMode_SettingsWindow_C_GetCurrentSeed_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CCF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x48(0x18)(None)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x60(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput;       // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ApplyCustomSeed
struct UUI_StormMode_SettingsWindow_C_ApplyCustomSeed_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x102 (0x102 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.NavUpDown
struct UUI_StormMode_SettingsWindow_C_NavUpDown_Params
{
public:
	bool                                         UseWidget;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CustomIndex;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SkipIndexCheck;                                    // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SkipSound;                                         // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Delta;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_UseWidget;                                   // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_CustomIndex;                                 // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_SkipIndexCheck;                              // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_SkipSound;                                   // 0x17(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                           Local_Button;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Local_Widget;                                      // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_Delta;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_IndexSelected;                               // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   CallFunc_GetButtons_Array;                         // 0x38(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   CallFunc_GetButtons_Array_1;                       // 0x48(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   CallFunc_GetButtons_Array_2;                       // 0x70(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;   // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EAF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EC1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   CallFunc_GetButtons_Array_3;                       // 0xB8(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1; // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EF2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_Array_Get_Item_1;                         // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2; // 0xF0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsButtonEnabled_Enabled_;                 // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetButtons
struct UUI_StormMode_SettingsWindow_C_GetButtons_Params
{
public:
	TArray<class UUserWidget*>                   Array;                                             // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.SetSeedString
struct UUI_StormMode_SettingsWindow_C_SetSeedString_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_StormMode_SeedButton_C*>    CallFunc_GetSeedButtons_Array;                     // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUI_StormMode_SeedButton_C*            CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetTextAsIntString_Number;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FAF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnCharacterHighlighted
struct UUI_StormMode_SettingsWindow_C_OnCharacterHighlighted_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnWeaponHighlighted
struct UUI_StormMode_SettingsWindow_C_OnWeaponHighlighted_Params
{
public:
	enum class EComboTypes                       Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnCharacterSelected
struct UUI_StormMode_SettingsWindow_C_OnCharacterSelected_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnSettingConfirmed
struct UUI_StormMode_SettingsWindow_C_OnSettingConfirmed_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnWeaponSelected
struct UUI_StormMode_SettingsWindow_C_OnWeaponSelected_Params
{
public:
	enum class EComboTypes                       Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnRiposteHighlighted
struct UUI_StormMode_SettingsWindow_C_OnRiposteHighlighted_Params
{
public:
	enum class ERiposteTypes                     Riposte;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnRiposteSelected
struct UUI_StormMode_SettingsWindow_C_OnRiposteSelected_Params
{
public:
	enum class ERiposteTypes                     Riposte;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.SetSaveGameRef
struct UUI_StormMode_SettingsWindow_C_SetSaveGameRef_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerSaveGame_C*                     SaveGame;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMapState_C*                           MapStateSaveGame;                                  // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName_MapState;                                 // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.SetSeedManager
struct UUI_StormMode_SettingsWindow_C_SetSeedManager_Params
{
public:
	class ABP_SeedManager_C*                     SeedManager;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.SetParentWidget
struct UUI_StormMode_SettingsWindow_C_SetParentWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.BndEvt__UI_Button_Difficulty_K2Node_ComponentBoundEvent_0_OnSettingChanged__DelegateSignature
struct UUI_StormMode_SettingsWindow_C_BndEvt__UI_Button_Difficulty_K2Node_ComponentBoundEvent_0_OnSettingChanged__DelegateSignature_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.BndEvt__UI_Button_Notify_Instinct_Duration_K2Node_ComponentBoundEvent_1_OnSettingChanged__DelegateSignature
struct UUI_StormMode_SettingsWindow_C_BndEvt__UI_Button_Notify_Instinct_Duration_K2Node_ComponentBoundEvent_1_OnSettingChanged__DelegateSignature_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.BndEvt__UI_Button_Notify_Instinct_Visibility_K2Node_ComponentBoundEvent_2_OnSettingChanged__DelegateSignature
struct UUI_StormMode_SettingsWindow_C_BndEvt__UI_Button_Notify_Instinct_Visibility_K2Node_ComponentBoundEvent_2_OnSettingChanged__DelegateSignature_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.BndEvt__UI_Button_Notify_RunFam_Duration_K2Node_ComponentBoundEvent_3_OnSettingChanged__DelegateSignature
struct UUI_StormMode_SettingsWindow_C_BndEvt__UI_Button_Notify_RunFam_Duration_K2Node_ComponentBoundEvent_3_OnSettingChanged__DelegateSignature_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.BndEvt__UI_Button_Notify_RunFam_Visibility_K2Node_ComponentBoundEvent_4_OnSettingChanged__DelegateSignature
struct UUI_StormMode_SettingsWindow_C_BndEvt__UI_Button_Notify_RunFam_Visibility_K2Node_ComponentBoundEvent_4_OnSettingChanged__DelegateSignature_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnButtonHovered
struct UUI_StormMode_SettingsWindow_C_OnButtonHovered_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B2 (0x2B2 - 0x0)
// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ExecuteUbergraph_UI_StormMode_SettingsWindow
struct UUI_StormMode_SettingsWindow_C_ExecuteUbergraph_UI_StormMode_SettingsWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2581[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       K2Node_Event_Character_1;                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       K2Node_Event_Weapon_1;                             // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       K2Node_Event_Character;                            // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2594[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Value;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       K2Node_Event_Weapon;                               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERiposteTypes                     K2Node_Event_Riposte_1;                            // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERiposteTypes                     K2Node_Event_Riposte;                              // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_Event_Slot;                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerSaveGame_C*                     K2Node_Event_SaveGame;                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_SlotName;                             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UMapState_C*                           K2Node_Event_MapStateSaveGame;                     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_SlotName_MapState;                    // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_SeedManager_C*                     K2Node_Event_SeedManager;                          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Event_Widget_1;                             // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsAscended_ReturnValue;                // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_NavHorizontal_self_CastInput;             // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UUserWidget*>                   CallFunc_GetButtons_Array;                         // 0x80(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   CallFunc_GetButtons_Array_1;                       // 0x90(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;   // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2605[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_Array_Get_Item_1;                         // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1; // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_261F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewValue_4;             // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_263D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0xF0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2646[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_264A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_NavHorizontal_self_CastInput_1;           // 0x120(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_ComponentBoundEvent_NewValue_3;             // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewValue_2;             // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x13B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewValue_1;             // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewValue;               // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_2;              // 0x146(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_3;              // 0x147(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2697[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2; // 0x158(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_269E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_NavVertical_self_CastInput;               // 0x170(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_3;            // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3; // 0x190(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4; // 0x1A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_4;            // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_5; // 0x1C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26EC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_NavVertical_self_CastInput_1;             // 0x1E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_5;            // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_6;            // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_6; // 0x200(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_7; // 0x218(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2712[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_7;            // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_8;            // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_8; // 0x240(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2721[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_9; // 0x258(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x26A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2730[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           K2Node_Event_Widget;                               // 0x270(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2738[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   CallFunc_GetButtons_Array_2;                       // 0x280(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Array_Get_Item_2;                         // 0x290(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2741[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2; // 0x2A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


