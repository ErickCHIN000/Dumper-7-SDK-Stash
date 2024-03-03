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
// UserDefinedStruct S_AbilityData.S_AbilityData
struct FS_AbilityData
{
public:
	class UClass*                                Ability_24_469317C7416D83EBBCA4A098E649650D;       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                UnlockedAbility_25_D918264D4AFF52BA979E23BF65CF8CD6; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       InHandParticle_2_FE4BF96A42CDD0A0EEF55E9F8B608E16; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Image_15_C1371AA64B3F02ACF05EEC8AF24CA5BB;         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Name_16_D7A1F20C47501EEE871143B0B56A9B53;          // 0x20(0x18)(Edit, BlueprintVisible)
	class FText                                  Description_17_9DC0EB2845104EEA8F58AD9F14AFB0BA;   // 0x38(0x18)(Edit, BlueprintVisible)
	int32                                        PointsRequired_18_A474D2EE434E9E8305FCAF96F16E37F2; // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StartUnlocked_19_03CD60A048FBEB0E58175A8E0B75E7CA; // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BD3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LockedText_20_D57CAC384F3CBC589E1D2794772E28D0;    // 0x58(0x18)(Edit, BlueprintVisible)
};

}


