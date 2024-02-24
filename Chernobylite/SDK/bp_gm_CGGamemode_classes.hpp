#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x5F9 - 0x5E0)
// BlueprintGeneratedClass bp_gm_CGGamemode.bp_gm_CGGamemode_C
class Abp_gm_CGGamemode_C : public ACGGameModeBase
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x5E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        WalkStepLoudness;                                  // 0x5E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RunSpeedLoudness;                                  // 0x5EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StaminaRegenerationSpeed;                          // 0x5F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StaminaDegenerationSpeed;                          // 0x5F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SprintToggleable;                                  // 0x5F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Abp_gm_CGGamemode_C* GetDefaultObj();

};

}


