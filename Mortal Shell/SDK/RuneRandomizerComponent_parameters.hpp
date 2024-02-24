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

// 0x1A9 (0x1A9 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.AskRandomDarkFormUpgrade
struct URuneRandomizerComponent_C_AskRandomDarkFormUpgrade_Params
{
public:
	struct FStruct_Rune                          Rune;                                              // 0x0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
	bool                                         CallFunc_GetAllDarkFormUpgrades_Success;           // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2225[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_RandomizeDarkFormRune_Rune;               // 0xD8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_SelectDarkFormUpgrade_Success;            // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1EC (0x1EC - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.AskRandomWeaponUpgrade
struct URuneRandomizerComponent_C_AskRandomWeaponUpgrade_Params
{
public:
	enum class Enum_Rune_Tier                    Tier;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2270[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          Upgrade;                                           // 0x8(0xD0)(Parm, OutParm, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Local_Category;                                    // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       Local_Weapon;                                      // 0xD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Local_Tier;                                        // 0xDA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2283[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Runes_GetSpecialEffectOnly_Lenght;        // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasImprovementRune__ReturnValue;          // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_228B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCategoryUpgrades_Success;              // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2292[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_BossStartingTierChances_ChancesOut;       // 0xF0(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result;             // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2297[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_229B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x118(0xD0)(HasGetValueTypeHash)
	int32                                        CallFunc_Runes_GetImprovementOnly_Lenght;          // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E1 (0x1E1 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.AskRandomUpgrade
struct URuneRandomizerComponent_C_AskRandomUpgrade_Params
{
public:
	struct FStruct_Rune                          Upgrade;                                           // 0x0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        CallFunc_Runes_GetSpecialEffectOnly_Lenght;        // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xD6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCategoryUpgrades_Success;              // 0xD7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<float>                                CallFunc_BossStartingTierChances_ChancesOut;       // 0xD8(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result;             // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2331[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0xF8(0xD0)(HasGetValueTypeHash)
	int32                                        CallFunc_Runes_GetImprovementOnly_Lenght;          // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCategoryUpgrades_Success_1;            // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCategoryPercentagesArray_IsDarkForm_;  // 0x1CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2342[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_GetCategoryPercentagesArray_Percentages;  // 0x1D0(0x10)(ReferenceParm, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     CallFunc_Category_Randomizer_SelectedCategory;     // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.BossLegendaryChances
struct URuneRandomizerComponent_C_BossLegendaryChances_Params
{
public:
	TArray<float>                                BaseChances;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<float>                                ChancesOut;                                        // 0x10(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<float>                                Local_Chances;                                     // 0x20(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                  Local_EnemyID;                                     // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item;                           // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Array_Get_Item_1;                         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item_2;                         // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item_3;                         // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_240C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Array_Get_Item_4;                         // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item_5;                         // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2413[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_2;         // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_3;         // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item_6;                         // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2422[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2427[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item_7;                         // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_242B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_242F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0x188(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_11;             // 0x198(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x852 (0x852 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.PopulateTierUpRunes
struct URuneRandomizerComponent_C_PopulateTierUpRunes_Params
{
public:
	bool                                         Success_;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RandomBoolWithWeightFromStream_ReturnValue; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1; // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24DE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetRandomRuneToUpgrade_Output;            // 0x8(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetRandomRuneToUpgrade_Output_1;          // 0xD8(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x1A8(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut;              // 0x278(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType;          // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item_1;                         // 0x350(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut_1;            // 0x420(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType_1;        // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut_2;            // 0x4F8(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType_2;        // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item_2;                         // 0x5D0(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut_3;            // 0x6A0(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType_3;        // 0x770(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x771(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_250F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut_4;            // 0x778(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType_4;        // 0x848(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2516[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetAllUpgradableRunes_Output_Get;         // 0x84C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x850(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RandomBoolWithWeightFromStream_ReturnValue_2; // 0x851(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xAE2 (0xAE2 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.PopulateLevelUpRunes
struct URuneRandomizerComponent_C_PopulateLevelUpRunes_Params
{
public:
	bool                                         CallFunc_RandomBoolWithWeightFromStream_ReturnValue; // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetRandomRuneToUpgrade_Output;            // 0x8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1; // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetRandomRuneToUpgrade_Output_1;          // 0xE0(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut;              // 0x1B0(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType;          // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2606[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x288(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut_1;            // 0x358(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType_1;        // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2616[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut_2;            // 0x430(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType_2;        // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2621[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item_1;                         // 0x508(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut_3;            // 0x5D8(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType_3;        // 0x6A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2629[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item_2;                         // 0x6B0(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut_4;            // 0x780(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType_4;        // 0x850(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_262D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut_5;            // 0x858(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType_5;        // 0x928(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x929(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2634[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut_6;            // 0x930(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType_6;        // 0xA00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2647[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut_7;            // 0xA08(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType_7;        // 0xAD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_264F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetAllUpgradableRunes_Output_Get;         // 0xADC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xAE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RandomBoolWithWeightFromStream_ReturnValue_2; // 0xAE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xEA (0xEA - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GiveRandomMiscRune
struct URuneRandomizerComponent_C_GiveRandomMiscRune_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetRandomMiscRune_Rune;                   // 0x8(0xD0)(HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0xD8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetAllMiscRunes_Success;                  // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x46 (0x46 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.IsCorruptedTiel?
struct URuneRandomizerComponent_C_IsCorruptedTiel__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2706[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2717[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;          // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ShellDye                     CallFunc_StormMode_GetCurrentShadeForCharacter_Shade; // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StormMode_GetSelectedShell_HasSelected;   // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_StormMode_GetSelectedShell_Shell;         // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x46 (0x46 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.IsCorruptedEredrim?
struct URuneRandomizerComponent_C_IsCorruptedEredrim__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;          // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ShellDye                     CallFunc_StormMode_GetCurrentShadeForCharacter_Shade; // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StormMode_GetSelectedShell_HasSelected;   // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_StormMode_GetSelectedShell_Shell;         // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x108 (0x108 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetAllDarkFormUpgrades
struct URuneRandomizerComponent_C_GetAllDarkFormUpgrades_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2843[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x10(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_285C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x30(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2865[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.RandomizeDarkFormRune
struct URuneRandomizerComponent_C_RandomizeDarkFormRune_Params
{
public:
	struct FStruct_Rune                          Rune;                                              // 0x0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
	struct FVector2D                             Local_Range;                                       // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                CallFunc_BossStartingTierChances_ChancesOut;       // 0xD8(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result;             // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0xF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xF6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2965[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_BossStartingTierChances_ChancesOut_1;     // 0xF8(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result_1;           // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x10D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x10E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2978[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2982[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GiveDarkFormRandomMiscRune
struct URuneRandomizerComponent_C_GiveDarkFormRandomMiscRune_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29DD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetRandomMiscRune_Rune;                   // 0x8(0xD0)(HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GiveDarkFormBonusRune
struct URuneRandomizerComponent_C_GiveDarkFormBonusRune_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;          // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A6F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character;     // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;          // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D8 (0x1D8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SelectDarkFormUpgrade
struct URuneRandomizerComponent_C_SelectDarkFormUpgrade_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ShellDye                     CallFunc_StormMode_GetCurrentShadeForCharacter_Shade; // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B07[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x108(0xD0)(HasGetValueTypeHash)
};

// 0x145 (0x145 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetAllMiscRunes_DarkForm
struct URuneRandomizerComponent_C_GetAllMiscRunes_DarkForm_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B7B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Local_RuneMiscID;                                  // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B89[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ShellDye                     CallFunc_StormMode_GetCurrentShadeForCharacter_Shade; // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B8E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x40(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B98[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CallFunc_GetRunesFromTable_ReturnValue;            // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x128(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x100 (0x100 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetCategoryPercentages
struct URuneRandomizerComponent_C_GetCategoryPercentages_Params
{
public:
	bool                                         IsNoMisc;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NoMiscRow;                                         // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Row;                                               // 0xC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                Values;                                            // 0x18(0x10)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_Categories_Percentages        CallFunc_GetDataTableRowFromName_OutRow;           // 0x28(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C32[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_Map_Values_Values;                        // 0x80(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C38[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Categories_Percentages        CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x98(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_Map_Values_Values_1;                      // 0xF0(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x107 (0x107 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.CheckIfNonReplaceable
struct URuneRandomizerComponent_C_CheckIfNonReplaceable_Params
{
public:
	bool                                         NonReplaceable;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCorruptedTiel__ReturnValue;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCorruptedEredrim__ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D67[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;          // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ShellDye                     CallFunc_StormMode_GetCurrentShadeForCharacter_Shade; // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StormMode_GetSelectedShell_HasSelected;   // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_StormMode_GetSelectedShell_Shell;         // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D89[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;          // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3;          // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ShellDye                     CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1; // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StormMode_GetSelectedShell_HasSelected_1; // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_StormMode_GetSelectedShell_Shell_1;       // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_5;        // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4;          // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5;          // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ShellDye                     CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_2; // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StormMode_GetSelectedShell_HasSelected_2; // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_StormMode_GetSelectedShell_Shell_2;       // 0xC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DED[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_6;        // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_7;        // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6;          // 0xD8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DFB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_7;          // 0xF0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ShellDye                     CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_3; // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StormMode_GetSelectedShell_HasSelected_3; // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_StormMode_GetSelectedShell_Shell_3;       // 0x103(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x106(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x85 (0x85 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleRiposteRune
struct URuneRandomizerComponent_C_HandleRiposteRune_Params
{
public:
	bool                                         CallFunc_RandomBoolWithWeightFromStream_ReturnValue; // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EA5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result;             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EAB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_BossLegendaryChances_ChancesOut;          // 0x20(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Randomizer_FloatToInt_Result_1;           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EBB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array_1;                          // 0x40(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<float>                                CallFunc_BossUpgradeTierChances_ChancesOut;        // 0x50(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result_2;           // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_2;                 // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array_2;                          // 0x68(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result_3;           // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_3;                 // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2ECE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Randomizer_FloatToInt_Result_4;           // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_4;                 // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x125 (0x125 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetAllMiscRunes
struct URuneRandomizerComponent_C_GetAllMiscRunes_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Local_RuneMiscID;                                  // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCorruptedTiel__ReturnValue;             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCorruptedEredrim__ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x20(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F2B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            CallFunc_GetRunesFromTable_ReturnValue;            // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x108(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x110 (0x110 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleChaliceRune
struct URuneRandomizerComponent_C_HandleChaliceRune_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F78[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_4;                              // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeArea                Temp_byte_Variable;                                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSpecialRuneFromID_IsValid_;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetSpecialRuneFromID_Rune;                // 0x40(0xD0)(HasGetValueTypeHash)
};

// 0xDA (0xDA - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleBonusMiscRune
struct URuneRandomizerComponent_C_HandleBonusMiscRune_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetRandomMiscRune_Rune;                   // 0x8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_RandomBoolWithWeightFromStream_ReturnValue; // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x208 (0x208 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetRandomRuneToUpgrade
struct URuneRandomizerComponent_C_GetRandomRuneToUpgrade_Params
{
public:
	struct FStruct_Rune                          Output;                                            // 0x0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FFA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x108(0xD0)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FFE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x1E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3002[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x1F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xFC (0xFC - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetAllUpgradableRunes
struct URuneRandomizerComponent_C_GetAllUpgradableRunes_Params
{
public:
	int32                                        Output_Get;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x18(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3042[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3049[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetRandomRuneType
struct URuneRandomizerComponent_C_GetRandomRuneType_Params
{
public:
	enum class Enum_Rune_Type                    RuneType;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Rune_Type                    Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Type                    Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RandomBoolWithWeightFromStream_ReturnValue; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Rune_Type                    K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14B (0x14B - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetCategoryPercentagesArray
struct URuneRandomizerComponent_C_GetCategoryPercentagesArray_Params
{
public:
	bool                                         ForceNoMisc;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsDarkForm_;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                Percentages;                                       // 0x8(0x10)(Parm, OutParm, HasGetValueTypeHash)
	enum class EArmorTypes                       Local_Shell;                                       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_NoMisc_;                                     // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_GetCategoryPercentages_Values;            // 0x40(0x10)(ReferenceParm, HasGetValueTypeHash)
	enum class Enum_ShellDye                     CallFunc_StormMode_GetCurrentShadeForCharacter_Shade; // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_GetCategoryPercentages_Values_1;          // 0x58(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<float>                                CallFunc_GetCategoryPercentages_Values_2;          // 0x68(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<float>                                CallFunc_GetCategoryPercentages_Values_3;          // 0x78(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<float>                                CallFunc_GetCategoryPercentages_Values_4;          // 0x88(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<float>                                CallFunc_GetCategoryPercentages_Values_5;          // 0x98(0x10)(ReferenceParm, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;          // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ShellDye                     CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1; // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3107[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_GetCategoryPercentages_Values_6;          // 0xC8(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_310A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_GetCategoryPercentages_Values_7;          // 0xE0(0x10)(ReferenceParm, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;          // 0xF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ShellDye                     CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_2; // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3111[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_GetCategoryPercentages_Values_8;          // 0x110(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3114[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3118[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3;          // 0x138(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StormMode_GetSelectedShell_HasSelected;   // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_StormMode_GetSelectedShell_Shell;         // 0x14A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1CC (0x1CC - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.BossUpgradeTierChances
struct URuneRandomizerComponent_C_BossUpgradeTierChances_Params
{
public:
	TArray<float>                                BaseChances;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<float>                                ChancesOut;                                        // 0x10(0x10)(Parm, OutParm, HasGetValueTypeHash)
	class FName                                  Local_EnemyID;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Local_Upgrade_Tier;                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Local_Upgrade_LVL;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_317C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3181[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x94(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPermanentUpgradeRankLevel_Level;       // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3184[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3185[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_2;         // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3186[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_3;         // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_11;             // 0x188(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3191[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array_1;                          // 0x1A0(0x10)(ReferenceParm, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_3;        // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0x1B4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPermanentUpgradeRankLevel_Level_1;     // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue_1;                     // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F8 (0x2F8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.BossStartingTierChances
struct URuneRandomizerComponent_C_BossStartingTierChances_Params
{
public:
	TArray<float>                                BaseChances;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<float>                                ChancesOut;                                        // 0x10(0x10)(Parm, OutParm, HasGetValueTypeHash)
	class FName                                  Local_EnemyID;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Local_Epic;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Local_Rare;                                        // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Local_Uncommon;                                    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Local_Common;                                      // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3246[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_2;         // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_3;         // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_4;         // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_5;         // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_6;         // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_7;         // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_324F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0x188(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_11;             // 0x198(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_12;             // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_13;             // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_14;             // 0x1C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_15;             // 0x1D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_16;             // 0x1E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_17;             // 0x1F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_18;             // 0x208(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_19;             // 0x218(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3262[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array;                            // 0x238(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPermanentUpgradeRankLevel_Level;       // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0x254(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPermanentUpgradeRankLevel_Level_1;     // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_3;             // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue_1;                     // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_2;            // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPermanentUpgradeRankLevel_Level_2;     // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_4;             // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue_2;                     // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_5;             // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_6;             // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_327B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array_1;                          // 0x2A0(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_3;            // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPermanentUpgradeRankLevel_Level_3;     // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_4;            // 0x2BC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_3;          // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPermanentUpgradeRankLevel_Level_4;     // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_7;             // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_4;          // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue_3;                     // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_8;             // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue_4;                     // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_5;            // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPermanentUpgradeRankLevel_Level_5;     // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_5;          // 0x2EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_9;             // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue_5;                     // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x438 (0x438 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleMiniBossRune
struct URuneRandomizerComponent_C_HandleMiniBossRune_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetImmediateRuneFromID_IsValid_;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32EC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetImmediateRuneFromID_Rune;              // 0x8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetImmediateRuneFromID_IsValid__1;        // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetImmediateRuneFromID_Rune_1;            // 0xE0(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetImmediateRuneFromID_IsValid__2;        // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetImmediateRuneFromID_Rune_2;            // 0x1B8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x289(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetImmediateRuneFromID_IsValid__3;        // 0x28A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32FC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetImmediateRuneFromID_Rune_3;            // 0x290(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetImmediateRuneFromID_IsValid__4;        // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetImmediateRuneFromID_Rune_4;            // 0x368(0xD0)(HasGetValueTypeHash)
};

// 0xD4 (0xD4 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.IsBasicRune
struct URuneRandomizerComponent_C_IsBasicRune_Params
{
public:
	struct FStruct_Rune                          Struct_Rune;                                       // 0x0(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xD0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x46 (0x46 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.RandomizeStartingRuneTier
struct URuneRandomizerComponent_C_RandomizeStartingRuneTier_Params
{
public:
	TArray<float>                                CallFunc_BossStartingTierChances_ChancesOut;       // 0x0(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<float>                                CallFunc_BossStartingTierChances_ChancesOut_1;     // 0x10(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<float>                                CallFunc_BossStartingTierChances_ChancesOut_2;     // 0x20(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result;             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result_1;           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBasicRune_ReturnValue;                  // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBasicRune_ReturnValue_1;                // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBasicRune_ReturnValue_2;                // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_334B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Randomizer_FloatToInt_Result_2;           // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_2;              // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12C (0x12C - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleLastChanceRune
struct URuneRandomizerComponent_C_HandleLastChanceRune_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetImmediateRuneFromID_IsValid_;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetImmediateRuneFromID_Rune;              // 0x8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_RandomBoolWithWeight_ReturnValue;         // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3383[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface;     // 0xF0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;  // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_338B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3390[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StormMode_GetSelectedShell_HasSelected;   // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_StormMode_GetSelectedShell_Shell;         // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x12B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x288 (0x288 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleBossRune
struct URuneRandomizerComponent_C_HandleBossRune_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSpecialRuneFromID_IsValid_;            // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetSpecialRuneFromID_Rune;                // 0x8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetSpecialRuneFromID_IsValid__1;          // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetSpecialRuneFromID_Rune_1;              // 0xE0(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetSpecialRuneFromID_IsValid__2;          // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetSpecialRuneFromID_Rune_2;              // 0x1B8(0xD0)(HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleBonusRune
struct URuneRandomizerComponent_C_HandleBonusRune_Params
{
public:
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBonusMiscRune_Success;              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBonusMiscRune_Success_1;            // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBonusMiscRune_Success_2;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleMiniBossRune_Success;               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleLastChanceRune_Success;             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleChaliceRune_Success;                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleMiniBossRune_Success_1;             // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleMiniBossRune_Success_2;             // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleLastChanceRune_Success_1;           // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleLastChanceRune_Success_2;           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBossRune_Success;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3420[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StormMode_ShouldUnlockChalice__ReturnValue; // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x292 (0x292 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetOpenAreasRunes
struct URuneRandomizerComponent_C_GetOpenAreasRunes_Params
{
public:
	bool                                         CallFunc_GetSpecialRuneFromID_IsValid_;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_344D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetSpecialRuneFromID_Rune;                // 0x8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetSpecialRuneFromID_IsValid__1;          // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3451[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetSpecialRuneFromID_Rune_1;              // 0xE0(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetSpecialRuneFromID_IsValid__2;          // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3453[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetSpecialRuneFromID_Rune_2;              // 0x1B8(0xD0)(HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x291(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xDD (0xDD - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetRuneInSlotDetails
struct URuneRandomizerComponent_C_GetRuneInSlotDetails_Params
{
public:
	enum class Enum_Rune_Type                    RuneType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_346D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetSlotCurrentRune_CurrentRune;           // 0x8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetSlotCurrentRune_HasRune_;              // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Rune_Type                    Temp_byte_Variable;                                // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_RuneSlots_IDs                CallFunc_GetSlotIDsForCategory_Improvement;        // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_RuneSlots_IDs                CallFunc_GetSlotIDsForCategory_SpecialEffect;      // 0xDB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_RuneSlots_IDs                K2Node_Select_Default;                             // 0xDC(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4F1 (0x4F1 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OfferMiscRunes
struct URuneRandomizerComponent_C_OfferMiscRunes_Params
{
public:
	int32                                        SelectAmount;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_2;           // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FStruct_Rune                          CallFunc_GetRandomMiscRune_Rune;                   // 0x8(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetRandomMiscRune_Rune_1;                 // 0xD8(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetRandomMiscRune_Rune_2;                 // 0x1A8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_3;           // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_4;           // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetRandomMiscRune_Rune_3;                 // 0x280(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetRandomMiscRune_Rune_4;                 // 0x350(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetRandomMiscRune_Rune_5;                 // 0x420(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_5;           // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x450 (0x450 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.Increase Rune Level
struct URuneRandomizerComponent_C_Increase_Rune_Level_Params
{
public:
	struct FStruct_Rune                          RuneIn;                                            // 0x0(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FStruct_Rune                          RuneOut;                                           // 0xD0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
	enum class Enum_UpgradeType                  UpgradeType;                                       // 0x1A0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_Capped;                                      // 0x1A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Rune_HandleLevelUp_RuneOut;               // 0x1B0(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_Rune_HandleLevelUp_RuneCapped;            // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Rune_HandleLevelUp_Increment_X__Out;      // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Rune_HandleLevelUp_Increment_X_Out;       // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          K2Node_SetFieldsInStruct_StructOut;                // 0x290(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3509[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune_Values                   K2Node_MakeStruct_Struct_Rune_Values;              // 0x368(0x14)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_350E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          K2Node_SetFieldsInStruct_StructOut_1;              // 0x380(0xD0)(HasGetValueTypeHash)
};

// 0x1AE (0x1AE - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.IncreaseRuneTier
struct URuneRandomizerComponent_C_IncreaseRuneTier_Params
{
public:
	struct FStruct_Rune                          RuneIn;                                            // 0x0(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FStruct_Rune                          RuneOut;                                           // 0xD0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x1AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7D (0x7D - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.IncreaseCategoryProgress
struct URuneRandomizerComponent_C_IncreaseCategoryProgress_Params
{
public:
	enum class Enum_Rune_Category_Randomizer     SelectedCategory;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_355F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Current;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Local_Category;                                    // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3561[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3565[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x102 (0x102 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.Runes_GetSpecialEffectOnly
struct URuneRandomizerComponent_C_Runes_GetSpecialEffectOnly_Params
{
public:
	int32                                        Lenght;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3578[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStruct_Rune>                  Local_Runes_Temp;                                  // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x28(0xD0)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE0 (0xE0 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SelectThreeUpgrades
struct URuneRandomizerComponent_C_SelectThreeUpgrades_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetRandomMiscRune
struct URuneRandomizerComponent_C_GetRandomMiscRune_Params
{
public:
	struct FStruct_Rune                          Rune;                                              // 0x0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0xD8(0xD0)(HasGetValueTypeHash)
};

// 0x4F8 (0x4F8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OfferUpgradeAndMisc
struct URuneRandomizerComponent_C_OfferUpgradeAndMisc_Params
{
public:
	int32                                        MiscAmount;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetRandomMiscRune_Rune;                   // 0xE0(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Array_Get_Item_1;                         // 0x1B0(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetRandomMiscRune_Rune_1;                 // 0x280(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetRandomMiscRune_Rune_2;                 // 0x350(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item_2;                         // 0x428(0xD0)(HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetRandomRune
struct URuneRandomizerComponent_C_GetRandomRune_Params
{
public:
	struct FStruct_Rune                          Rune;                                              // 0x0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0xD8(0xD0)(HasGetValueTypeHash)
};

// 0x282 (0x282 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SelectThreeRandomUpgrades
struct URuneRandomizerComponent_C_SelectThreeRandomUpgrades_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetRandomRune_Rune;                       // 0x10(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetRandomRune_Rune_1;                     // 0xE0(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetRandomRune_Rune_2;                     // 0x1B0(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_2;           // 0x281(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.IncreaseRuneTierOld
struct URuneRandomizerComponent_C_IncreaseRuneTierOld_Params
{
public:
	enum class Enum_Rune_Tier                    Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Temp_byte_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Temp_byte_Variable_2;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Temp_byte_Variable_3;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Temp_byte_Variable_4;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Temp_byte_Variable_5;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Temp_byte_Variable_6;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    K2Node_Select_Default;                             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x138 (0x138 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SelectRandomRune
struct URuneRandomizerComponent_C_SelectRandomRune_Params
{
public:
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x68(0xD0)(HasGetValueTypeHash)
};

// 0x102 (0x102 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.Runes_GetImprovementOnly
struct URuneRandomizerComponent_C_Runes_GetImprovementOnly_Params
{
public:
	int32                                        Lenght;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStruct_Rune>                  Local_Runes_Temp;                                  // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x28(0xD0)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetCategoryUpgrades_+Misc
struct URuneRandomizerComponent_C_GetCategoryUpgrades_PlusMisc_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCategoryUpgrades_Success;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetAllMiscRunes_Success;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x520 (0x520 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetCategoryUpgrades
struct URuneRandomizerComponent_C_GetCategoryUpgrades_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Local_Runes;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRiposteUpgradeIDs_ReturnValue;         // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUpgradeUnlocked_bUnlocked;              // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetRiposteUpgradeIDs_ReturnValue_1;       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUpgradeUnlocked_bUnlocked_1;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetRiposteUpgradeIDs_ReturnValue_2;       // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUpgradeUnlocked_bUnlocked_2;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x5C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x68(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x148(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x170(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetRiposteUpgradeIDs_ReturnValue_3;       // 0x244(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUpgradeUnlocked_bUnlocked_3;            // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_3;                         // 0x254(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x260(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_3;                               // 0x334(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_4;                         // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x340(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36DC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x41C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames_1;       // 0x420(0x10)(ReferenceParm, HasGetValueTypeHash)
	class UDataTable*                            CallFunc_GetRunesFromTable_ReturnValue;            // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_GetDataTableRowFromName_OutRow_4;         // 0x440(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_4;    // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x514(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            CallFunc_GetRunesFromTable_ReturnValue_1;          // 0x518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SetObjectMainChance%
struct URuneRandomizerComponent_C_SetObjectMainChance__Params
{
public:
	float                                        Rune_Chance;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Item_Chance;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SetPillarType
struct URuneRandomizerComponent_C_SetPillarType_Params
{
public:
	enum class Enum_PillarType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.ReRandomizeEnemy
struct URuneRandomizerComponent_C_ReRandomizeEnemy_Params
{
public:
	int32                                        NewSeed;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delay;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OnRuneSelected
struct URuneRandomizerComponent_C_OnRuneSelected_Params
{
public:
	enum class Enum_Rune_Category_Randomizer     Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3732[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ID;                                                // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.Randomizer_CreateWidget
struct URuneRandomizerComponent_C_Randomizer_CreateWidget_Params
{
public:
	bool                                         SkipBonusRune_;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.InitiliazeSeed
struct URuneRandomizerComponent_C_InitiliazeSeed_Params
{
public:
	int32                                        SeedID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InitialSeed;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OnSeedFound_Event
struct URuneRandomizerComponent_C_OnSeedFound_Event_Params
{
public:
	class FName                                  SeedID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6E0 (0x6E0 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.ExecuteUbergraph_RuneRandomizerComponent
struct URuneRandomizerComponent_C_ExecuteUbergraph_RuneRandomizerComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PopulateTierUpRunes_Success_;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasSpecialEffectRune__ReturnValue;        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3895[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_389F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Rune_Chance;                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Item_Chance;                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_PillarType                   K2Node_Event_Type;                                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_NewSeed;                              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Runes_SelectWindow_C*              CallFunc_Create_ReturnValue;                       // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     K2Node_CustomEvent_Category;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ID;                             // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCategoryUpgrades__Misc_Success;        // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Runes_GetImprovementOnly_Lenght;          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_SkipBonusRune_;                 // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Runes_GetSpecialEffectOnly_Lenght;        // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasImprovementRune__ReturnValue;          // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Increase_Rune_Level_RuneOut;              // 0x58(0xD0)(HasGetValueTypeHash)
	enum class Enum_UpgradeType                  CallFunc_Increase_Rune_Level_UpgradeType;          // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38C3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_IncreaseRuneTier_RuneOut;                 // 0x130(0xD0)(HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetRandomRune_Rune;                       // 0x200(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value_1;                         // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_2;                 // 0x2DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38CF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Runes_GetSpecialEffectOnly_Lenght_1;      // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_GetRandomRune_Rune_1;                     // 0x2E0(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_IncreaseRuneTier_RuneOut_1;               // 0x3B8(0xD0)(HasGetValueTypeHash)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0x488(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result;             // 0x498(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_3;                 // 0x49C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array_1;                          // 0x4A0(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        K2Node_Event_SeedID;                               // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InitialSeed;                          // 0x4B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result_1;           // 0x4B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_4;                 // 0x4BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x4C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetStormMode_ShouldOpenArea__ReturnValue; // 0x4D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x4DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38F0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AConfigurable_Glowing_Pickup_StormMode_C* K2Node_DynamicCast_AsConfigurable_Glowing_Pickup_Storm_Mode; // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Rune_Container_C*                  K2Node_DynamicCast_AsBP_Rune_Container;            // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasSpecialEffectRune__ReturnValue_1;      // 0x501(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x502(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x503(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_BossUpgradeTierChances_ChancesOut;        // 0x508(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result_2;           // 0x518(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_5;                 // 0x51C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_390D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_BossLegendaryChances_ChancesOut;          // 0x520(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result_3;           // 0x530(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value_2;                         // 0x534(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_6;                 // 0x539(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_7;                 // 0x53A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasSpecialEffectRune__ReturnValue_2;      // 0x53B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x53C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_391A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URuneInventoryComponent_C*             CallFunc_GetRuneInventory_ReturnValue;             // 0x540(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCategoryPercentagesArray_IsDarkForm_;  // 0x548(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_391E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_GetCategoryPercentagesArray_Percentages;  // 0x550(0x10)(ReferenceParm, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     CallFunc_Category_Randomizer_SelectedCategory;     // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3926[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x564(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3927[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array_2;                          // 0x578(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result_4;           // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_8;                 // 0x58C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x58D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_9;                 // 0x58E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Rune_Type                    CallFunc_GetRandomRuneType_RuneType;               // 0x58F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAllMiscRunes_Success;                  // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3931[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x598(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x5A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasImprovementRune__ReturnValue_1;        // 0x5A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x5AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x5AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_393A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Runes_GetImprovementOnly_Lenght_1;        // 0x5B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Runes_GetSpecialEffectOnly_Lenght_2;      // 0x5B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Runes_GetImprovementOnly_Lenght_2;        // 0x5B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x5BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_394B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Runes_GetSpecialEffectOnly_Lenght_3;      // 0x5C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Runes_GetImprovementOnly_Lenght_3;        // 0x5C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Rune_Type                    CallFunc_GetRandomRuneType_RuneType_1;             // 0x5C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckIfNonReplaceable_NonReplaceable;     // 0x5CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetAllMiscRunes_DarkForm_Success;         // 0x5CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RandomBoolWithWeightFromStream_ReturnValue; // 0x5CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SelectDarkFormUpgrade_Success;            // 0x5CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_395A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;          // 0x5D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GiveDarkFormRandomMiscRune_Success;       // 0x5E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_395F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_RandomizeDarkFormRune_Rune;               // 0x5F0(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3962[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x6C4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_GetAllDarkFormUpgrades_Success;           // 0x6D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x6D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3967[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_SeedID;                         // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OnSeedFound__DelegateSignature
struct URuneRandomizerComponent_C_OnSeedFound__DelegateSignature_Params
{
public:
	class FName                                  SeedID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OnUpgradesSelected__DelegateSignature
struct URuneRandomizerComponent_C_OnUpgradesSelected__DelegateSignature_Params
{
public:
	enum class Enum_Rune_Category_Randomizer     Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ID;                                                // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


