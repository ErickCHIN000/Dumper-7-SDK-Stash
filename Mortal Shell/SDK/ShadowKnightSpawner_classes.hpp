#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x3E0 - 0x3C0)
// BlueprintGeneratedClass ShadowKnightSpawner.ShadowKnightSpawner_C
class AShadowKnightSpawner_C : public AAdvancedEnemySpawner_C
{
public:
	class UAnimMontage*                          BeforeAggroPose;                                   // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          BeforeAggroMontage;                                // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BeforeAggroPosePlayRate;                           // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_111D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          AggroMontage;                                      // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AShadowKnightSpawner_C* GetDefaultObj();

};

}


