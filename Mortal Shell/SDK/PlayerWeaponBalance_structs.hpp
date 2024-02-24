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

// 0xA0 (0xA0 - 0x0)
// UserDefinedStruct PlayerWeaponBalance.PlayerWeaponBalance
struct FPlayerWeaponBalance
{
public:
	class FText                                  Name_33_CE4C3A8E47C86AA24274FFB79CEE7080;          // 0x0(0x18)(Edit, BlueprintVisible)
	float                                        LightAttackBaseDmg_2_EEEA97294689074351EA7EAA1FB05D8B; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeavyAttackBaseDmg_4_D07E29A74184948C151928BEB6CCE48C; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RunningAtkBaseDamage_38_BAE571BA478D3AF1E92625B3E8C24C28; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightRunningAtkBaseDamage_75_018544F447675B94EDE5E09F43C99FEF; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ResolveGainPerHit_6_99D1DF5F43F9FA435DD8E5AD746E4D5E; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StaminaCostPerHit_8_6E18223447FDD6F946D0278BFDAD7D79; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StaminaCostPerHeavyHit_36_D33C79C149700C8E19615D936F2881E0; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StaminaCostRunningAttack_64_ECF6C44949EFECABD586C29D421F5C49; // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StaminaCostLightRunningAttack_77_64873FD944343A9E2C850FB451D944DA; // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightAttackPoiseBaseDamage_10_788DD6884794D6FA47606DBC3B846BAA; // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeavyAttackPoiseBaseDamage_12_3A53844344AB50AC8F62DA902F24B5C1; // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealRiposteDamage_14_BE1BA2494C6F06C014B3DF870C01A80A; // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightAtk1Multiplier_16_4FC278AF49CA331E56B952A0F23F95CB; // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightAtk2Multiplier_20_769A3A2A49A453C07BD033AB921228DD; // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightAtk3Multiplier_21_8C2A93EC48853F7ED088948744311271; // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightAtk4Multiplier_22_D4F2BAB6411265FB0500CE83399BFE74; // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightAtk5Multiplier_24_BCEEFFE041F76B305236CCA2602ABB64; // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeavyAtk1Mult_26_0F9B25C04E4ED8BD51BB59B89681C2B6; // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeavyAtk2Mult_28_AEC6B8AA4065767ADFDA6084CA63A6B8; // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeavyAtk3Mult_30_07AEF12C4E4DB419A9C1798EBFE45A7C; // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeavyAtk4Mult_82_885ADA634A45B68241B336BB4F0F7CFC; // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightAtk1Poise_47_0999A3D04115543F2F3BF39B0403EC66; // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightAtk2Poise_48_7B088B574DF83035C9B773B9FD200E8B; // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightAtk3Poise_49_7C265600470D3C8B42AE948A0C8E6DC3; // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightAtk4Poise_50_B4A2D18648883F56EAC58684695B92E3; // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightAtk5Poise_51_F5E379A145C36B20DD2F0A8DBFE88E30; // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeavyAtk1Poise_52_88E0C33E47D72970FF83758AD55FB6D7; // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeavyAtk2Poise_53_1963A9EE468089F7257252A9E05BD6EC; // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeavyAtk3Poise_54_53B2ADA8426B29DB9C99D88D5053A489; // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeavyAtk4Poise_81_9BEB0399493CB063E07795AF4A3841F2; // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RunningAtkPoise_56_8DEF420143CEE8974A5FFDA6C455AE51; // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightRunningAtkPoise_86_8CB97FCC4123BCEA2EF07DBF3E4B7ACF; // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlungeAttackDamage_59_D44602114B4BC02CF6C1B4859382CA92; // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExtraDamagePerAcidUpgrade_67_7A137D4C4713808033BF0AB0C02009D2; // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


