#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x12D1 - 0x1270)
// BlueprintGeneratedClass BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C
class ABP_GGNPC_Humanoid_C : public AGGNPC_Humanoid
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        FadeInTimeline_FloatTrack_F0BAFBF14E4489A208405F89D271BF07; // 0x1278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeInTimeline__Direction_F0BAFBF14E4489A208405F89D271BF07; // 0x127C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F19[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeInTimeline;                                    // 0x1280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             NPCHitSound;                                       // 0x1288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGoatRagdollImpactSoundStruct> RagdollImpactSounds;                               // 0x1290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        MinRagdollImpactImpulse;                           // 0x12A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinRagdollImpactImpulseWhenGrabbed;                // 0x12A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxRagdollimpactImpulse;                           // 0x12A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinImpactSoundVol;                                 // 0x12AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxImpactSoundVol;                                 // 0x12B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastRagdollImpactLoc;                              // 0x12B4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastRagdolledImpactTime;                           // 0x12C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RagdollImpactRefireDelay;                          // 0x12C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       NPCHitParticle;                                    // 0x12C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachHitParticle;                                 // 0x12D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_GGNPC_Humanoid_C* GetDefaultObj();

	void GetRagdollImpactSound(float ImpactImpulse, class USoundCue** SoundToPlay, class USoundCue* CurrentSoundToPlay, int32 Temp_int_Array_Index_Variable, const struct FGoatRagdollImpactSoundStruct& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void FadeInTimeline__FinishedFunc();
	void FadeInTimeline__UpdateFunc();
	void OnRep_GenderSet();
	void BPFadeIn();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void PlayRagdollImpactSound(const struct FVector& NormalImpulse);
	void ObjectWasHeadbutted(class AGGGoat* HeadbuttingGoat);
	void PlayHeadbuttFX();
	void AnimNotifyTriggered(struct FGameplayTag& NotifyTag);
	void ExecuteUbergraph_BP_GGNPC_Humanoid(int32 EntryPoint, bool CallFunc_IsRagdoll_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& K2Node_CustomEvent_NormalImpulse, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue_1, class USoundCue* CallFunc_GetRagdollImpactSound_SoundToPlay, class USoundCue* CallFunc_GetRagdollImpactSound_SoundToPlay_1, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_IsGrabbedByActor_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, class AGGGoat* K2Node_Event_HeadbuttingGoat, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_PlayVoiceOver_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FGameplayTag& K2Node_Event_NotifyTag, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
};

}


