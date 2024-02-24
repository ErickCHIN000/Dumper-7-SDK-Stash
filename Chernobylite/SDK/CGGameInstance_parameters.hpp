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

// 0x3A (0x3A - 0x0)
// Function CGGameInstance.CGGameInstance_C.InitTMPDecorationsEnabled
struct UCGGameInstance_C_InitTMPDecorationsEnabled_Params
{
public:
	bool                                         CallFunc_K2_GetEnabledGlobalSkin_OutSuccess;       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2649[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGlobalSkinInfo                       CallFunc_K2_GetEnabledGlobalSkin_ReturnValue;      // 0x8(0x30)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CGGameInstance.CGGameInstance_C.TMP_UpdateDecoration
struct UCGGameInstance_C_TMP_UpdateDecoration_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function CGGameInstance.CGGameInstance_C.IsPropertyLinkGM
struct UCGGameInstance_C_IsPropertyLinkGM_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                        Pad_26B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_GM_PropertyLinkDump_C*             K2Node_DynamicCast_AsBp_GM_Property_Link_Dump;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function CGGameInstance.CGGameInstance_C.AwardExperienceForNote
struct UCGGameInstance_C_AwardExperienceForNote_Params
{
public:
	class FName                                  BoardID;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CustomExpHandle;                                   // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FDataTableRowHandle                   EmptyEventObject;                                  // 0x18(0x10)(Edit, BlueprintVisible, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function CGGameInstance.CGGameInstance_C.CreateLoadingBar
struct UCGGameInstance_C_CreateLoadingBar_Params
{
public:
	class UWid_Loading_ProgressBar_C*            Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInViewport_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2768[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Loading_ProgressBar_C*            CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function CGGameInstance.CGGameInstance_C.KeyNameToEnum
struct UCGGameInstance_C_KeyNameToEnum_Params
{
public:
	class FString                                KeyName;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	enum class Enum_Buttons_PC                   Value;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PC                   Temp_byte_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2839[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2842[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_284D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2859[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PC                   CallFunc_Map_Find_Value;                           // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Buttons_PC                   K2Node_Select_Default;                             // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetIndoorLightingSetups
struct UCGGameInstance_C_GetIndoorLightingSetups_Params
{
public:
	TArray<class Aba_IndoorLightingSetup_01_C*>  Output;                                            // 0x0(0x10)(Parm, OutParm)
	TArray<class Aba_IndoorLightingSetup_01_C*>  _afterclean;                                       // 0x10(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_IndoorLightingSetup_01_C*          CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28FF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function CGGameInstance.CGGameInstance_C.AddIndoorLightingSetup
struct UCGGameInstance_C_AddIndoorLightingSetup_Params
{
public:
	class Aba_IndoorLightingSetup_01_C*          IndoorLightingSetup_;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_292E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function CGGameInstance.CGGameInstance_C.CalculateTimeUntilStorm
struct UCGGameInstance_C_CalculateTimeUntilStorm_Params
{
public:
	int32                                        DevicesOffset;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InMinutes;                                         // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InSeconds;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinimumStormDuration;                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NormalStormDuration;                               // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartingDuration;                                  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartingDurationInMinutes;                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDifficultyModifier_ReturnValue;        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDifficultyModifier_ReturnValue_1;      // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDifficultyModifier_ReturnValue_2;      // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDifficultyModifier_ReturnValue_3;      // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDifficultyModifier_ReturnValue_4;      // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_3;          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetWeatherCPP
struct UCGGameInstance_C_GetWeatherCPP_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetWeather_TodaysWeather;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x328 (0x328 - 0x0)
// Function CGGameInstance.CGGameInstance_C.PrintResourcesOnLevelImpl
struct UCGGameInstance_C_PrintResourcesOnLevelImpl_Params
{
public:
	TMap<class FName, float>                     Map;                                               // 0x0(0x50)(Edit, BlueprintVisible)
	TMap<class FName, float>                     K2Node_MakeVariable_MakeVariableOutput;            // 0x50(0x50)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0xD0(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCurrentPersistantLevel_ReturnValue;    // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_GetMapEnumByName_ReturnValue;             // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B38[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FResourcesForMap                      CallFunc_Map_Find_Value;                           // 0x118(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value_1;                         // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EResourceType>             CallFunc_Map_Keys_Keys_1;                          // 0x188(0x10)(ReferenceParm)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x198(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EResourceType                     CallFunc_Array_Get_Item_1;                         // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x1C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value_2;                         // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x1E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x1E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x1F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EResourceType                     CallFunc_Array_Get_Item_2;                         // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x210(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetEnumeratorName_ReturnValue;            // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x228(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x238(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0x248(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x258(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x270(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_CullSpacesFromA_String_ReturnValue;       // 0x280(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x290(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value_3;                         // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x2AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Map_Find_Value_4;                         // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_4;                   // 0x2B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_2;         // 0x2C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x2D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BA4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x2F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BB0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_PickableItem_00_Distributor_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x2F8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BC0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PickableItem_00_Distributor_C*     CallFunc_Array_Get_Item_3;                         // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BD7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Map_Find_Value_5;                         // 0x31C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_5;                   // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function CGGameInstance.CGGameInstance_C.TestResources
struct UCGGameInstance_C_TestResources_Params
{
public:
	TMap<class FName, float>                     Resources;                                         // 0x0(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x60(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value;                           // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C95[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PickableItem_00_Distributor_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0xE8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PickableItem_00_Distributor_C*     CallFunc_Array_Get_Item_1;                         // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CA5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Map_Find_Value_1;                         // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function CGGameInstance.CGGameInstance_C.Recalculate and Update Storm Time Duration
struct UCGGameInstance_C_Recalculate_and_Update_Storm_Time_Duration_Params
{
public:
	float                                        StartingDurationInMinutes;                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDifficultyModifier_ReturnValue;        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDifficultyModifier_ReturnValue_1;      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDifficultyModifier_ReturnValue_2;      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGGameModeBase*                       CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetDayKozlovQuestEnded
struct UCGGameInstance_C_GetDayKozlovQuestEnded_Params
{
public:
	int32                                        DayKozlovQuestEnded;                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CGGameInstance.CGGameInstance_C.SetDayKozlovQuestEnded
struct UCGGameInstance_C_SetDayKozlovQuestEnded_Params
{
public:
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x26 (0x26 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ReloadGameSave
struct UCGGameInstance_C_ReloadGameSave_Params
{
public:
	enum class EReloadGameType                   SaveType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CustomSave;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetCustomSaveNames_ReturnValue;           // 0x10(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4C (0x4C - 0x0)
// Function CGGameInstance.CGGameInstance_C.SetDialogueStartAsUsed
struct UCGGameInstance_C_SetDialogueStartAsUsed_Params
{
public:
	class Aba_ch_npc_00_C*                       Companion;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DialogueStart;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          NewArray;                                          // 0x10(0x10)(Edit, BlueprintVisible)
	struct FSavedNameArray                       CallFunc_Map_Find_Value;                           // 0x20(0x10)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DBF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedNameArray                       K2Node_MakeStruct_SavedNameArray;                  // 0x38(0x10)(UObjectWrapper)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetRandomUnusedDialogueStart
struct UCGGameInstance_C_GetRandomUnusedDialogueStart_Params
{
public:
	class Aba_ch_npc_00_C*                       Companion;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Dialogue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurrentRandomDialogue;                             // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          RandomDialgoues;                                   // 0x20(0x10)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E14[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedNameArray                       CallFunc_Map_Find_Value;                           // 0x40(0x10)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue; // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetAdjustedSoldierEventLevel
struct UCGGameInstance_C_GetAdjustedSoldierEventLevel_Params
{
public:
	bool                                         SkipLevelModifiers;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCustomSoldierEventLevel_ReturnValue;   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsCustomSoldierEventLevelEnabled_ReturnValue; // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E53[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentSoldierEventLevel_ReturnValue;  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function CGGameInstance.CGGameInstance_C.SpendSkillPoints
struct UCGGameInstance_C_SpendSkillPoints_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CGGameInstance.CGGameInstance_C.DebugToggleViewableObjectVisibility
struct UCGGameInstance_C_DebugToggleViewableObjectVisibility_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ApplyTimelinesDebugPermanentData
struct UCGGameInstance_C_ApplyTimelinesDebugPermanentData_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 CallFunc_Map_Values_Values;                        // 0x10(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_Get_Item;                           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2ECA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2ED1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x48(0x10)(NoDestructor, UObjectWrapper)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetWeather
struct UCGGameInstance_C_GetWeather_Params
{
public:
	class FName                                  TodaysWeather;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function CGGameInstance.CGGameInstance_C.SetWeather
struct UCGGameInstance_C_SetWeather_Params
{
public:
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F1F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F23[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue; // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x5C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_Calendar                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x68(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F2C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x108 (0x108 - 0x0)
// Function CGGameInstance.CGGameInstance_C.Companion add or substract Loyalty
struct UCGGameInstance_C_Companion_add_or_substract_Loyalty_Params
{
public:
	class FName                                  Companion;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Mod;                                               // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DecisionID;                                        // 0xC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DontShowLoyalityFrame;                             // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ERelationshipStatusType           NewStatus;                                         // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F8F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           LogVariableHandle;                                 // 0x18(0x10)(Edit, BlueprintVisible)
	float                                        PreviousLoyalty;                                   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        New_Loyality;                                      // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                Dummy;                                             // 0x30(0x10)(Edit, BlueprintVisible)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x40(0x10)(NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F9D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_1;            // 0x58(0x10)(NoDestructor, UObjectWrapper)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_2;            // 0x68(0x10)(NoDestructor)
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array;                            // 0x78(0x10)(ReferenceParm)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_3;            // 0x88(0x10)(NoDestructor)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_OnScreenFrameInformation_C*       CallFunc_GetOnScreenLogQueue_OnScreenFrameQueue;   // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FAE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue_1;        // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_1;      // 0xC6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_2;      // 0xC7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_3;      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_4;      // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_5;      // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FB6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionLoyaltyRevertInfo           K2Node_MakeStruct_CompanionLoyaltyRevertInfo;      // 0xCC(0x14)(NoDestructor, UObjectWrapper)
	float                                        CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue; // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_4;            // 0xF8(0x10)(NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function CGGameInstance.CGGameInstance_C.IsBenchmark
struct UCGGameInstance_C_IsBenchmark_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGm_Benchmark_C*                       K2Node_DynamicCast_AsGm_Benchmark;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x95 (0x95 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetPhysMaterialtoAkSwitchMapping
struct UCGGameInstance_C_GetPhysMaterialtoAkSwitchMapping_Params
{
public:
	class UPhysicalMaterial*                     Key;                                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Value;                                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Map_Find_Value;                           // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3028[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x40(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_302C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_PhysMaterialValueMapping      CallFunc_GetDataTableRowFromName_OutRow;           // 0x60(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3032[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_Array_Get_Item_1;                         // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11A (0x11A - 0x0)
// Function CGGameInstance.CGGameInstance_C.OpenPauseMenu
struct UCGGameInstance_C_OpenPauseMenu_Params
{
public:
	class UWid_MainMenu_02_C*                    CallFunc_Create_ReturnValue;                       // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWid_WorkshopUI_Main_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3097[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_WorkshopUI_Main_C*                CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_WorkshopUI_Main_C*                K2Node_DynamicCast_AsWid_Workshop_UI_Main;         // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3099[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_Crafting_Base_02_C*                K2Node_DynamicCast_AsBa_Crafting_Base_02;          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_309A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_309D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGMovementState>          CallFunc_GetCurrentMovementState_ReturnValue;      // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_BuildSystem_C*                     K2Node_DynamicCast_AsBp_Build_System;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_pda_MainView_C*                   K2Node_DynamicCast_AsWid_Pda_Main_View;            // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPdaInput>            CallFunc_InputForceLeave_self_CastInput;           // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UWid_MainMenu_02_C*>            CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0xB8(0x10)(ReferenceParm, ContainsInstancedReference)
	TSubclassOf<class ACGMovementState>          CallFunc_GetCurrentMovementState_ReturnValue_1;    // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWid_MainMenu_02_C*                    CallFunc_Array_Get_Item_1;                         // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_2;      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_3;      // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_4;      // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_5;      // 0xDB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_6;      // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xDD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_7;      // 0xDE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_8;      // 0xDF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_9;      // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_10;     // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_11;     // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_12;     // 0xE3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_13;     // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_14;     // 0xE5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_15;     // 0xE6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_16;     // 0xE7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0xEE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0xEF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30C8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5; // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_7;                  // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30CA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6; // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_8;                  // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_9;                  // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_10;                 // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x113(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_11;                 // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_12;                 // 0x115(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_13;                 // 0x116(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_14;                 // 0x117(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_15;                 // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_16;                 // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x72 (0x72 - 0x0)
// Function CGGameInstance.CGGameInstance_C.CheckIfCompanionHasSomethingImportantToSay
struct UCGGameInstance_C_CheckIfCompanionHasSomethingImportantToSay_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Has;                                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HasSomethingImporntantToSay;                       // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30FD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDayPart                          CallFunc_GetDayPart_ReturnValue;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3100[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Map_Find_Value;                           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3102[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x48(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3103[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function CGGameInstance.CGGameInstance_C.SpendSp
struct UCGGameInstance_C_SpendSp_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3117[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2CC (0x2CC - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetKnownInvestigationBoards
struct UCGGameInstance_C_GetKnownInvestigationBoards_Params
{
public:
	TArray<class FName>                          Return;                                            // 0x0(0x10)(Parm, OutParm)
	TArray<class FName>                          ReorderedBoards;                                   // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          DiscoveredBoards;                                  // 0x20(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x40(0x10)(ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_314E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x58(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3155[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3159[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_StoryNoteInfoStructure            CallFunc_GetDataTableRowFromName_OutRow;           // 0x90(0x208)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x29A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_315D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x2A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3162[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CGGameInstance.CGGameInstance_C.InitiateBuildingSystem
struct UCGGameInstance_C_InitiateBuildingSystem_Params
{
public:
	bool                                         CallFunc_BuildSystemInit_ReturnValue;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetExpForLevel
struct UCGGameInstance_C_GetExpForLevel_Params
{
public:
	bool                                         CustomLevelInsteadOfCurrent;                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_318A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomLevel;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_318C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetRequiredExperiencePerLevel_ReturnValue; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function CGGameInstance.CGGameInstance_C.RemoveCurveAnimatedWidget
struct UCGGameInstance_C_RemoveCurveAnimatedWidget_Params
{
public:
	class UWidget*                               Key;                                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_WidgetCurveAnimation_Parent_C*     Value;                                             // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_WidgetCurveAnimation_Parent_C*     CallFunc_Map_Find_Value;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function CGGameInstance.CGGameInstance_C.AddCurveAnimatedWidget
struct UCGGameInstance_C_AddCurveAnimatedWidget_Params
{
public:
	class UWidget*                               Key;                                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_WidgetCurveAnimation_Parent_C*     Value;                                             // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_WidgetCurveAnimation_Parent_C*     CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function CGGameInstance.CGGameInstance_C.SetQuestCheckpoint
struct UCGGameInstance_C_SetQuestCheckpoint_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Reached;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetQuestCheckpoint
struct UCGGameInstance_C_GetQuestCheckpoint_Params
{
public:
	class FName                                  CheckpointName;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckpointReached;                                 // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_Value;                           // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetCurrentMaxCompanions
struct UCGGameInstance_C_GetCurrentMaxCompanions_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetKnownRecipes
struct UCGGameInstance_C_GetKnownRecipes_Params
{
public:
	TArray<class FName>                          KnownRecipes;                                      // 0x0(0x10)(Parm, OutParm)
	TArray<class FName>                          Return;                                            // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          CallFunc_GetAvaiableRecipies_ReturnValue;          // 0x20(0x10)(ReferenceParm)
};

// 0x39 (0x39 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetAttitudeTowardsStimuli
struct UCGGameInstance_C_GetAttitudeTowardsStimuli_Params
{
public:
	class FName                                  PersonsName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_MoraleStimulant              Stimulus;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_AttitudeTowards              ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_320A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_MoraleStimuliPreferencesMap       CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_AttitudeTowards              Temp_byte_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_AttitudeTowards              Temp_byte_Variable_1;                              // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_AttitudeTowards              Temp_byte_Variable_2;                              // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_AttitudeTowards              K2Node_Select_Default;                             // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_AttitudeTowards              K2Node_Select_Default_1;                           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetMoraleBonus
struct UCGGameInstance_C_GetMoraleBonus_Params
{
public:
	class FName                                  PersonsName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Value;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value;                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x299 (0x299 - 0x0)
// Function CGGameInstance.CGGameInstance_C.RecountInfluencers
struct UCGGameInstance_C_RecountInfluencers_Params
{
public:
	TArray<struct FInfluencerComponentValue>     ValuesToConsider2;                                 // 0x0(0x10)(Edit, BlueprintVisible)
	TMap<enum class Enum_MoraleStimulant, float> CurrentlyIteratedMoraleInfluencers;                // 0x10(0x50)(Edit, BlueprintVisible)
	TMap<enum class Enum_MoraleStimulant, float> MoraleInfluenceToConsider;                         // 0x60(0x50)(Edit, BlueprintVisible)
	TMap<enum class EInfluenceTargets, float>    ValueRemap;                                        // 0xB0(0x50)(Edit, BlueprintVisible)
	class Aba_InfluencerComponent_C*             CurrentlyIteratedInfluencer;                       // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x11B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class Enum_MoraleStimulant>      CallFunc_Map_Keys_Keys;                            // 0x128(0x10)(ReferenceParm)
	float                                        Temp_float_Variable;                               // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class Enum_MoraleStimulant, float> K2Node_MakeVariable_MakeVariableOutput;            // 0x140(0x50)(None)
	bool                                         CallFunc_GetisInfluencingActive_Output_Get;        // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class Enum_MoraleStimulant, float> K2Node_MakeVariable_MakeVariableOutput_1;          // 0x198(0x50)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_MoraleStimulant              CallFunc_Array_Get_Item;                           // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInfluencerComponentValue             CallFunc_Array_Get_Item_1;                         // 0x220(0x8)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Map_Find_Value;                           // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3302[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Map_Find_Value_1;                         // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3307[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_PowerManagmentGetLimit_ReturnValue;       // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PowerManagmentRemoveFromLimit_ReturnValue; // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3312[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value_2;                         // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_331D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PowerManagmentAddToLimit_ReturnValue;     // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3323[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue_1;                      // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3325[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class Aba_InfluencerComponent_C*>     CallFunc_GetAllActorsOfClass_OutActors;            // 0x270(0x10)(ReferenceParm)
	float                                        CallFunc_Map_Find_Value_3;                         // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x284(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3329[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_InfluencerComponent_C*             CallFunc_Array_Get_Item_2;                         // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function CGGameInstance.CGGameInstance_C.AddArrayOfCompletedQuests
struct UCGGameInstance_C_AddArrayOfCompletedQuests_Params
{
public:
	TArray<struct FMissionReportRequiredInformation> Person_who_completed_the_quest;                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  Completer;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3387[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionReportRequiredInformation     CallFunc_Array_Get_Item;                           // 0x28(0x40)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3389[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22D (0x22D - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetCompletedQuests
struct UCGGameInstance_C_GetCompletedQuests_Params
{
public:
	class FName                                  FilterByPerson;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RequireResult;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ApproximateResult;                                 // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionResult                    ResultFilter;                                      // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxCompletionAgeFilter;                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSt_CompletedQuestInfo>        Return_quests;                                     // 0x10(0x10)(Parm, OutParm)
	TArray<class FString>                        SerialisedStructure;                               // 0x20(0x10)(Edit, BlueprintVisible)
	struct FSt_CompletedQuestInfo                CurrentlyIteratedCompletedQuestInfo;               // 0x30(0x44)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_3401[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSt_CompletedQuestInfo>        CollectedQuests;                                   // 0x78(0x10)(Edit, BlueprintVisible)
	class FName                                  CurrentlyIteratedQuestName;                        // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3406[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_340B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_340E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_2;                         // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_2;           // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_340F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_3;                         // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3410[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x104(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3412[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_4;                         // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMissionReportRequiredInformation     K2Node_MakeStruct_MissionReportRequiredInformation; // 0x128(0x40)(UObjectWrapper)
	struct FSt_CompletedQuestInfo                K2Node_MakeStruct_st_CompletedQuestInfo;           // 0x168(0x44)(UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_3413[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3419[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x1C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1C7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x1CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x1CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3425[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x1DD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x1DE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3428[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x1E0(0x10)(ReferenceParm)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3429[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_5;                         // 0x1F4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_342A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Map_Find_Value;                           // 0x200(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_342B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x218(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x22C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x178 (0x178 - 0x0)
// Function CGGameInstance.CGGameInstance_C.AddCompletedQuest
struct UCGGameInstance_C_AddCompletedQuest_Params
{
public:
	struct FMissionReportRequiredInformation     Person_who_completed_the_quest;                    // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  Completer;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_345D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_CompletedQuestInfo                K2Node_MakeStruct_st_CompletedQuestInfo;           // 0x50(0x44)(UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_345E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_ByteToString_ReturnValue;            // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_ByteToString_ReturnValue_1;          // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function CGGameInstance.CGGameInstance_C.WasPersonDiscovered
struct UCGGameInstance_C_WasPersonDiscovered_Params
{
public:
	class FName                                  Input_Name;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AddIfNotDiscovered;                                // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Return;                                            // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function CGGameInstance.CGGameInstance_C.AddDiscoveredPerson
struct UCGGameInstance_C_AddDiscoveredPerson_Params
{
public:
	class FName                                  Input_Name;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x45 (0x45 - 0x0)
// Function CGGameInstance.CGGameInstance_C.CheckIfSquadMembersHealthMeetsCritiera
struct UCGGameInstance_C_CheckIfSquadMembersHealthMeetsCritiera_Params
{
public:
	class ACGSquadManager*                       Input_squad;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Comparsion;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3481[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3482[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACGSoldier*>                    CallFunc_GetSquadMembers_ReturnValue;              // 0x18(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGSoldier*                            CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3484[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CompareFloatByComparsionType_ReturnValue; // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function CGGameInstance.CGGameInstance_C.AddKnownPerson
struct UCGGameInstance_C_AddKnownPerson_Params
{
public:
	struct FDataTableRowHandle                   Person;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_348C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ActivateCustomScene
struct UCGGameInstance_C_ActivateCustomScene_Params
{
public:
	class FName                                  CustomSceneRow;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x8(0x10)(ReferenceParm)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3499[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetCustomWorkshopScene
struct UCGGameInstance_C_GetCustomWorkshopScene_Params
{
public:
	bool                                         GotAScene;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<TSoftObjectPtr<class UWorld>>           RequestedLevels;                                   // 0x8(0x50)(Parm, OutParm)
	TSet<TSoftObjectPtr<class UWorld>>           LevelsToLoad;                                      // 0x58(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<TSoftObjectPtr<class UWorld>>           K2Node_MakeSet_Set;                                // 0xB8(0x50)(None)
	struct FSt_CustomWorkshopSceneData           CallFunc_GetDataTableRowFromName_OutRow;           // 0x108(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34AF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWorldSoftObjectReference             CallFunc_Array_Get_Item;                           // 0x120(0x28)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function CGGameInstance.CGGameInstance_C.CheckForPlotArmor
struct UCGGameInstance_C_CheckForPlotArmor_Params
{
public:
	class FName                                  Companion_Name;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Armor_Pierced;                                     // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function CGGameInstance.CGGameInstance_C.AddPlotArmorToCompanion
struct UCGGameInstance_C_AddPlotArmorToCompanion_Params
{
public:
	class FName                                  Companion_Name;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function CGGameInstance.CGGameInstance_C.CompanionNoLongerHasImportantThingToSay
struct UCGGameInstance_C_CompanionNoLongerHasImportantThingToSay_Params
{
public:
	class FName                                  Olivier;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE9 (0xE9 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetCharactersBasicData
struct UCGGameInstance_C_GetCharactersBasicData_Params
{
public:
	class FName                                  CompanionName;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            DataTable;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x10(0x18)(Parm, OutParm)
	class UTexture2D*                            Image;                                             // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCompanionDefinition                  CallFunc_GetDataTableRowFromName_OutRow;           // 0x30(0xB8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function CGGameInstance.CGGameInstance_C.DiscoverHideout
struct UCGGameInstance_C_DiscoverHideout_Params
{
public:
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array_1;                          // 0x20(0x10)(ReferenceParm)
};

// 0x2B0 (0x2B0 - 0x0)
// Function CGGameInstance.CGGameInstance_C.DiscoverEvidence
struct UCGGameInstance_C_DiscoverEvidence_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SuppressLog;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnExpHandle;                                   // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34EE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoteExperienceHandle                 ExperienceHandle;                                  // 0x10(0x18)(Parm, OutParm, NoDestructor)
	struct FDataTableRowHandle                   NewLocalVar_0;                                     // 0x28(0x10)(Edit, BlueprintVisible, NoDestructor)
	TArray<class FName>                          ProcessedArray;                                    // 0x38(0x10)(Edit, BlueprintVisible)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x58(0x10)(NoDestructor, UObjectWrapper)
	struct FSt_StoryNoteInfoStructure            CallFunc_GetDataTableRowFromName_OutRow;           // 0x68(0x208)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array;                            // 0x278(0x10)(ReferenceParm)
	struct FNoteExperienceHandle                 K2Node_MakeStruct_NoteExperienceHandle;            // 0x288(0x18)(NoDestructor, UObjectWrapper)
	TArray<float>                                K2Node_MakeArray_Array_1;                          // 0x2A0(0x10)(ReferenceParm)
};

// 0x1D (0x1D - 0x0)
// Function CGGameInstance.CGGameInstance_C.AddTransitionalLevelKey
struct UCGGameInstance_C_AddTransitionalLevelKey_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4C (0x4C - 0x0)
// Function CGGameInstance.CGGameInstance_C.AddMoraleStimulantValue
struct UCGGameInstance_C_AddMoraleStimulantValue_Params
{
public:
	enum class Enum_MoraleStimulant              Stimulant;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3521[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ValueToAdd;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Result;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_HACkGetCurrentDayAdjustedForEvening_Day;  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3527[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value_1;                         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3532[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetMoraleFeedbackDialogueAndRemoveItFromStack
struct UCGGameInstance_C_GetMoraleFeedbackDialogueAndRemoveItFromStack_Params
{
public:
	class FName                                  Companion_Name;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DialogueDataReference         Output;                                            // 0x8(0x24)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_355C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_355F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueDataReference         ChosenDialogue;                                    // 0x38(0x24)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_3561[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStruct_DialogueDataReference> IteratedArray;                                     // 0x60(0x10)(Edit, BlueprintVisible)
	struct FStruct_DialogueDataReference         CallFunc_Array_Get_Item;                           // 0x70(0x24)(HasGetValueTypeHash)
	uint8                                        Pad_3563[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3566[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_DialogueDataArray                 K2Node_MakeStruct_st_DialogueDataArray;            // 0xA0(0x10)(UObjectWrapper, HasGetValueTypeHash)
	struct FSt_DialogueDataArray                 CallFunc_Map_Find_Value;                           // 0xB0(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD9 (0xD9 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetDialogeDataFromStackRepository
struct UCGGameInstance_C_GetDialogeDataFromStackRepository_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Key;                                               // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DialogueDataReference         Value;                                             // 0x10(0x24)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_357C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Found;                                             // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_357D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueStackDataRepository   CallFunc_GetDataTableRowFromName_OutRow;           // 0x40(0x68)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_357F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueDataReference         CallFunc_Map_Find_Value;                           // 0xB0(0x24)(HasGetValueTypeHash)
	uint8                                        Pad_3580[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D0 (0x1D0 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ApplyMoraleStimulusToSpecificPerson
struct UCGGameInstance_C_ApplyMoraleStimulusToSpecificPerson_Params
{
public:
	class FName                                  PersonName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_MoraleStimulant              Stimulus;                                          // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3599[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStruct_DialogueDataReference> NewArray;                                          // 0x10(0x10)(Edit, BlueprintVisible)
	struct FSt_DialogueDataArray                 Temp_struct_Variable;                              // 0x20(0x10)(ConstParm, HasGetValueTypeHash)
	enum class Enum_AttitudeTowards              CallFunc_GetAttitudeTowardsStimuli_ReturnValue;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_359B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x60(0x10)(NoDestructor, UObjectWrapper)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_1;            // 0x78(0x10)(NoDestructor, UObjectWrapper)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	TArray<float>                                K2Node_MakeArray_Array_1;                          // 0xA0(0x10)(ReferenceParm)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_2;            // 0xB8(0x10)(NoDestructor)
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array_2;                          // 0xC8(0x10)(ReferenceParm)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_3;            // 0xD8(0x10)(NoDestructor, UObjectWrapper)
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array_3;                          // 0xE8(0x10)(ReferenceParm)
	struct FSt_DialogueDataArray                 K2Node_MakeStruct_st_DialogueDataArray;            // 0xF8(0x10)(UObjectWrapper, HasGetValueTypeHash)
	struct FSt_DialogueDataArray                 K2Node_MakeStruct_st_DialogueDataArray_1;          // 0x108(0x10)(UObjectWrapper, HasGetValueTypeHash)
	struct FSt_DialogueDataArray                 CallFunc_Map_Find_Value;                           // 0x118(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_DialogueDataArray                 CallFunc_Map_Find_Value_1;                         // 0x130(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2; // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_2;          // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DialogueDataReference         CallFunc_GetDialogeDataFromStackRepository_Value;  // 0x170(0x24)(HasGetValueTypeHash)
	uint8                                        Pad_35AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDialogeDataFromStackRepository_Found;  // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueDataReference         CallFunc_GetDialogeDataFromStackRepository_Value_1; // 0x1A0(0x24)(HasGetValueTypeHash)
	uint8                                        Pad_35AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDialogeDataFromStackRepository_Found_1; // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function CGGameInstance.CGGameInstance_C.RemoveMultipleModifiersForAllCompanion
struct UCGGameInstance_C_RemoveMultipleModifiersForAllCompanion_Params
{
public:
	TArray<struct FDataTableRowHandle>           Modifier_structures;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function CGGameInstance.CGGameInstance_C.SetMultipleModifiersForAllCompanions
struct UCGGameInstance_C_SetMultipleModifiersForAllCompanions_Params
{
public:
	TArray<struct FDataTableRowHandle>           Modifier_structures;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9A (0x9A - 0x0)
// Function CGGameInstance.CGGameInstance_C.RemoveModifierForAllCompanions
struct UCGGameInstance_C_RemoveModifierForAllCompanions_Params
{
public:
	struct FDataTableRowHandle                   Modifier_name;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue;       // 0x20(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_Array_Get_Item;                           // 0x38(0x60)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveBuffFromCompanion_ReturnValue;      // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9A (0x9A - 0x0)
// Function CGGameInstance.CGGameInstance_C.SetModifierForAllCompanions
struct UCGGameInstance_C_SetModifierForAllCompanions_Params
{
public:
	struct FDataTableRowHandle                   Modifier_name;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3612[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue;       // 0x20(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3616[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_Array_Get_Item;                           // 0x38(0x60)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AddBuffToCompanion_ReturnValue;           // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function CGGameInstance.CGGameInstance_C.Clear QuestResults
struct UCGGameInstance_C_Clear_QuestResults_Params
{
public:
	TArray<class FString>                        AppendedArray;                                     // 0x0(0x10)(Edit, BlueprintVisible)
};

// 0xB8 (0xB8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.Add QuestResult
struct UCGGameInstance_C_Add_QuestResult_Params
{
public:
	class FName                                  Companion;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        ReportText;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<class FName, struct FQuestResultStructure> QuestResults;                                      // 0x18(0x50)(Parm, OutParm)
	TArray<class FString>                        AppendedArray;                                     // 0x68(0x10)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3633[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestResultStructure                 CallFunc_Map_Find_Value;                           // 0x80(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3636[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        K2Node_Select_Default;                             // 0x98(0x10)(ReferenceParm)
	struct FQuestResultStructure                 K2Node_MakeStruct_QuestResultStructure;            // 0xA8(0x10)(HasGetValueTypeHash)
};

// 0x1DA (0x1DA - 0x0)
// Function CGGameInstance.CGGameInstance_C.Companion Add or subtract health
struct UCGGameInstance_C_Companion_Add_or_subtract_health_Params
{
public:
	class FName                                  Companion_Name;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Mod;                                               // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Respect_plot_armor;                                // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3651[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ExBuffs;                                           // 0x10(0x10)(Edit, BlueprintVisible)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3652[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3654[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCompanionData_Found;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3656[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionDefinition                  CallFunc_GetCompanionData_StartingData;            // 0x38(0xB8)(None)
	bool                                         CallFunc_GetCompanionData_Found_in_current_data;   // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3657[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_GetCompanionData_CurrentData;             // 0xF8(0x60)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckForPlotArmor_Armor_Pierced;          // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3659[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCompanionEntry                       K2Node_MakeStruct_CompanionEntry;                  // 0x168(0x60)(UObjectWrapper)
	bool                                         CallFunc_SetStatsForCompanion_ReturnValue;         // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_365B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AddBuffToCompanion_ReturnValue;           // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x108 (0x108 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetBuffsToReportForCompanion
struct UCGGameInstance_C_GetBuffsToReportForCompanion_Params
{
public:
	class FName                                  Companion;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Output_new;                                        // 0x8(0x10)(Parm, OutParm)
	TArray<class FName>                          Output_ex;                                         // 0x18(0x10)(Parm, OutParm)
	TArray<class FName>                          ExBuffs;                                           // 0x28(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          NewBuffs;                                          // 0x38(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value;                           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3691[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x78(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3694[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3696[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value_1;                         // 0xB4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3698[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue_1;             // 0xD0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_369E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_1;                         // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0xFC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function CGGameInstance.CGGameInstance_C.AppendBuffIntoReportingStack
struct UCGGameInstance_C_AppendBuffIntoReportingStack_Params
{
public:
	class FName                                  Companion;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Buff;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class FName>               TargetMap;                                         // 0x10(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value;                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0xC0(0x10)(ReferenceParm)
	class FString                                K2Node_Select_Default;                             // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE7 (0xE7 - 0x0)
// Function CGGameInstance.CGGameInstance_C.SetOneBuffFromGroup
struct UCGGameInstance_C_SetOneBuffFromGroup_Params
{
public:
	int32                                        Index_of_array_entry_that_should_be_enabled;       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Companion_Name;                                    // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Array_of_Buff_names;                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  Set_buff;                                          // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Was_Any_Buff_Removed;                              // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Removed_Buff_Index;                                // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            BuffTable;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Companion_Table;                                   // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RemovedBuffName;                                   // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Was_A_Buff_Removed;                                // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index_of_removed_buff;                             // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HadBuff;                                           // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          BuffsToTurnOff;                                    // 0x58(0x10)(Edit, BlueprintVisible)
	class FName                                  SelectedBuff;                                      // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x80(0x10)(NoDestructor, UObjectWrapper)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_1;            // 0xA0(0x10)(NoDestructor, UObjectWrapper)
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array_1;                          // 0xB0(0x10)(ReferenceParm)
	bool                                         CallFunc_HaveBuffCompanion_ReturnValue;            // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0xC4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HaveBuffCompanion_ReturnValue_1;          // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0xDC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddBuffToCompanion_ReturnValue;           // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveBuffFromCompanion_ReturnValue;      // 0xE5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0xE6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF6 (0xF6 - 0x0)
// Function CGGameInstance.CGGameInstance_C.UpdateSystemicBuffs
struct UCGGameInstance_C_UpdateSystemicBuffs_Params
{
public:
	class FName                                  CurrentlyIteratedCompanion;                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3714[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue;       // 0x18(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3715[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_Array_Get_Item;                           // 0x30(0x60)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMorale_Current_Morale;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3717[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_SetOneBuffFromGroup_Set_buff;             // 0xB4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetOneBuffFromGroup_Was_Any_Buff_Removed; // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3719[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SetOneBuffFromGroup_Removed_Buff_Index;   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_371A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue_1;                      // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_SetOneBuffFromGroup_Set_buff_1;           // 0xE4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetOneBuffFromGroup_Was_Any_Buff_Removed_1; // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_371B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SetOneBuffFromGroup_Removed_Buff_Index_1; // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF9 (0xF9 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ApplyMoraleStimulus
struct UCGGameInstance_C_ApplyMoraleStimulus_Params
{
public:
	enum class Enum_MoraleStimulant              Triggered_stimulus;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3726[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CompanionName;                                     // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3727[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       Companion;                                         // 0x10(0x60)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_HACkGetCurrentDayAdjustedForEvening_Day;  // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue;       // 0x80(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3728[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_Array_Get_Item;                           // 0x98(0x60)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function CGGameInstance.CGGameInstance_C.Add radio audition
struct UCGGameInstance_C_Add_radio_audition_Params
{
public:
	class FName                                  Audition_ID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            AuditionsRepository;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DialogueStackDataRepository   CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x68)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3729[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15D (0x15D - 0x0)
// Function CGGameInstance.CGGameInstance_C.Add holler to stack
struct UCGGameInstance_C_Add_holler_to_stack_Params
{
public:
	class FName                                  Person_name;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Response_ID;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDayPart                          CallFunc_GetDayPart_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_372D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Map_Find_Value;                           // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_372F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueStackDataRepository   CallFunc_GetDataTableRowFromName_OutRow;           // 0x20(0x68)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3730[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueStackDataRepository   CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x90(0x68)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3731[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueDataReference         CallFunc_Map_Find_Value_1;                         // 0x100(0x24)(HasGetValueTypeHash)
	uint8                                        Pad_3732[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3733[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueDataReference         CallFunc_Map_Find_Value_2;                         // 0x130(0x24)(HasGetValueTypeHash)
	uint8                                        Pad_3734[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x15B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ShadowWorldSceneEnded
struct UCGGameInstance_C_ShadowWorldSceneEnded_Params
{
public:
	int32                                        Scene;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20E (0x20E - 0x0)
// Function CGGameInstance.CGGameInstance_C.Companion Add or subtract morale
struct UCGGameInstance_C_Companion_Add_or_subtract_morale_Params
{
public:
	class FName                                  Companion_Name;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Mod;                                               // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Respect_plot_armor;                                // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3741[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NewMorale;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewHp;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          ExBuffs;                                           // 0x18(0x10)(Edit, BlueprintVisible)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3742[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3743[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3744[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_FClamp_ReturnValue_1;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3745[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3746[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCompanionData_Found;                   // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3747[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionDefinition                  CallFunc_GetCompanionData_StartingData;            // 0x70(0xB8)(None)
	bool                                         CallFunc_GetCompanionData_Found_in_current_data;   // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3748[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_GetCompanionData_CurrentData;             // 0x130(0x60)(None)
	bool                                         CallFunc_CheckForPlotArmor_Armor_Pierced;          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3749[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       K2Node_MakeStruct_CompanionEntry;                  // 0x198(0x60)(UObjectWrapper)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStatsForCompanion_ReturnValue;         // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_374C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x204(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AddBuffToCompanion_ReturnValue;           // 0x20D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.Companion Heal
struct UCGGameInstance_C_Companion_Heal_Params
{
public:
	class FName                                  Companion_Name;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x155 (0x155 - 0x0)
// Function CGGameInstance.CGGameInstance_C.Add dialogue to stack
struct UCGGameInstance_C_Add_dialogue_to_stack_Params
{
public:
	class FName                                  Person_name;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Response_ID;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                DayPartString;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_375E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3760[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueStackDataRepository   CallFunc_GetDataTableRowFromName_OutRow;           // 0x50(0x68)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3761[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DialogueDataReference         CallFunc_Map_Find_Value;                           // 0xC0(0x24)(HasGetValueTypeHash)
	uint8                                        Pad_3762[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDayPart                          CallFunc_Array_Get_Item;                           // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3763[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Map_Find_Value_1;                         // 0xEC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3764[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x14C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function CGGameInstance.CGGameInstance_C.HACkGetCurrentDayAdjustedForEvening
struct UCGGameInstance_C_HACkGetCurrentDayAdjustedForEvening_Params
{
public:
	int32                                        Day;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDayPart                          CallFunc_GetDayPart_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_376D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_376E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A1 (0x2A1 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetModsForLevel
struct UCGGameInstance_C_GetModsForLevel_Params
{
public:
	enum class EEventMap                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_377A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            Return_custom_handle_set;                          // 0x8(0x50)(Parm, OutParm)
	TSet<TSoftObjectPtr<class UWorld>>           Return_Streaming_level_references;                 // 0x58(0x50)(Parm, OutParm)
	TSet<TSoftObjectPtr<class UWorld>>           InternalListOfModLevelReferences;                  // 0xA8(0x50)(Edit, BlueprintVisible)
	TSet<class FName>                            InternalListOfLevelModHandlesForMap;               // 0xF8(0x50)(Edit, BlueprintVisible)
	enum class EEventMap                         CurrentlyEvaluatedMap;                             // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_377D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3781[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Set_ToArray_Result;                       // 0x170(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x184(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3782[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_LevelModificationMapStructure     CallFunc_GetDataTableRowFromName_OutRow;           // 0x190(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3783[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3785[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_LevelToLevelModStructure          CallFunc_Array_Get_Item_1;                         // 0x1B0(0x68)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3786[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWorldSoftObjectReference             CallFunc_Array_Get_Item_2;                         // 0x220(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3787[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            CallFunc_Set_Union_Result;                         // 0x250(0x50)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD9 (0xD9 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ActivateLevelMods
struct UCGGameInstance_C_ActivateLevelMods_Params
{
public:
	TSet<class FName>                            NewLevelMods;                                      // 0x0(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3792[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<class FName>                            CallFunc_Set_Union_Result;                         // 0x70(0x50)(None)
	struct FSt_LevelModificationMapStructure     CallFunc_GetDataTableRowFromName_OutRow;           // 0xC0(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3793[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x84 (0x84 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ConvertInventoryToItemAndCountStructure
struct UCGGameInstance_C_ConvertInventoryToItemAndCountStructure_Params
{
public:
	TArray<struct FInventoryEntry>               Source_inventory_array;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSt_ItemAndCount>              TargetArray;                                       // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x30(0x30)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew; // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue;                        // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_ItemAndCount                      K2Node_MakeStruct_st_ItemAndCount;                 // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function CGGameInstance.CGGameInstance_C.RefreshFeedinDayDates
struct UCGGameInstance_C_RefreshFeedinDayDates_Params
{
public:
	TArray<float>                                ProcessedFeedingDates;                             // 0x0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item;                           // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF8 (0xF8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.CalculateNewPlayeritems
struct UCGGameInstance_C_CalculateNewPlayeritems_Params
{
public:
	TArray<struct FSt_ItemAndCount>              NewItems;                                          // 0x0(0x10)(Parm, OutParm)
	TArray<struct FSt_ItemAndCount>              Internal_new_player_items;                         // 0x10(0x10)(Edit, BlueprintVisible)
	TMap<class FName, float>                     InternalItemCountMap;                              // 0x20(0x50)(Edit, BlueprintVisible)
	TArray<struct FSt_ItemAndCount>              Internal_Current_player_items;                     // 0x70(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_ItemAndCount                      CallFunc_Array_Get_Item;                           // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_ItemAndCount                      CallFunc_Array_Get_Item_1;                         // 0xA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value;                           // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37AF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_ItemAndCount                      K2Node_MakeStruct_st_ItemAndCount;                 // 0xC4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew; // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               CallFunc_GetItems_ReturnValue;                     // 0xE8(0x10)(ReferenceParm)
};

// 0x68 (0x68 - 0x0)
// Function CGGameInstance.CGGameInstance_C.InternalCheckLoadingFinished
struct UCGGameInstance_C_InternalCheckLoadingFinished_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ALevelStreamingManager*>        CallFunc_GetAllActorsOfClass_OutActors;            // 0x38(0x10)(ReferenceParm)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALevelStreamingManager*                CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function CGGameInstance.CGGameInstance_C.LoadGame2
struct UCGGameInstance_C_LoadGame2_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LevelsLoadedWhileSave;                             // 0x8(0x10)(Edit, BlueprintVisible)
};

// 0x40 (0x40 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetNearestFeedingDayInterval
struct UCGGameInstance_C_GetNearestFeedingDayInterval_Params
{
public:
	float                                        Interval;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Date;                                              // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetNeededFood
struct UCGGameInstance_C_GetNeededFood_Params
{
public:
	int32                                        CurrentAmount;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetAmount;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PercentageColor;                                   // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue;       // 0x20(0x10)(ReferenceParm)
	TArray<struct FCompanionEntry>               CallFunc_GetLiveCompanions_CurrentLiveCompanionsOutput; // 0x30(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetLiveCompanions
struct UCGGameInstance_C_GetLiveCompanions_Params
{
public:
	TArray<struct FCompanionEntry>               Array;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         SkipIgor;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCompanionEntry>               CurrentLiveCompanionsOutput;                       // 0x18(0x10)(Parm, OutParm)
	TArray<struct FCompanionEntry>               CurrentLiveCompanions;                             // 0x28(0x10)(Edit, BlueprintVisible)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_Array_Get_Item;                           // 0x48(0x60)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37CF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x250 (0x250 - 0x0)
// Function CGGameInstance.CGGameInstance_C.LoadGameOld
struct UCGGameInstance_C_LoadGameOld_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rot;                                               // 0x4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CameraTransfrom;                                   // 0x10(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                            PlayerTransform;                                   // 0x40(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSaveAndLoadLocked_ReturnValue;          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDataFromSlot_ReturnValue;             // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0xA8(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x138(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_37DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x1D0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x208(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E0[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x220(0x30)(IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function CGGameInstance.CGGameInstance_C.SaveGameOld
struct UCGGameInstance_C_SaveGameOld_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSaveAndLoadLocked_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function CGGameInstance.CGGameInstance_C.UpdateNewNote
struct UCGGameInstance_C_UpdateNewNote_Params
{
public:
	bool                                         IsNew;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_Note                              K2Node_MakeStruct_st_Note;                         // 0x8(0x18)(HasGetValueTypeHash)
};

// 0x13F (0x13F - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetNoteDescription
struct UCGGameInstance_C_GetNoteDescription_Params
{
public:
	class FName                                  CollectableObjectID;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NoteID;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSucceeded;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_CollectableObjectNoteDescription_01 NoteDescription;                                   // 0x18(0x38)(Parm, OutParm, HasGetValueTypeHash)
	struct FSt_col_CollectableObjectNoteDescription_01 Result;                                            // 0x50(0x38)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         bSearchSucceeded;                                  // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCollectableObjectDescription_IndexInArray; // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37F3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_CollectableObjectDescriptionWithKey_01 CallFunc_Array_Get_Item;                           // 0xA8(0x58)(HasGetValueTypeHash)
	struct FSt_col_CollectableObjectNoteDescription_01 CallFunc_Array_Get_Item_1;                         // 0x100(0x38)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x13D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x13E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function CGGameInstance.CGGameInstance_C.InvestigationSolved
struct UCGGameInstance_C_InvestigationSolved_Params
{
public:
	class FName                                  InvestigationID;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetInvestigationDescription_IndexInArray; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.InvestigationPointFound
struct UCGGameInstance_C_InvestigationPointFound_Params
{
public:
	class FName                                  CollectableObjectID;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PointID;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetInvestigationPointDescription_bSucceeded; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_CollectableObjectPointDescription_01 CallFunc_GetInvestigationPointDescription_PointDescription; // 0x18(0x4A)(HasGetValueTypeHash)
	uint8                                        Pad_37FB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_CollectableObjectPointDescription_01 K2Node_SetFieldsInStruct_StructOut;                // 0x68(0x4A)(HasGetValueTypeHash)
	uint8                                        Pad_37FC[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x150 (0x150 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetInvestigationPointOption
struct UCGGameInstance_C_GetInvestigationPointOption_Params
{
public:
	class FName                                  CollectableObjectID;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PointID;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OptionID;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSucceeded;                                        // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3802[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_InvestigationOption_01        InvestigationOption;                               // 0x20(0x3A)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_3803[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_InvestigationOption_01        Result;                                            // 0x60(0x3A)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_3804[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bFound;                                            // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetInvestigationPointDescription_bSucceeded; // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3805[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_CollectableObjectPointDescription_01 CallFunc_GetInvestigationPointDescription_PointDescription; // 0xA8(0x4A)(HasGetValueTypeHash)
	uint8                                        Pad_3806[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3807[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_col_InvestigationOption_01        CallFunc_Array_Get_Item;                           // 0x108(0x3A)(HasGetValueTypeHash)
	uint8                                        Pad_3809[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x14A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_380A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB6 (0xB6 - 0x0)
// Function CGGameInstance.CGGameInstance_C.InvestigationPointAnalyzeFinished
struct UCGGameInstance_C_InvestigationPointAnalyzeFinished_Params
{
public:
	class FName                                  CollectableObjectID;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PointID;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_col_OptionActivationPrerequisite_01 AnalyzeMode;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3812[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_CollectableObjectPointDescription_01 PointDescription;                                  // 0x18(0x4A)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_3813[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3814[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3816[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3817[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3818[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_381B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_381C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_381D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xB5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x133 (0x133 - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetInvestigationPointDescription
struct UCGGameInstance_C_GetInvestigationPointDescription_Params
{
public:
	class FName                                  CollectableObjectID;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PointID;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSucceeded;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3822[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_CollectableObjectPointDescription_01 PointDescription;                                  // 0x18(0x4A)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_3823[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSearchSucceeded;                                  // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3825[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_CollectableObjectPointDescription_01 Result;                                            // 0x70(0x4A)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_3826[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCollectableObjectDescription_IndexInArray; // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3828[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3829[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_CollectableObjectPointDescription_01 CallFunc_Array_Get_Item;                           // 0xE0(0x4A)(HasGetValueTypeHash)
	uint8                                        Pad_382B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function CGGameInstance.CGGameInstance_C.CollectableObjectFound
struct UCGGameInstance_C_CollectableObjectFound_Params
{
public:
	class FName                                  CollectableObjectID;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCollectableObjectDescription_IndexInArray; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetInvestigationDescription
struct UCGGameInstance_C_GetInvestigationDescription_Params
{
public:
	class FName                                  InvestigationID;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IndexInArray;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalIndexInArray;                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3834[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3835[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function CGGameInstance.CGGameInstance_C.GetCollectableObjectDescription
struct UCGGameInstance_C_GetCollectableObjectDescription_Params
{
public:
	class FName                                  CollectableObjectID;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IndexInArray;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalIndexInArray;                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3839[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_383A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.PostLoadMapWithWorld
struct UCGGameInstance_C_PostLoadMapWithWorld_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.LoadComplitedSave
struct UCGGameInstance_C_LoadComplitedSave_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.UnloadComplitedSave
struct UCGGameInstance_C_UnloadComplitedSave_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.SublevelLoaded
struct UCGGameInstance_C_SublevelLoaded_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.SquadLostTrack
struct UCGGameInstance_C_SquadLostTrack_Params
{
public:
	class ACGSquadManager*                       InSquad;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function CGGameInstance.CGGameInstance_C.EventStatusAdded
struct UCGGameInstance_C_EventStatusAdded_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Status;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.SquadGotTrack
struct UCGGameInstance_C_SquadGotTrack_Params
{
public:
	class ACGSquadManager*                       InSquad;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CGGameInstance.CGGameInstance_C.LevelUpDelegate_Event_0
struct UCGGameInstance_C_LevelUpDelegate_Event_0_Params
{
public:
	float                                        AddedExp;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ReportSolvedExp
struct UCGGameInstance_C_ReportSolvedExp_Params
{
public:
	float                                        B;                                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function CGGameInstance.CGGameInstance_C.DialogueSpawnInteractable
struct UCGGameInstance_C_DialogueSpawnInteractable_Params
{
public:
	class ACGAICharacter*                        InAICharacter;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  InItemName;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function CGGameInstance.CGGameInstance_C.CustomEvent_0
struct UCGGameInstance_C_CustomEvent_0_Params
{
public:
	enum class EFPAnimSystemActivity             InQueryActivity;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3843[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGActiveItem>             InActiveItemClass;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         bInLastActivity;                                   // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InActivitySuccesful;                               // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CGGameInstance.CGGameInstance_C.Master loaded
struct UCGGameInstance_C_Master_loaded_Params
{
public:
	enum class EAkResult                         Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ChangeNumberSoldiers
struct UCGGameInstance_C_ChangeNumberSoldiers_Params
{
public:
	int32                                        Number;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.WriteAchievement
struct UCGGameInstance_C_WriteAchievement_Params
{
public:
	enum class EAchievementType                  AchievementType;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3852[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Progress;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function CGGameInstance.CGGameInstance_C.AddCurveAnimatedWidgetMaster
struct UCGGameInstance_C_AddCurveAnimatedWidgetMaster_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                InActor;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function CGGameInstance.CGGameInstance_C.RemoveCurveAnimatedWidgetMaster
struct UCGGameInstance_C_RemoveCurveAnimatedWidgetMaster_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                InActor;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.OnQuestFinished
struct UCGGameInstance_C_OnQuestFinished_Params
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ValidateArmor_CPP
struct UCGGameInstance_C_ValidateArmor_CPP_Params
{
public:
	bool                                         bShowMessage;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F71 (0x1F71 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ExecuteUbergraph_CGGameInstance
struct UCGGameInstance_C_ExecuteUbergraph_CGGameInstance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation;        // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation;        // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue;           // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_1;         // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x54(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x70(0x30)(IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_6691921A4D81FC935AB41E9AF0245687_Variable; // 0xA8(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_6691921A4D81FC935AB41E9AF0245687_Variable_1; // 0xA9(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable;                              // 0xB0(0x10)(ConstParm, ReferenceParm)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation_1;      // 0xC8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation_1;      // 0xD4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_1;           // 0xE0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_2BDB8D6D48B9F0BD082A31A9915A2EFC_Variable; // 0xEC(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_2;         // 0xF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0xFC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38B8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_1;     // 0x110(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_3;         // 0x140(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_2BDB8D6D48B9F0BD082A31A9915A2EFC_Variable_1; // 0x14C(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x150(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable_1;                            // 0x160(0x10)(ConstParm, ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation_2;      // 0x198(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation_2;      // 0x1A4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_2;           // 0x1B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable_2;                            // 0x1C0(0x10)(ConstParm, ReferenceParm)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_4;         // 0x1D0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_5;         // 0x1DC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_4;           // 0x1E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_5;           // 0x1F4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_2;     // 0x200(0x30)(IsPlainOldData, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation_3;      // 0x23C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation_3;      // 0x248(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_3;           // 0x258(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_6;         // 0x264(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_7;         // 0x270(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_6;           // 0x27C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_7;           // 0x288(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C2[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_3;     // 0x2A0(0x30)(IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5; // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation_4;      // 0x2E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation_4;      // 0x2F4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation_5;      // 0x300(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation_5;      // 0x30C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_4;           // 0x318(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_5;           // 0x324(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_8;         // 0x330(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_9;         // 0x33C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_8;           // 0x348(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_9;           // 0x354(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_4;     // 0x360(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_5;     // 0x390(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_10;        // 0x3C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_11;        // 0x3CC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_10;          // 0x3D8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_11;          // 0x3E4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x3F0(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x47C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable_3;                            // 0x480(0x10)(ConstParm, ReferenceParm)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit_1;                 // 0x490(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue_1;            // 0x51C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x51D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x51E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38C7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x520(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x524(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x528(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x534(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x540(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x54C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x568(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x578(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x57C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x580(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x58C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38CA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_6;     // 0x5A0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_1;            // 0x5D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x5D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38CC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time_1;                    // 0x5D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance_1;                // 0x5D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location_1;                // 0x5DC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_1;             // 0x5E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal_1;                  // 0x5F4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_1;            // 0x600(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_1;                 // 0x610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor_1;                // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_1;            // 0x620(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_1;             // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem_1;                 // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex_1;               // 0x634(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart_1;              // 0x638(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_1;                // 0x644(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            K2Node_Select_Default;                             // 0x650(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_7;     // 0x680(0x30)(IsPlainOldData, NoDestructor)
	class ACGSoldier*                            CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller; // 0x6B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult; // 0x6B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_Select_Default_1;                           // 0x6C0(0x30)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_ApplyDamage_ReturnValue;                  // 0x6F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGSoldier*                            CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_1; // 0x6F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_1; // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x704(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6; // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation_6;      // 0x710(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation_6;      // 0x71C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x728(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_6;           // 0x72C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_12;        // 0x738(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_13;        // 0x744(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_12;          // 0x750(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_13;          // 0x75C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_8;     // 0x770(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit_2;                 // 0x7A0(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue_2;            // 0x82C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_2;            // 0x82D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_2;         // 0x82E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38DB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time_2;                    // 0x830(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance_2;                // 0x834(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location_2;                // 0x838(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_2;             // 0x844(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal_2;                  // 0x850(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_2;            // 0x85C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_2;                 // 0x868(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor_2;                // 0x870(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_2;            // 0x878(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_2;             // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem_2;                 // 0x888(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex_2;               // 0x88C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart_2;              // 0x890(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_2;                // 0x89C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x8A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_9;     // 0x8B0(0x30)(IsPlainOldData, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7; // 0x8E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38DE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_Select_Default_2;                           // 0x8F0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation_7;      // 0x920(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation_7;      // 0x92C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACGSoldier*                            CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_2; // 0x938(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_2; // 0x940(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_7;           // 0x944(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_14;        // 0x950(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_15;        // 0x95C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_14;          // 0x968(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_15;          // 0x974(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_10;    // 0x980(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit_3;                 // 0x9B0(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue_3;            // 0xA3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_3;            // 0xA3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_3;         // 0xA3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38E3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time_3;                    // 0xA40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance_3;                // 0xA44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location_3;                // 0xA48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_3;             // 0xA54(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal_3;                  // 0xA60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_3;            // 0xA6C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_3;                 // 0xA78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor_3;                // 0xA80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_3;            // 0xA88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_3;             // 0xA90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem_3;                 // 0xA98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex_3;               // 0xA9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart_3;              // 0xAA0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_3;                // 0xAAC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_11;    // 0xAC0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            K2Node_Select_Default_3;                           // 0xAF0(0x30)(IsPlainOldData, NoDestructor)
	class ACGSoldier*                            CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_3; // 0xB20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_3; // 0xB28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0xB30(0x10)(ReferenceParm)
	TArray<class AActor*>                        Temp_object_Variable_4;                            // 0xB40(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit_4;                 // 0xB54(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue_4;            // 0xBE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_4;            // 0xBE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_4;         // 0xBE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38E6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time_4;                    // 0xBE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance_4;                // 0xBE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location_4;                // 0xBEC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_4;             // 0xBF8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal_4;                  // 0xC04(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_4;            // 0xC10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_4;                 // 0xC20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor_4;                // 0xC28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_4;            // 0xC30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_4;             // 0xC38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem_4;                 // 0xC40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex_4;               // 0xC44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart_4;              // 0xC48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_4;                // 0xC54(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_12;    // 0xC60(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            K2Node_Select_Default_4;                           // 0xC90(0x30)(IsPlainOldData, NoDestructor)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames_1;       // 0xCC0(0x10)(ReferenceParm)
	class ACGSoldier*                            CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_4; // 0xCD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_4; // 0xCD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0xCDC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xCE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_col_InvestigationDescription_01   CallFunc_GetDataTableRowFromName_OutRow;           // 0xCE8(0x59)(HasGetValueTypeHash)
	uint8                                        Pad_38EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xD48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38ED[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_InvestigationDescriptionWithKey_01 K2Node_MakeStruct_st_col_InvestigationDescriptionWithKey_01; // 0xD50(0x68)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0xDB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xDBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWorld*                                K2Node_Event_InWorld;                              // 0xDC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8; // 0xDC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation_8;      // 0xDD0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation_8;      // 0xDDC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_8;           // 0xDE8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0xDF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_16;        // 0xDF8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_16;          // 0xE04(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue_17;        // 0xE10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_13;    // 0xE20(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_17;          // 0xE50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0xE5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0xE60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_col_CollectableObjectDescription_01 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0xE68(0x49)(HasGetValueTypeHash)
	uint8                                        Pad_38F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0xEB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_col_CollectableObjectDescriptionWithKey_01 K2Node_MakeStruct_st_col_CollectableObjectDescriptionWithKey_01; // 0xEC0(0x58)(UObjectWrapper, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9; // 0xF18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xF20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable_5;                            // 0xF28(0x10)(ConstParm, ReferenceParm)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit_5;                 // 0xF38(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue_5;            // 0xFC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xFC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_sw_LevelLoading_C*                CallFunc_Create_ReturnValue;                       // 0xFD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_5;            // 0xFD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_5;         // 0xFD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time_5;                    // 0xFDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance_5;                // 0xFE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location_5;                // 0xFE4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_5;             // 0xFF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal_5;                  // 0xFFC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_5;            // 0x1008(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_5;                 // 0x1018(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor_5;                // 0x1020(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_5;            // 0x1028(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_5;             // 0x1030(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem_5;                 // 0x1038(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex_5;               // 0x103C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart_5;              // 0x1040(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_5;                // 0x104C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38FA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_14;    // 0x1060(0x30)(IsPlainOldData, NoDestructor)
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x1090(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38FB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_Select_Default_5;                           // 0x10A0(0x30)(IsPlainOldData, NoDestructor)
	class ACGSoldier*                            CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_5; // 0x10D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_5; // 0x10D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10; // 0x10E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue_1;     // 0x10E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x10F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCustomSaveGame*                       CallFunc_CreateSaveGameObject_ReturnValue;         // 0x1100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_LevelName_2;                    // 0x1108(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_LevelName_1;                    // 0x1110(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x1118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x1119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38FE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ALevelStreamingManager*>        CallFunc_GetAllActorsOfClass_OutActors;            // 0x1120(0x10)(ReferenceParm)
	class ALevelStreamingManager*                CallFunc_Array_Get_Item_2;                         // 0x1130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x1138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x113C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x113D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3900[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_LevelName;                      // 0x1140(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGSquadManager*                       K2Node_Event_InSquad_1;                            // 0x1148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetSquadName_ReturnValue;                 // 0x1150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckIfSquadMembersHealthMeetsCritiera_ReturnValue; // 0x1158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3901[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_Event;                                // 0x115C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_Status;                               // 0x1164(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3902[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABackend*                              CallFunc_GetBackend_ReturnValue;                   // 0x1170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGSquadManager*                       K2Node_Event_InSquad;                              // 0x1178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOuterEvent                           CallFunc_GetOuterEventStructure_ReturnValue;       // 0x1180(0x1F0)(None)
	TArray<class ACGSoldier*>                    CallFunc_GetSquadMembers_ReturnValue;              // 0x1370(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x1380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetSquadName_ReturnValue_1;               // 0x1384(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x138C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3903[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APatrolActor*>                  K2Node_MakeArray_Array;                            // 0x1390(0x10)(ConstParm, ReferenceParm)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11; // 0x13A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x13A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x13AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3906[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12; // 0x13B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_AddedExp;                       // 0x13B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x13BC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3907[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13; // 0x13D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_B;                              // 0x13D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x13DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x13E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x13E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x13E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x13EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGAICharacter*                        K2Node_Event_InAICharacter;                        // 0x13F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_InItemName;                           // 0x13F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x1400(0x30)(IsPlainOldData, NoDestructor)
	struct FItemEntry                            CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x1430(0x150)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x1580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3909[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x1588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PickableItem_AIHand_00_C*          CallFunc_FinishSpawningActor_ReturnValue;          // 0x1590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ItemNames                    CallFunc_NameIDToitemEnum_Output;                  // 0x1598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_390A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IInteractable>        CallFunc_SetInteractionLocked_self_CastInput;      // 0x15A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x15B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class ACGShadowTeleportingAreaBase*>  K2Node_MakeArray_Array_1;                          // 0x15C0(0x10)(ConstParm, ReferenceParm)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14; // 0x15D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x15D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x15E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x15E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_390C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0x15EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x15F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x15F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_390F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x15F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3910[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15; // 0x1600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16; // 0x1608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue_1;             // 0x1610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x1618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFPAnimSystemActivity             K2Node_CustomEvent_InQueryActivity;                // 0x1619(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3914[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGActiveItem>             K2Node_CustomEvent_InActiveItemClass;              // 0x1620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bInLastActivity;                // 0x1628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_InActivitySuccesful;            // 0x1629(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x162A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3917[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x1630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWid_WaterMark_C*>              CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x1638(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable_6;                   // 0x1648(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x164C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_WaterMark_C*                      CallFunc_Array_Get_Item_3;                         // 0x1650(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWid_SubtitleManager_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x1658(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWid_SubtitleManager_C*                CallFunc_Array_Get_Item_4;                         // 0x1668(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x1670(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x1674(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_391A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;      // 0x1678(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                           CallFunc_Array_Get_Item_5;                         // 0x1688(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x1690(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x1694(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInViewport_ReturnValue;                 // 0x1695(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x1696(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_6;                              // 0x1697(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0x1698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x16A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLoadedSoundbank_ReturnValue;            // 0x16A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EAkResult                         K2Node_CustomEvent_Result;                         // 0x16A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_391B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Number;                         // 0x16A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x16AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_LoadingScreen_Flares_C*           CallFunc_Create_ReturnValue_1;                     // 0x16B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x16B8(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_6;                  // 0x16C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x16CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_391C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_9;                 // 0x16D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_391D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17; // 0x16D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_3;    // 0x16E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAchievementType                  K2Node_Event_AchievementType;                      // 0x16E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_391E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Progress;                             // 0x16EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18; // 0x16F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCompanionLoyaltyRevertPossible_ReturnValue; // 0x16F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_391F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x16FC(0x10)(ZeroConstructor, NoDestructor)
	struct FCompanionLoyaltyRevertInfo           CallFunc_Array_Get_Item_6;                         // 0x170C(0x14)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0x1720(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x1724(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3920[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x1728(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3921[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x1730(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x1740(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x1750(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue; // 0x1760(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3922[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1768(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x1778(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3923[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x1780(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x1790(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3924[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x1798(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x17A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x17B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UWid_LoadingScreen_C*                  CallFunc_Create_ReturnValue_2;                     // 0x17C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x17D0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x17E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3925[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue;              // 0x17E8(0x50)(None)
	TArray<struct FActiveQuestInfo>              CallFunc_Map_Values_Values;                        // 0x1838(0x10)(ReferenceParm)
	struct FActiveQuestInfo                      CallFunc_Array_Get_Item_7;                         // 0x1848(0x18)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_8;               // 0x1860(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x1864(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1865(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x1866(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3926[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Event_InWidget_1;                           // 0x1868(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_InActor_1;                            // 0x1870(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Event_InWidget;                             // 0x1878(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_InActor;                              // 0x1880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_WidgetCurveAnimation_Parent_C*     K2Node_DynamicCast_AsBa_Widget_Curve_Animation_Parent; // 0x1888(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3928[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_WidgetCurveAnimation_Parent_C*     K2Node_DynamicCast_AsBa_Widget_Curve_Animation_Parent_1; // 0x1898(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x18A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3929[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x18A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Temp_object_Variable_6;                            // 0x18A8(0x10)(ConstParm, ReferenceParm)
	class FName                                  K2Node_Event_QuestID;                              // 0x18B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit_6;                 // 0x18C0(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue_6;            // 0x194C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_2;           // 0x194D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_6;            // 0x194E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_6;         // 0x194F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakHitResult_Time_6;                    // 0x1950(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance_6;                // 0x1954(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location_6;                // 0x1958(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_6;             // 0x1964(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal_6;                  // 0x1970(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_6;            // 0x197C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_6;                 // 0x1988(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor_6;                // 0x1990(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_6;            // 0x1998(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_6;             // 0x19A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem_6;                 // 0x19A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex_6;               // 0x19AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart_6;              // 0x19B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_6;                // 0x19BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShowMessage;                         // 0x19C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_392B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_15;    // 0x19D0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            K2Node_Select_Default_6;                           // 0x1A00(0x30)(IsPlainOldData, NoDestructor)
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x1A30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x1A40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x1A4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x1A58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PC                   CallFunc_KeyNameToEnum_Value;                      // 0x1A64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392C[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0x1A70(0x30)(IsPlainOldData, NoDestructor)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x1AA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ACGDarkStalker*                        CallFunc_SpawnDarkStalkerEnemy_OutSpawnedDarkStalker; // 0x1AB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpawnDarkStalkerEnemy_OutSpawnResult;     // 0x1AB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_7;                              // 0x1AB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x1ABA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_392D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Loading_ProgressBar_C*            CallFunc_CreateLoadingBar_Widget;                  // 0x1AC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x1AC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1AD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUDLSSMode                        CallFunc_GetDLSSMode_ReturnValue;                  // 0x1AD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x1AD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x1AE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_392F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1AE4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1AF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3930[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1AF8(0x10)(ZeroConstructor, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19; // 0x1B08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUDLSSMode                        CallFunc_GetDLSSMode_ReturnValue_1;                // 0x1B10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x1B11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3931[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable_7;                            // 0x1B18(0x10)(ConstParm, ReferenceParm)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit_7;                 // 0x1B28(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue_7;            // 0x1BB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3932[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetViewportSize_ReturnValue;              // 0x1BB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_7;            // 0x1BC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_7;         // 0x1BC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3933[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time_7;                    // 0x1BC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance_7;                // 0x1BC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location_7;                // 0x1BCC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_7;             // 0x1BD8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal_7;                  // 0x1BE4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_7;            // 0x1BF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3935[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_7;                 // 0x1C00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor_7;                // 0x1C08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_7;            // 0x1C10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_7;             // 0x1C18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem_7;                 // 0x1C20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex_7;               // 0x1C24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart_7;              // 0x1C28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_7;                // 0x1C34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x1C40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x1C44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3937[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_16;    // 0x1C50(0x30)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x1C80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_8;                              // 0x1C84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3938[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x1C88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUDLSSMode                        CallFunc_GetAutoDLSSQualityBasedOnPixels_ReturnValue; // 0x1C8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3939[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_Select_Default_7;                           // 0x1C90(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x1CC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_393B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGShadow*                             CallFunc_SpawnShadowEnemy_OutSpawnedShadow;        // 0x1CC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpawnShadowEnemy_OutSpawnResult;          // 0x1CD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_393C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x1CD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x1CE8(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x1CF8(0x10)(ZeroConstructor, NoDestructor)
	TArray<class AActor*>                        Temp_object_Variable_8;                            // 0x1D08(0x10)(ConstParm, ReferenceParm)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit_8;                 // 0x1D18(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue_8;            // 0x1DA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_8;            // 0x1DA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_8;         // 0x1DA6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_393D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time_8;                    // 0x1DA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance_8;                // 0x1DAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location_8;                // 0x1DB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_8;             // 0x1DBC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal_8;                  // 0x1DC8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_8;            // 0x1DD4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_8;                 // 0x1DE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor_8;                // 0x1DE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_8;            // 0x1DF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_8;             // 0x1DF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem_8;                 // 0x1E00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex_8;               // 0x1E04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart_8;              // 0x1E08(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_8;                // 0x1E14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_2;        // 0x1E20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3940[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue_17;    // 0x1E30(0x30)(IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetRTTranslucentReflections_ReturnValue;  // 0x1E60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3941[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_Select_Default_8;                           // 0x1E70(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1EA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3942[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x1EA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x1EB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x1EBC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_SpawnAIFromSoftClass_ReturnValue;         // 0x1EC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRTReflections_ReturnValue;             // 0x1ED0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3943[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_3;        // 0x1ED8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x1EE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3944[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRTReflectionsMaxBounces_ReturnValue;   // 0x1EE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x1EE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x1EE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x1EEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3945[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_4;        // 0x1EF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRTGlobalIllumination_ReturnValue;      // 0x1EF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3946[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_5;        // 0x1F00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRTReflections_ReturnValue_1;           // 0x1F08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x1F0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3947[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRTTranslucentReflections_ReturnValue_1; // 0x1F10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_2;                 // 0x1F14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x1F15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3948[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_6;        // 0x1F18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRTWaterCausticsAllowed_ReturnValue;    // 0x1F20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3949[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRTWaterCaustics_ReturnValue;           // 0x1F24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1F28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_3;                 // 0x1F29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x1F2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1F2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_394A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_7;        // 0x1F30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRTMeshCausticsAllowed_ReturnValue;     // 0x1F38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_394B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRTMeshCaustics_ReturnValue;            // 0x1F3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1F40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_4;                 // 0x1F41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x1F42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1F43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x1F44(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_394C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_8;        // 0x1F58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRequiredExperiencePerLevel_ReturnValue; // 0x1F60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x1F64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRequiredExperiencePerLevel_ReturnValue_1; // 0x1F68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x1F6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x1F70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function CGGameInstance.CGGameInstance_C.OnGlobalSkinChanged_0__DelegateSignature
struct UCGGameInstance_C_OnGlobalSkinChanged_0__DelegateSignature_Params
{
public:
	enum class EGlobalSkinType                   SkinType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3957[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NewSkin;                                           // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.OnItemCraftedFlourished__DelegateSignature
struct UCGGameInstance_C_OnItemCraftedFlourished__DelegateSignature_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CGGameInstance.CGGameInstance_C.OnPauseMenuToggled__DelegateSignature
struct UCGGameInstance_C_OnPauseMenuToggled__DelegateSignature_Params
{
public:
	bool                                         IsPaused;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.OnLoyalitySubstracted__DelegateSignature
struct UCGGameInstance_C_OnLoyalitySubstracted__DelegateSignature_Params
{
public:
	class FName                                  NPC_Name;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.OnLoyalityAdded__DelegateSignature
struct UCGGameInstance_C_OnLoyalityAdded__DelegateSignature_Params
{
public:
	class FName                                  NPC_Name;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.OnItemCrafted__DelegateSignature
struct UCGGameInstance_C_OnItemCrafted__DelegateSignature_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.OnPlayerSpotted__DelegateSignature
struct UCGGameInstance_C_OnPlayerSpotted__DelegateSignature_Params
{
public:
	class ACGSquadManager*                       InstigatingSquad;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.ShadowWorldEndedDispatcher__DelegateSignature
struct UCGGameInstance_C_ShadowWorldEndedDispatcher__DelegateSignature_Params
{
public:
	int32                                        SceneNumber;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxNumber;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.FeedingDayPassed__DelegateSignature
struct UCGGameInstance_C_FeedingDayPassed__DelegateSignature_Params
{
public:
	int32                                        Number_of_companions_penalized;                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Food;                                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function CGGameInstance.CGGameInstance_C.OnInvestigationPointFound__DelegateSignature
struct UCGGameInstance_C_OnInvestigationPointFound__DelegateSignature_Params
{
public:
	class FName                                  CollectableObjectID;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PointID;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function CGGameInstance.CGGameInstance_C.OnPointAnalyzeFinished__DelegateSignature
struct UCGGameInstance_C_OnPointAnalyzeFinished__DelegateSignature_Params
{
public:
	class FName                                  CollectableObjectID;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PointID;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OptionID;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_col_OptionActivationPrerequisite_01 AnalyzeMode;                                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.OnCollectableObjectFound__DelegateSignature
struct UCGGameInstance_C_OnCollectableObjectFound__DelegateSignature_Params
{
public:
	class FName                                  CollectableObjectID;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CGGameInstance.CGGameInstance_C.OnInvestigationSolved__DelegateSignature
struct UCGGameInstance_C_OnInvestigationSolved__DelegateSignature_Params
{
public:
	class FName                                  InvestigationID;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


