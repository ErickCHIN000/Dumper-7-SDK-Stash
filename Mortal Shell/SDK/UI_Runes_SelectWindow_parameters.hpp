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

// 0x70 (0x70 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.GetSisterDialogue
struct UUI_Runes_SelectWindow_C_GetSisterDialogue_Params
{
public:
	TArray<struct FDHDialogueLine>               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2197[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHDialogueLine>               K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_219A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDHDialogueLine                       CallFunc_GetDialogueToTrigger_Output;              // 0x30(0x20)(None)
	TArray<struct FDHDialogueLine>               K2Node_MakeArray_Array_1;                          // 0x50(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               K2Node_Select_Default;                             // 0x60(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.HasDarkShellsDialogue?
struct UUI_Runes_SelectWindow_C_HasDarkShellsDialogue__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_BossDial_DarkShells_PCIntName;            // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BossDial_DarkShells_PCIntName_1;          // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BossDial_DarkShells_PCIntName_2;          // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.IncrementSeedProgress
struct UUI_Runes_SelectWindow_C_IncrementSeedProgress_Params
{
public:
	class FName                                  CallFunc_SeedProgressID_ID;                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x198 (0x198 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.HandleSeed
struct UUI_Runes_SelectWindow_C_HandleSeed_Params
{
public:
	class FName                                  Temp_name_Variable;                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_4;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_5;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_6;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2244[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x48(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_2245[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2249[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_SeedProgressID_ID;                        // 0x184(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default;                             // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.HasBossDialogue?
struct UUI_Runes_SelectWindow_C_HasBossDialogue__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_BossDial_Cathedral_PCIntName;             // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BossDial_Cathedral_PCIntName_1;           // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BossDial_Cathedral_PCIntName_2;           // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloat_ReturnValue;                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22C9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_BossDial_Crypt_PCIntName;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BossDial_Crypt_PCIntName_1;               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BossDial_Crypt_PCIntName_2;               // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value_1;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_BossDial_Fire_PCIntName;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface;     // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EComboTypes                       CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon;    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22F4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_BossDial_Fire_PCIntName_1;                // 0x6C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BossDial_Fire_PCIntName_2;                // 0x74(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value_2;                    // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_2;                 // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.GetBossDialogueToTrigger
struct UUI_Runes_SelectWindow_C_GetBossDialogueToTrigger_Params
{
public:
	struct FDHDialogueLine                       Output;                                            // 0x0(0x20)(Parm, OutParm)
};

// 0xAC (0xAC - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.IncrementGoldenPathDialogueIndex
struct UUI_Runes_SelectWindow_C_IncrementGoldenPathDialogueIndex_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface;        // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1;      // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23D2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName_1; // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GoldenPathDialogueCounterName_PCIntName;  // 0xA4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.GetDialogueChance
struct UUI_Runes_SelectWindow_C_GetDialogueChance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_4;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.GetDialogueCurrentIndex
struct UUI_Runes_SelectWindow_C_GetDialogueCurrentIndex_Params
{
public:
	class FName                                  CallFunc_GoldenPathDialogueCounterName_PCIntName;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value_1;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.GetDialogueToTrigger
struct UUI_Runes_SelectWindow_C_GetDialogueToTrigger_Params
{
public:
	struct FDHDialogueLine                       Output;                                            // 0x0(0x20)(Parm, OutParm)
};

// 0x40 (0x40 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.PopulateWindow
struct UUI_Runes_SelectWindow_C_PopulateWindow_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface;     // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_StormMode_C*               CallFunc_GetControllerAsStormModePC_StormModePC;   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInputEnabled_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetGamePaused_ReturnValue;                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Sound_BackgroundMusic_FadeIn
struct UUI_Runes_SelectWindow_C_Sound_BackgroundMusic_FadeIn_Params
{
public:
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Get_Text_BonusHeader
struct UUI_Runes_SelectWindow_C_Get_Text_BonusHeader_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_254F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	TArray<class FName>                          CallFunc_GetSpecialRunesIDs_IDs;                   // 0x50(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2559[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x68(0x18)(None)
};

// 0xB8 (0xB8 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Get_Text_TopHeader
struct UUI_Runes_SelectWindow_C_Get_Text_TopHeader_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x40(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x58(0x18)(None)
	TArray<class FName>                          CallFunc_GetOpenAreasRuneIDs_IDs;                  // 0x70(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_2;             // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x88(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0xA0(0x18)(None)
};

// 0x15 (0x15 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.CallOnRuneSelected
struct UUI_Runes_SelectWindow_C_CallOnRuneSelected_Params
{
public:
	enum class Enum_Rune_Category                Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_2;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_3;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_4;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_5;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_6;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_7;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_8;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_9;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_10;                             // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_11;                             // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_12;                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_13;                             // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_14;                             // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_15;                             // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_16;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_17;                             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Temp_byte_Variable_18;                             // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Rune_Category_Randomizer     K2Node_Select_Default;                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.GiveBonusRune
struct UUI_Runes_SelectWindow_C_GiveBonusRune_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2797[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;          // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character;     // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;          // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Navigation_GetIndex
struct UUI_Runes_SelectWindow_C_Navigation_GetIndex_Params
{
public:
	int32                                        SelectedIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Delta;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6D (0x6D - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Navigation_UpDown
struct UUI_Runes_SelectWindow_C_Navigation_UpDown_Params
{
public:
	bool                                         UseWidget;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CustomIndex;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SkipIndexCheck;                                    // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SkipSound;                                         // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Delta;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Rune_Selected_C*                   Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2934[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Rune_Selected_C*                   Local_Widget;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_UseWidget;                                   // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_CustomIndex;                                 // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_SkipIndexCheck;                              // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_SkipSound;                                   // 0x23(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Local_Delta;                                       // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_IndexSelected;                               // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Navigation_GetIndex_ReturnValue;          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_295B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2987[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Rune_Selected_C*                   CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2996[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Rune_Selected_C*                   CallFunc_Array_Get_Item_1;                         // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.SetRuneButtons
struct UUI_Runes_SelectWindow_C_SetRuneButtons_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A2D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Rune_Selected_C*                   K2Node_DynamicCast_AsUI_Rune_Selected;             // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.NavConfirm_Listen
struct UUI_Runes_SelectWindow_C_NavConfirm_Listen_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.NavUp_Listen
struct UUI_Runes_SelectWindow_C_NavUp_Listen_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.NavDown_Listen
struct UUI_Runes_SelectWindow_C_NavDown_Listen_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.OnButtonHovered
struct UUI_Runes_SelectWindow_C_OnButtonHovered_Params
{
public:
	class UUI_Rune_Selected_C*                   Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.OnButtonClicked
struct UUI_Runes_SelectWindow_C_OnButtonClicked_Params
{
public:
	class UUI_Rune_Selected_C*                   Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.On_Rune_Selected
struct UUI_Runes_SelectWindow_C_On_Rune_Selected_Params
{
public:
	struct FStruct_Rune                          Rune;                                              // 0x0(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.BndEvt__UI_ControllerButton_Continue_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
struct UUI_Runes_SelectWindow_C_BndEvt__UI_ControllerButton_Continue_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
{
public:
	class UUI_ControllerButton_C*                ControllerButton;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x258 (0x258 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.ExecuteUbergraph_UI_Runes_SelectWindow
struct UUI_Runes_SelectWindow_C_ExecuteUbergraph_UI_Runes_SelectWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D2D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StormMode_DebugDialogues_Debug_;          // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value; // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetDialogueChance_ReturnValue;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x60(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_GetDialogueChance_ReturnValue_1;          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D60[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x78(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x8C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x9C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_1; // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasBossDialogue__ReturnValue;             // 0xAE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D73[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloat_ReturnValue;                  // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xB7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_2; // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasDarkShellsDialogue__ReturnValue;       // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D8B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Rune_Selected_C*                   K2Node_CustomEvent_Widget_1;                       // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Rune_Selected_C*                   K2Node_CustomEvent_Widget;                         // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;          // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_3; // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DA1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_StormMode_C*               CallFunc_GetControllerAsStormModePC_StormModePC;   // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface;     // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetGamePaused_ReturnValue;                // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DC6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          K2Node_CustomEvent_Rune;                           // 0x128(0xD0)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1F8(0x10)(ZeroConstructor, NoDestructor)
	class UUI_Rune_Selected_C*                   CallFunc_Array_Get_Item;                           // 0x208(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_4; // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x212(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_5; // 0x213(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x215(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DF6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x228(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               CallFunc_GetSisterDialogue_ReturnValue;            // 0x240(0x10)(ReferenceParm, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                K2Node_ComponentBoundEvent_ControllerButton;       // 0x250(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.OnSeedFound__DelegateSignature
struct UUI_Runes_SelectWindow_C_OnSeedFound__DelegateSignature_Params
{
public:
	class FName                                  SeedID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.OnRuneSelected__DelegateSignature
struct UUI_Runes_SelectWindow_C_OnRuneSelected__DelegateSignature_Params
{
public:
	enum class Enum_Rune_Category_Randomizer     Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ID;                                                // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


