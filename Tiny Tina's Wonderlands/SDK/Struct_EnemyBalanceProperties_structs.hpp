#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// UserDefinedStruct Struct_EnemyBalanceProperties.Struct_EnemyBalanceProperties
struct FStruct_EnemyBalanceProperties
{
public:
	enum class EEnemyExperienceType              ExperienceType_8_73D53DF14EC1787599308F9A13A91D97; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E97[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageMultiplier_LevelBased_23_3CAF34804D650A98AB8FAFAB37CB87FF; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthMultiplier_02_Secondary_12_9204082C4992E4200D005C8CBA622E49; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthMultiplier_03_Tertiary_16_46D12ED24F464AF5278FAAA2927388E2; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthMultiplier_04_Quaternary_18_1B102342416A40A8DC163EA34FE48863; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthMultiplier_05_Quinary_20_EC017977469D43823CC907990EEF7113; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   LootRarityModifier_26_95E080A844632E94012641B3BA7B57DC; // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor)
};

}


