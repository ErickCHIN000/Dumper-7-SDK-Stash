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
// UserDefinedStruct S_CreatureSocketTraceData.S_CreatureSocketTraceData
struct FS_CreatureSocketTraceData
{
public:
	class FName                                  SocketStart_13_3BFA76B24BC2E94BC71C8794C21C3455;   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SocketEnd_14_759C2F7A4809AD7F54DC09AA9933E3C8;     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Radius_8_7D2F842443B7BA5B6769DEA70ADAD390;         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AttackTag_24_4A056DAC4D0374D995846E9C9D00ED06;     // 0x14(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_997[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 GameplayTags_18_755914A44316E148FF1DBC8D04F3A71B;  // 0x20(0x20)(Edit, BlueprintVisible)
	struct FS_CreatureKnockbackData              KnockbackData_21_EBD7BCD54FAB43D772C9A896D4CB2774; // 0x40(0x2E)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99A[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


