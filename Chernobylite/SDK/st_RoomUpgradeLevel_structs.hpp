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

// 0x70 (0x70 - 0x0)
// UserDefinedStruct st_RoomUpgradeLevel.st_RoomUpgradeLevel
struct FSt_RoomUpgradeLevel
{
public:
	class FName                                  ActorFunctionName_2_11D8225A40700B79BA3CBFB31F33B0C9; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWid_RoomSkillTreeOption_C*>    ExcludingUpgrades_6_F8BA301E464D5C923CD155BBED2C7AD5; // 0x8(0x10)(Edit, BlueprintVisible)
	class FText                                  Description_10_DE5E793B40DFF58E45EC9C846E7ADEFD;   // 0x18(0x18)(Edit, BlueprintVisible)
	TArray<struct FSt_ItemByEnumAndCount>        Cost_34_E252F8E649D122C79AF9EFB57CA4CB3F;          // 0x30(0x10)(Edit, BlueprintVisible)
	struct FWorldSoftObjectReference             LevelReferemce_32_5504F7634DAC02A4E2DDF2A5150E3846; // 0x40(0x28)(Edit, BlueprintVisible)
	class FName                                  DictionaryKeyName_21_4FA408F94703827A373E0FAAA604257B; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


