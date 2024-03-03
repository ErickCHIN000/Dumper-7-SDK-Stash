#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2FC - 0x2E4)
// BlueprintGeneratedClass Ability_Player_Fireball.Ability_Player_Fireball_C
class AAbility_Player_Fireball_C : public AAbility_Player_C
{
public:
	uint8                                        Pad_B20[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        MontageCounter;                                    // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseLeftHandSocket;                                 // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B21[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitialProjectileSpeed;                            // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_Player_Fireball_C* GetDefaultObj();

	void Effect();
	void Released();
	void ResetMontageCounter();
	void UpdateMontageCounter();
	void UpdateSocket();
	void ExecuteUbergraph_Ability_Player_Fireball(int32 EntryPoint, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_StartAbility_Result, float CallFunc_GetDamage_ReturnValue, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAE_FireballProjectile_C* CallFunc_FinishSpawningActor_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FName K2Node_Select_Default, const struct FTransform& CallFunc_GetCrosshairTransform_ReturnValue);
};

}


