#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x46 (0x838 - 0x7F2)
// BlueprintGeneratedClass Proj_VLA_PS_Automagic_Tracker_new.Proj_VLA_PS_Automagic_Tracker_new_C
class AProj_VLA_PS_Automagic_Tracker_new_C : public AProj_Weapon_BaseProjectile_C
{
public:
	uint8                                        Pad_45F4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              TargetLocked;                                      // 0x800(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Highlight;                                         // 0x808(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  WwiseAudio;                                        // 0x810(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_Bouncy_Grenade_Trail_Fuse;                      // 0x818(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABPWeap_PS_VLA_Automagic_C*            MyWeapon;                                          // 0x820(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                StuckTarget;                                       // 0x828(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UAbility_AUTOMAGICEXE_C*               AutomagicAbility;                                  // 0x830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProj_VLA_PS_Automagic_Tracker_new_C* GetDefaultObj();

	void SingleTargetTAg(bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAlive_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable);
	void OnRep_StuckTarget(class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void TargetStuck();
	void AutoMagic_EnemyDied();
	void OnExplode();
	void FuseTriggered();
	void ExecuteUbergraph_Proj_VLA_PS_Automagic_Tracker_new(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool Temp_bool_IsClosed_Variable1, bool CallFunc_Not_PreBool_ReturnValue2, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_StickToTarget_Attached, bool CallFunc_StickToTarget_StuckToActor, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FOakPipelineDamageInput& CallFunc_MakeOakPipelineDamageInput_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsAlive_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_AUTOMAGICEXE_C* K2Node_DynamicCast_AsAbility_AUTOMAGICEXE, bool K2Node_DynamicCast_bSuccess, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_Not_PreBool_ReturnValue3);
};

}


