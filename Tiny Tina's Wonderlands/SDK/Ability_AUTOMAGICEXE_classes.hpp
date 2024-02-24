#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x120 - 0x110)
// BlueprintGeneratedClass Ability_AUTOMAGICEXE.Ability_AUTOMAGICEXE_C
class UAbility_AUTOMAGICEXE_C : public UOakAbility
{
public:
	class AActor*                                MagicMissileTarget;                                // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          RemoveTargetTimer;                                 // 0x118(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_AUTOMAGICEXE_C* GetDefaultObj();

	void RemoveMissileTarget();
	void SetMagicMissileTarget(class AActor* NewTarget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void GetMagicMissileTarget(class AActor** Res);
};

}


