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

// 0x80 (0x80 - 0x0)
// UserDefinedStruct S_WeakPointDefinition.S_WeakPointDefinition
struct FS_WeakPointDefinition
{
public:
	class FName                                  WeakPointID_24_E8AA6DFC481C451D717C19B9FC8CED91;   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StartDisabled_6_ED8124FE4444EB2772EFCAAAE568ABE7;  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_WeakPointTriggerTypes        TriggerType_18_B3B97F524305E9D1C3EA11809438286C;   // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_WeakPointTriggerConditions   TriggerCondition_17_3440F7DB4316BF0D0DE719AAABD395DB; // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_295F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageThreshold_27_84DB29AE415B909F3298928A63B96FEF; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WindowTime_25_4FA901C54D52EA245DC64393ADC9CF44;    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WindowDamageDecayRate_46_BA51E21749BB9180D6544AAE895745C5; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreTag_29_A5C37C5F41BC38723008AC98B0BFD68D;     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2971[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HitDamageMultiplier_33_02E2F66E48FE7A1FA830C1AE36D272CB; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, float>             HitDamageTypeMultiplier_54_BCB3EF434344B3095403588394915E1F; // 0x20(0x50)(Edit, BlueprintVisible)
	TArray<class FName>                          AdditionalBones_41_9B4EB43A46FBF4A58FEEC092E93A61E6; // 0x70(0x10)(Edit, BlueprintVisible)
};

}


