#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A (0x5F0 - 0x5C6)
// BlueprintGeneratedClass BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C
class ABP_SkeletalItem_Lantern_C : public ABP_SkeletalItem_LightBase_C
{
public:
	uint8                                        Pad_65D3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_IcarusPointLight_C*                BP_IcarusPointLight;                               // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Fill;                                   // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem_Fire;                               // 0x5E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMOD_Lantern_Loop;                                 // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Lantern_C* GetDefaultObj();

	void SetLightAudioState(bool IsLit, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue);
	void CanLight(bool* CanLight);
	void UpdateLightSlotPosition(const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult);
	void ReceiveBeginPlay();
	void Damage();
	void ExecuteUbergraph_BP_SkeletalItem_Lantern(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsLit_Lit, bool CallFunc_DealSelfDamage_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}


