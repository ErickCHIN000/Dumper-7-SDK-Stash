#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x300 - 0x2E4)
// BlueprintGeneratedClass Ability_Player_Hearthstone.Ability_Player_Hearthstone_C
class AAbility_Player_Hearthstone_C : public AAbility_Player_C
{
public:
	uint8                                        Pad_27EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                       TeleportParticle;                                  // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound;                                             // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_Player_Hearthstone_C* GetDefaultObj();

	void AbilityTeleport(bool* Result, class ANpc_bed_C* CallFunc_GetActorOfClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_K2_TeleportTo_ReturnValue);
	void Pressed();
	void UpdateEffect();
	void Effect();
	void SpawnTeleportParticle();
	void ReceiveTick(float DeltaSeconds);
	void PlaySound();
	void Released();
	void ExecuteUbergraph_Ability_Player_Hearthstone(int32 EntryPoint, bool CallFunc_GetIsCasting_Result, bool CallFunc_StartAbility_Result, bool CallFunc_GetIsCasting_Result_1, bool CallFunc_GetIsCasting_Result_2, bool CallFunc_GetIsPressed_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, bool CallFunc_AbilityTeleport_Result, float K2Node_Event_DeltaSeconds, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}


