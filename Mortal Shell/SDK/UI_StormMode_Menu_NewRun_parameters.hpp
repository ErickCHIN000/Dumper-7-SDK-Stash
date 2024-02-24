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
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetSelectedCharacter
struct UUI_StormMode_Menu_NewRun_C_GetSelectedCharacter_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetVerticalIndex
struct UUI_StormMode_Menu_NewRun_C_GetVerticalIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12A (0x12A - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ShouldRemove10KTar
struct UUI_StormMode_Menu_NewRun_C_ShouldRemove10KTar_Params
{
public:
	TMap<class FName, int32>                     NamedInts;                                         // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<class FName, int32>                     ReturnValue;                                       // 0x50(0x50)(Parm, OutParm, ReturnParm)
	TMap<class FName, int32>                     Local_NamedInts;                                   // 0xA0(0x50)(Edit, BlueprintVisible)
	class FName                                  Temp_name_Variable;                                // 0xF0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xF8(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0xFC(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x104(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E34[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x11C(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value_1;                         // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateShadeButtonState
struct UUI_StormMode_Menu_NewRun_C_UpdateShadeButtonState_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E7F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x8(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput;       // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class FText>                          K2Node_MakeArray_Array_1;                          // 0x28(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput_1;     // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x63 (0x63 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.HasAs1
struct UUI_StormMode_Menu_NewRun_C_HasAs1_Params
{
public:
	TMap<class FName, int32>                     TargetMap;                                         // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  Key;                                               // 0x50(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EAD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetShadeUnlockIDBase
struct UUI_StormMode_Menu_NewRun_C_GetShadeUnlockIDBase_Params
{
public:
	enum class EArmorTypes                       Index;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F0A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F0B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_2;                            // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_3;                            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_4;                            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_5;                            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1E8 (0x1E8 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetUnlockedShadeDataForShell
struct UUI_StormMode_Menu_NewRun_C_GetUnlockedShadeDataForShell_Params
{
public:
	enum class EArmorTypes                       Shell;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F87[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Indices;                                           // 0x8(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<class FText>                          Texts;                                             // 0x18(0x10)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        Local_Index;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F8E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     Local_Dyes;                                        // 0x30(0x50)(Edit, BlueprintVisible)
	enum class EArmorTypes                       Local_Shell;                                       // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F90[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                IndexList;                                         // 0x88(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FText>                          TextList;                                          // 0x98(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F96[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0xB0(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0xC8(0x18)(None)
	int32                                        Temp_int_Variable;                                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F9A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F9C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F9F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetShadeNames_ReturnValue;                // 0x108(0x18)(None)
	class FString                                CallFunc_GetShadeUnlockIDBase_ReturnValue;         // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyUnlockedShadeForShell_ReturnValue;  // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FAD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x144(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAs1_ReturnValue;                       // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FB2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x150(0x18)(None)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x168(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FBA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                K2Node_MakeArray_Array_1;                          // 0x180(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FBE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     CallFunc_Get_Player_Ints_NamedInts;                // 0x198(0x50)(None)
};

// 0x69 (0x69 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.HasAnyUnlockedShadeForShell
struct UUI_StormMode_Menu_NewRun_C_HasAnyUnlockedShadeForShell_Params
{
public:
	enum class EArmorTypes                       Shell;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1006[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     CallFunc_Get_Player_Ints_NamedInts;                // 0x8(0x50)(None)
	class FString                                CallFunc_GetShadeUnlockIDBase_ReturnValue;         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyUnlockedShade_ReturnValue;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9C (0x9C - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.HasAnyUnlockedShade
struct UUI_StormMode_Menu_NewRun_C_HasAnyUnlockedShade_Params
{
public:
	class FString                                ShadeNameBase;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FName, int32>                     NamedInts;                                         // 0x10(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1057[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_105E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x8C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAs1_ReturnValue;                       // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1065[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Get Player Ints
struct UUI_StormMode_Menu_NewRun_C_Get_Player_Ints_Params
{
public:
	TMap<class FName, int32>                     NamedInts;                                         // 0x0(0x50)(Parm, OutParm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     CallFunc_StormMode_GetNamedInts_NamedInts;         // 0x70(0x50)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateShadeEnabledState
struct UUI_StormMode_Menu_NewRun_C_UpdateShadeEnabledState_Params
{
public:
	enum class EArmorTypes                       HighlightedArmor;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyUnlockedShadeForShell_ReturnValue;  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10C8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput;     // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3D (0x3D - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SaveStormModeToDisk_MapState
struct UUI_StormMode_Menu_NewRun_C_SaveStormModeToDisk_MapState_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue;          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetIndexFromButton
struct UUI_StormMode_Menu_NewRun_C_GetIndexFromButton_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1131[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   CallFunc_GetCurrentButtons_ReturnValue;            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SelectHealRiposte
struct UUI_StormMode_Menu_NewRun_C_SelectHealRiposte_Params
{
public:
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_ForceSelectButton_self_CastInput;         // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ResetRiposteSelection
struct UUI_StormMode_Menu_NewRun_C_ResetRiposteSelection_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1198[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;   // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.HandleStartingRiposte
struct UUI_StormMode_Menu_NewRun_C_HandleStartingRiposte_Params
{
public:
	TArray<class FName>                          UnlockedItems;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class FName                                  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRiposteUpgradeIDs_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateSeedButtonName
struct UUI_StormMode_Menu_NewRun_C_UpdateSeedButtonName_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x40(0x18)(None)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingName_self_CastInput;         // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateSeedCurrent
struct UUI_StormMode_Menu_NewRun_C_UpdateSeedCurrent_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1216[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_121A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x40(0x18)(None)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x58(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput;       // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.StartNewRun_FromActor
struct UUI_StormMode_Menu_NewRun_C_StartNewRun_FromActor_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1257[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FStruct_ShellDyes                     CallFunc_GetShellShadesState_Struct_ShellDyes;     // 0x31(0x6)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x42 (0x42 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.StartNewRun_FromMainMenu
struct UUI_StormMode_Menu_NewRun_C_StartNewRun_FromMainMenu_Params
{
public:
	bool                                         CallFunc_PrepareMapStateForNewRun_Success;         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1285[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1287[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1288[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PrepareGPDataForNewRun_Success;           // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x118 (0x118 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.CheckUnlocks
struct UUI_StormMode_Menu_NewRun_C_CheckUnlocks_Params
{
public:
	TArray<class FName>                          LocalUnlockedItems;                                // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<class FName, int32>                     Local_NamedInts;                                   // 0x10(0x50)(Edit, BlueprintVisible)
	enum class ERiposteTypes                     Local_Riposte;                                     // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Counter;                                     // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, int32>                     CallFunc_Get_Player_Ints_NamedInts;                // 0x68(0x50)(None)
	bool                                         CallFunc_HasAs1_ReturnValue;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAs1_ReturnValue_1;                     // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12D2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput;     // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAs1_ReturnValue_2;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAs1_ReturnValue_3;                     // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAs1_ReturnValue_4;                     // 0xD3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12E0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput_1;   // 0xD8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput_2;   // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput_3;   // 0xF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput_4;   // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetParentWidget
struct UUI_StormMode_Menu_NewRun_C_GetParentWidget_Params
{
public:
	class UWidget*                               WidgetParent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_StormMode_Menu_C*                  K2Node_DynamicCast_AsUI_Storm_Mode_Menu;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.HideWarningWindow
struct UUI_StormMode_Menu_NewRun_C_HideWarningWindow_Params
{
public:
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput;           // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ShowWarningWindow
struct UUI_StormMode_Menu_NewRun_C_ShowWarningWindow_Params
{
public:
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput;           // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_OnOpen_self_CastInput;                    // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetHasRunStartedFromPC
struct UUI_StormMode_Menu_NewRun_C_GetHasRunStartedFromPC_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1385[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_StormModeProgress            CallFunc_GetStormModeProgress_Progress;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3A (0x3A - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetHasRunStartedFromSave
struct UUI_StormMode_Menu_NewRun_C_GetHasRunStartedFromSave_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             Local_DefaultTime;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_Time;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_Started;                                     // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13C9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetSaveData
struct UUI_StormMode_Menu_NewRun_C_GetSaveData_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1401[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerSaveGame_C*                     SaveGameReference;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMapState_C*                           MapStateReference;                                 // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName_MapState;                                 // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4B (0x4B - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetShellShadesState
struct UUI_StormMode_Menu_NewRun_C_GetShellShadesState_Params
{
public:
	struct FStruct_ShellDyes                     Struct_ShellDyes;                                  // 0x0(0x6)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable;                                // 0x6(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable_1;                              // 0x7(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable_2;                              // 0x8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable_3;                              // 0x9(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable_4;                              // 0xA(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable_5;                              // 0xB(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value_1;                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value_2;                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1504[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value_3;                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_2;              // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_3;              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1514[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value_4;                         // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_4;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1519[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value_5;                         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_5;                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_4;             // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_5;             // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_4;              // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_5;              // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_ShellDyes                     K2Node_MakeStruct_Struct_ShellDyes;                // 0x45(0x6)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.HandleShellShade
struct UUI_StormMode_Menu_NewRun_C_HandleShellShade_Params
{
public:
	struct FStruct_ShellDyes                     ShadeState;                                        // 0x0(0x6)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_ShellDyes                     CallFunc_GetShellShadesState_Struct_ShellDyes;     // 0x6(0x6)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Header_Riposte_Visibility
struct UUI_StormMode_Menu_NewRun_C_Header_Riposte_Visibility_Params
{
public:
	enum class ESlateVisibility                  Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Selection;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15A3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_4;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Header_Weapon_Visibility
struct UUI_StormMode_Menu_NewRun_C_Header_Weapon_Visibility_Params
{
public:
	enum class ESlateVisibility                  Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Selection;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15ED[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_4;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Header_Shell_Visibility
struct UUI_StormMode_Menu_NewRun_C_Header_Shell_Visibility_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1628[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_4;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateDyes
struct UUI_StormMode_Menu_NewRun_C_UpdateDyes_Params
{
public:
	TArray<int32>                                Local_Indexes;                                     // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateIndexes_self_CastInput;             // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int32>                                CallFunc_GetUnlockedShadeDataForShell_Indices;     // 0x20(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class FText>                          CallFunc_GetUnlockedShadeDataForShell_Texts;       // 0x30(0x10)(ReferenceParm, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput;       // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ResetDyes
struct UUI_StormMode_Menu_NewRun_C_ResetDyes_Params
{
public:
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_Value_Reset_self_CastInput;               // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_DeactivateButton_self_CastInput;          // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateInfusionName
struct UUI_StormMode_Menu_NewRun_C_UpdateInfusionName_Params
{
public:
	enum class ERiposteTypes                     Infusion;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetInfusionNames_Name;                    // 0x8(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Sound_Confirming
struct UUI_StormMode_Menu_NewRun_C_Sound_Confirming_Params
{
public:
	float                                        PitchMin;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchMax;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VolumeMultiplier;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D (0x3D - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SaveStormModeToDisk_GPData
struct UUI_StormMode_Menu_NewRun_C_SaveStormModeToDisk_GPData_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue;          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.PrepareMapStateForNewRun
struct UUI_StormMode_Menu_NewRun_C_PrepareMapStateForNewRun_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_174C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FMapSaveState>      Temp_name_Variable;                                // 0x8(0x50)(None)
};

// 0x334 (0x334 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.PrepareGPDataForNewRun
struct UUI_StormMode_Menu_NewRun_C_PrepareGPDataForNewRun_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Local_UnlockedItems;                               // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_17FF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Local_Transform;                                   // 0x20(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class FName                                  Local_StartPoint;                                  // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_StormModeSeeds                Local_Seeds;                                       // 0x58(0x28)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Local_LoadedQuickSlots;                            // 0x80(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<class FName, int32>                     Local_LoadedNamedInts;                             // 0x90(0x50)(Edit, BlueprintVisible)
	TArray<struct FInventoryItem>                Local_Inventory;                                   // 0xE0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<class FName, class FName>               Local_DefaultNamedNames;                           // 0xF0(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x148(0x10)(ReferenceParm, HasGetValueTypeHash)
	TMap<class FName, int32>                     CallFunc_ShouldRemove10KTar_ReturnValue;           // 0x158(0x50)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1815[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x1B0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GoldenPathDialogueCounterName_PCIntName;  // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x1C4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_181D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_MilestoneUnlock               CallFunc_GetDataTableRowFromName_OutRow;           // 0x1D0(0x71)(HasGetValueTypeHash)
	uint8                                        Pad_1823[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1828[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x251(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x252(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x253(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x255(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1834[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_1;                              // 0x258(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryItem>                CallFunc_StormMode_ResetInventory_Return;          // 0x260(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_StormMode_AddWeaponToInventory_Success;   // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_183D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryItem>                CallFunc_StormMode_AddWeaponToInventory_ReturnValue; // 0x278(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1840[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_RandomizeStartPoint_Fallgrim_MainMenu_ID; // 0x28C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1842[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_RandomizeStartPoint_Fallgrim_MainMenu_Transform; // 0x2A0(0x30)(IsPlainOldData, NoDestructor)
	struct FStruct_StormModeSeeds                CallFunc_Seed_GenerateAll_Seed_All;                // 0x2D0(0x28)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x2F8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_HandleStartingRiposte_ReturnValue;        // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x308(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x310(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x314(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x318(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x328(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x32C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ResetSeedCurrent
struct UUI_StormMode_Menu_NewRun_C_ResetSeedCurrent_Params
{
public:
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x0(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18D2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput;       // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.CreateSeedCurrent
struct UUI_StormMode_Menu_NewRun_C_CreateSeedCurrent_Params
{
public:
	int32                                        Local_Seed;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_191A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_192B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x28(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Seed_ApplyInitial_Seed;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Seed_GenerateInitial_Seed;                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1939[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput;       // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ResetWeaponSelection
struct UUI_StormMode_Menu_NewRun_C_ResetWeaponSelection_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;   // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateWeaponName
struct UUI_StormMode_Menu_NewRun_C_UpdateWeaponName_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x31 (0x31 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ResetCharacterSelection
struct UUI_StormMode_Menu_NewRun_C_ResetCharacterSelection_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;   // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ResetButtonsHighlight
struct UUI_StormMode_Menu_NewRun_C_ResetButtonsHighlight_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;   // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateCharName
struct UUI_StormMode_Menu_NewRun_C_UpdateCharName_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x48 (0x48 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SetParentRef
struct UUI_StormMode_Menu_NewRun_C_SetParentRef_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B2C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;   // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B33[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   K2Node_MakeArray_Array;                            // 0x38(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x3E (0x3E - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Navigate_Up_Down
struct UUI_StormMode_Menu_NewRun_C_Navigate_Up_Down_Params
{
public:
	bool                                         CustomIndex;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SkipIndexCheck;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SkipSound;                                         // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BB1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Delta;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           Local_Button;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_Delta;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_SelectedIndex;                               // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_SkipSound;                                   // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_SkipIndexCheck;                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_CustomIndex;                                 // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BC6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetButtonWidgetFromIndex_Output;          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BCF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC9 (0xC9 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Navigate_Left_Right
struct UUI_StormMode_Menu_NewRun_C_Navigate_Left_Right_Params
{
public:
	bool                                         CustomIndex;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SkipIndexCheck;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SkipSound;                                         // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CB8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Delta;                                             // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Local_SelectedButton;                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Local_Button;                                      // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_Delta;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_SelectedIndex;                               // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_SkipSound;                                   // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_SkipIndexCheck;                              // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_CustomIndex;                                 // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CDE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   CallFunc_GetCurrentButtons_ReturnValue;            // 0x40(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CF9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetIndexFromButton_ReturnValue;           // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;   // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D1E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetButtonWidgetFromIndex_Output;          // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D2E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1; // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsButtonEnabled_Enabled_;                 // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0xB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2; // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavigationRight
struct UUI_StormMode_Menu_NewRun_C_NavigationRight_Params
{
public:
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_Value_Next_self_CastInput;                // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavigationLeft
struct UUI_StormMode_Menu_NewRun_C_NavigationLeft_Params
{
public:
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_Value_Previous_self_CastInput;            // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavigationBack
struct UUI_StormMode_Menu_NewRun_C_NavigationBack_Params
{
public:
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_DeactivateButton_self_CastInput;          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_DeactivateButton_self_CastInput_1;        // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput;           // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_1;         // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyUnlockedShadeForShell_ReturnValue;  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_ActivateButton_self_CastInput;            // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E71[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StormMode_Menu_C*                  K2Node_DynamicCast_AsUI_Storm_Mode_Menu;           // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateLastIndex
struct UUI_StormMode_Menu_NewRun_C_UpdateLastIndex_Params
{
public:
	TArray<class UUserWidget*>                   CallFunc_GetCurrentButtons_ReturnValue;            // 0x0(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SetButtons
struct UUI_StormMode_Menu_NewRun_C_SetButtons_Params
{
public:
	TArray<class UUserWidget*>                   K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   K2Node_MakeArray_Array_1;                          // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   K2Node_MakeArray_Array_2;                          // 0x20(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   K2Node_MakeArray_Array_3;                          // 0x30(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   K2Node_MakeArray_Array_4;                          // 0x40(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetButtonWidgetFromIndex
struct UUI_StormMode_Menu_NewRun_C_GetButtonWidgetFromIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F35[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           Output;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   CallFunc_GetCurrentButtons_ReturnValue;            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetCurrentButtons
struct UUI_StormMode_Menu_NewRun_C_GetCurrentButtons_Params
{
public:
	TArray<class UUserWidget*>                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   K2Node_Select_Default;                             // 0x18(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnSettingConfirmed
struct UUI_StormMode_Menu_NewRun_C_OnSettingConfirmed_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnWeaponSelected
struct UUI_StormMode_Menu_NewRun_C_OnWeaponSelected_Params
{
public:
	enum class EComboTypes                       Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnCharacterSelected
struct UUI_StormMode_Menu_NewRun_C_OnCharacterSelected_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnWeaponHighlighted
struct UUI_StormMode_Menu_NewRun_C_OnWeaponHighlighted_Params
{
public:
	enum class EComboTypes                       Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnCharacterHighlighted
struct UUI_StormMode_Menu_NewRun_C_OnCharacterHighlighted_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SetParentWidget
struct UUI_StormMode_Menu_NewRun_C_SetParentWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SetSeedManager
struct UUI_StormMode_Menu_NewRun_C_SetSeedManager_Params
{
public:
	class ABP_SeedManager_C*                     SeedManager;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SetSaveGameRef
struct UUI_StormMode_Menu_NewRun_C_SetSaveGameRef_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerSaveGame_C*                     SaveGame;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMapState_C*                           MapStateSaveGame;                                  // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName_MapState;                                 // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnRiposteHighlighted
struct UUI_StormMode_Menu_NewRun_C_OnRiposteHighlighted_Params
{
public:
	enum class ERiposteTypes                     Riposte;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnRiposteSelected
struct UUI_StormMode_Menu_NewRun_C_OnRiposteSelected_Params
{
public:
	enum class ERiposteTypes                     Riposte;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnButtonHovered
struct UUI_StormMode_Menu_NewRun_C_OnButtonHovered_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.BndEvt__UI_StormMode_Menu_ShadeButton_K2Node_ComponentBoundEvent_5_OnSettingConfirmed__DelegateSignature
struct UUI_StormMode_Menu_NewRun_C_BndEvt__UI_StormMode_Menu_ShadeButton_K2Node_ComponentBoundEvent_5_OnSettingConfirmed__DelegateSignature_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ExecuteUbergraph_UI_StormMode_Menu_NewRun
struct UUI_StormMode_Menu_NewRun_C_ExecuteUbergraph_UI_StormMode_Menu_NewRun_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EComboTypes                       K2Node_Event_Weapon_1;                             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       K2Node_Event_Character_1;                          // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyUnlockedShadeForShell_ReturnValue;  // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EComboTypes                       K2Node_Event_Weapon;                               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       K2Node_Event_Character;                            // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23E0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetWeaponNames_ReturnValue;               // 0x20(0x18)(None)
	TArray<int32>                                CallFunc_GetUnlockedShadeDataForShell_Indices;     // 0x38(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class FText>                          CallFunc_GetUnlockedShadeDataForShell_Texts;       // 0x48(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        K2Node_Event_Value;                                // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetButtonWidgetFromIndex_Output;          // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1; // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2403[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Event_Widget_1;                             // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SeedManager_C*                     K2Node_Event_SeedManager;                          // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Slot;                                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_240B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerSaveGame_C*                     K2Node_Event_SaveGame;                             // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_SlotName;                             // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UMapState_C*                           K2Node_Event_MapStateSaveGame;                     // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_SlotName_MapState;                    // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetHasRunStartedFromSave_ReturnValue;     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetHasRunStartedFromPC_ReturnValue;       // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2425[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_NavBack_self_CastInput;                   // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_NavConfirm_self_CastInput;                // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_NavLeft_self_CastInput;                   // 0xF0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_NavRight_self_CastInput;                  // 0x100(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput;           // 0x110(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ERiposteTypes                     K2Node_Event_Riposte_1;                            // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERiposteTypes                     K2Node_Event_Riposte;                              // 0x123(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyUnlockedShadeForShell_ReturnValue_1; // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2441[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetShellNameSimple_ShellName;             // 0x128(0x18)(None)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_1;         // 0x140(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_2;         // 0x150(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                           K2Node_Event_Widget;                               // 0x160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_ActivateButton_self_CastInput;            // 0x168(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_ActivateButton_self_CastInput_1;          // 0x178(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_ActivateButton_self_CastInput_2;          // 0x188(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_DeactivateButton_self_CastInput;          // 0x198(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_ComponentBoundEvent_Value;                  // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item;                           // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


