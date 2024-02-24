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
// UserDefinedStruct S_CreatureBeamTraceData.S_CreatureBeamTraceData
struct FS_CreatureBeamTraceData
{
public:
	class FName                                  SocketStart_13_3BFA76B24BC2E94BC71C8794C21C3455;   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BeamLength_32_C7227E6A4E55DD5F60EB25B27A0ED993;    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Radius_40_88766BFA4E5C1556DA97338A09F11053;        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseTarget_28_FE513F0544A8A4FC90DB8393A82F45E9;     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2053[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TrackingRate_26_7D2F842443B7BA5B6769DEA70ADAD390;  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AttackTag_24_4A056DAC4D0374D995846E9C9D00ED06;     // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 GameplayTags_18_755914A44316E148FF1DBC8D04F3A71B;  // 0x20(0x20)(Edit, BlueprintVisible)
	struct FS_CreatureKnockbackData              KnockbackData_21_EBD7BCD54FAB43D772C9A896D4CB2774; // 0x40(0x2E)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2061[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


