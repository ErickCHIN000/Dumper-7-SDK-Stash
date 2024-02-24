#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5 (0x3C5 - 0x3C0)
// BlueprintGeneratedClass VampireSpawner.VampireSpawner_C
class AVampireSpawner_C : public AAdvancedEnemySpawner_C
{
public:
	bool                                         DivingSpawner_;                                    // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         KickAsFirstAttack_;                                // 0x3C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         Can_kick;                                          // 0x3C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         StartWithPounce_;                                  // 0x3C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         UseEatingAnimation_;                               // 0x3C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class AVampireSpawner_C* GetDefaultObj();

};

}


