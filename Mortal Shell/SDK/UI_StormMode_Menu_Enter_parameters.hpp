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
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.GetSelectedCharacter
struct UUI_StormMode_Menu_Enter_C_GetSelectedCharacter_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.GetVerticalIndex
struct UUI_StormMode_Menu_Enter_C_GetVerticalIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.GetShade
struct UUI_StormMode_Menu_Enter_C_GetShade_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class Enum_ShellDye                     Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	enum class EArmorTypes                       Temp_byte_Variable_1;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetShadeNames_ReturnValue;                // 0x40(0x18)(None)
	class FText                                  CallFunc_GetShadeNames_ReturnValue_1;              // 0x58(0x18)(None)
	class FText                                  CallFunc_GetShadeNames_ReturnValue_2;              // 0x70(0x18)(None)
	enum class Enum_ShellDye                     K2Node_Select_Default;                             // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x90(0x18)(None)
};

// 0x1C (0x1C - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.GetSaveData
struct UUI_StormMode_Menu_Enter_C_GetSaveData_Params
{
public:
	class UServerSaveGame_C*                     SaveGameRef;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        SlotNumber;                                        // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetSelectedWeapon
struct UUI_StormMode_Menu_Enter_C_SetSelectedWeapon_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_187A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	bool                                         CallFunc_HasRunStarted_ReturnValue;                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_187D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetWeaponNames_ReturnValue;               // 0x28(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x40(0x18)(None)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x58(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput;       // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x158 (0x158 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetSelectedShell
struct UUI_StormMode_Menu_Enter_C_SetSelectedShell_Params
{
public:
	class FName                                  Temp_name_Variable;                                // 0x0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1925[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(None)
	class FText                                  CallFunc_GetShade_ReturnValue;                     // 0x28(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetShellNameSimple_ShellName;             // 0x80(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x98(0x40)(HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value;                           // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_193D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xE8(0x10)(ReferenceParm, HasGetValueTypeHash)
	enum class EArmorTypes                       CallFunc_GetShellFromNameID_Shell;                 // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1944[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x100(0x18)(None)
	bool                                         CallFunc_HasRunStarted_ReturnValue;                // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_194B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x120(0x18)(None)
	TArray<class FText>                          K2Node_MakeArray_Array_1;                          // 0x138(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput;       // 0x148(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x100 (0x100 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetRunPlaytime
struct UUI_StormMode_Menu_Enter_C_SetRunPlaytime_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	bool                                         CallFunc_HasRunStarted_ReturnValue;                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_BreakDateTime_Year;                       // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakDateTime_Month;                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakDateTime_Day;                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakDateTime_Hour;                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakDateTime_Minute;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakDateTime_Second;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakDateTime_Millisecond;                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_FixDateTime_TimeOut;                      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_FixDateTime_TimeOut_1;                    // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_FixDateTime_TimeOut_2;                    // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB0(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0xC8(0x18)(None)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0xE0(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput;       // 0xF0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetSeedButton
struct UUI_StormMode_Menu_Enter_C_SetSeedButton_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1ABD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	bool                                         CallFunc_HasRunStarted_ReturnValue;                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x40(0x18)(None)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x58(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput;       // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.HasRunStarted
struct UUI_StormMode_Menu_Enter_C_HasRunStarted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnCharacterHighlighted
struct UUI_StormMode_Menu_Enter_C_OnCharacterHighlighted_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnWeaponHighlighted
struct UUI_StormMode_Menu_Enter_C_OnWeaponHighlighted_Params
{
public:
	enum class EComboTypes                       Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetSeedManager
struct UUI_StormMode_Menu_Enter_C_SetSeedManager_Params
{
public:
	class ABP_SeedManager_C*                     SeedManager;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnCharacterSelected
struct UUI_StormMode_Menu_Enter_C_OnCharacterSelected_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnSettingConfirmed
struct UUI_StormMode_Menu_Enter_C_OnSettingConfirmed_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnWeaponSelected
struct UUI_StormMode_Menu_Enter_C_OnWeaponSelected_Params
{
public:
	enum class EComboTypes                       Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnRiposteHighlighted
struct UUI_StormMode_Menu_Enter_C_OnRiposteHighlighted_Params
{
public:
	enum class ERiposteTypes                     Riposte;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnRiposteSelected
struct UUI_StormMode_Menu_Enter_C_OnRiposteSelected_Params
{
public:
	enum class ERiposteTypes                     Riposte;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnButtonHovered
struct UUI_StormMode_Menu_Enter_C_OnButtonHovered_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetParentWidget
struct UUI_StormMode_Menu_Enter_C_SetParentWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetSaveGameRef
struct UUI_StormMode_Menu_Enter_C_SetSaveGameRef_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerSaveGame_C*                     SaveGame;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMapState_C*                           MapStateSaveGame;                                  // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName_MapState;                                 // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.ExecuteUbergraph_UI_StormMode_Menu_Enter
struct UUI_StormMode_Menu_Enter_C_ExecuteUbergraph_UI_StormMode_Menu_Enter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StormMode_Menu_C*                  K2Node_DynamicCast_AsUI_Storm_Mode_Menu;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       K2Node_Event_Character_1;                          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       K2Node_Event_Weapon_1;                             // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EAE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SeedManager_C*                     K2Node_Event_SeedManager;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       K2Node_Event_Character;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Value;                                // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       K2Node_Event_Weapon;                               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERiposteTypes                     K2Node_Event_Riposte_1;                            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERiposteTypes                     K2Node_Event_Riposte;                              // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EC5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           K2Node_Event_Widget_1;                             // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Event_Widget;                               // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput;           // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_Event_Slot;                                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerSaveGame_C*                     K2Node_Event_SaveGame;                             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_SlotName;                             // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UMapState_C*                           K2Node_Event_MapStateSaveGame;                     // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_SlotName_MapState;                    // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


