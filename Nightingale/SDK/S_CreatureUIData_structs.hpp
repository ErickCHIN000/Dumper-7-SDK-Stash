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

// 0x59 (0x59 - 0x0)
// UserDefinedStruct S_CreatureUIData.S_CreatureUIData
struct FS_CreatureUIData
{
public:
	class FText                                  CreatureName_2_DC83695545356E53970200BDB975D888;   // 0x0(0x18)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>             CreatureIcon_7_DF4EEA0643C8418D15044B8CF2A9A018;   // 0x18(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        FerocityMin_10_BB446F4C4B68F7CDEDF902B32DA39A04;   // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FerocityMax_12_42DB45344FD4021F041B8CAE20C45427;   // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EBiomeID>                  Biomes_16_E1592CDE48EAC92ABE18348E6664D599;        // 0x48(0x10)(Edit, BlueprintVisible)
	bool                                         DefaultShowNameplate_19_D2A233F74E1D799A216806B6FA79980C; // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


