#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D (0x3DD - 0x3C0)
// BlueprintGeneratedClass HeavyBrigandSpawner.HeavyBrigandSpawner_C
class AHeavyBrigandSpawner_C : public AAdvancedEnemySpawner_C
{
public:
	bool                                         FirstAttackIsAmbush_;                              // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_20D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SecondAggroDistance;                               // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAnimMontage*                          BeforeAggroMontage;                                // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAnimMontage*                          AggroMontage;                                      // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        BeforeAggroPosePlayRate;                           // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseBeakMask;                                       // 0x3DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AHeavyBrigandSpawner_C* GetDefaultObj();

};

}


