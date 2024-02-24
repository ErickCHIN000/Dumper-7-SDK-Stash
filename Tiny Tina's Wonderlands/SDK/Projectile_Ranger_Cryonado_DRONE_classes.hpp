#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x900 - 0x7C0)
// BlueprintGeneratedClass Projectile_Ranger_Cryonado_DRONE.Projectile_Ranger_Cryonado_DRONE_C
class AProjectile_Ranger_Cryonado_DRONE_C : public AOakDroneProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              PS_Ranger_Cryonado;                                // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      DamageSocket;                                      // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFindingTargets;                                 // 0x7D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_168B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetDelay;                                       // 0x7DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       EQS_FindTarget;                                    // 0x7E0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FDataTableValueHandle                 RangerTornadoDuration;                             // 0x898(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWwiseEvent*                           Audio_CryoNadoStart;                               // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CurrentTarget;                                     // 0x8B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               LastKnownTargetLocation;                           // 0x8C0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_169A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWwisePlaybackInstance                AudioRef;                                          // 0x8D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameResourceData*                     DurationResourcePool;                              // 0x8E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         OwnerPlayerCharacter;                              // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Wandering;                                         // 0x8F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitHoverRadius;                                   // 0x8FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_Ranger_Cryonado_DRONE_C* GetDefaultObj();

	void InitTargeting(class AActor* CurrentTarget, class AActor* CallFunc_GetOwner_ReturnValue);
	void BeginCleanup(class AActor* CallFunc_GetOwner_ReturnValue);
	void FindNewTarget(bool* TargetFound, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void ReleaseHomingTarget(class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SetHomingAndLocation(class AActor* NewTarget, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_FindNewTarget_TargetFound);
	void DoCryonadoDamage(const struct FHitResult& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue);
	void UserConstructionScript();
	void CheckTargetValidity();
	void TryWanderingAimlessly();
	void ReceiveBeginPlay();
	void OnDeath_ProjectileHomingTarget(class AActor* DamageReceiver, class AActor* DamageCauser);
	void SetNewHomingTarget(class AActor* TargetActor);
	void OnBeginExplode();
	void Ranger_02_CleanUp(const struct FGameResourcePoolReference& ResourcePool);
	void DoStartupPresentation();
	void ExecuteUbergraph_Projectile_Ranger_Cryonado_DRONE(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_FindNewTarget_TargetFound, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, class AActor* K2Node_CustomEvent_TargetActor, const class FString& CallFunc_GetDisplayName_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, bool CallFunc_FindNewTarget_TargetFound1, const class FString& CallFunc_Conv_VectorToString_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3);
};

}


