#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x280 (0xA40 - 0x7C0)
// BlueprintGeneratedClass Proj_Shaman_17.Proj_Shaman_17_C
class AProj_Shaman_17_C : public AOakDroneProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(Transient, DuplicateTransient)
	class UGameResourcePoolManagerComponent*     GameResourcePoolManager;                           // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  ProjAudio;                                         // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_Base;                                           // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      DamageSocket;                                      // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TargetDelay;                                       // 0x7E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       EQS_FindTarget;                                    // 0x7F0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWwiseEvent*                           Audio_CryoNadoStart;                               // 0x8A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CurrentTarget;                                     // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                AudioRef;                                          // 0x8B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                       SpawnFX;                                           // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CleanUpFX;                                         // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverRadius_Player;                                // 0x8E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverRadiusMin_Player;                             // 0x8E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverSpeed_Player;                                 // 0x8E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverRadius_Target;                                // 0x8EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverRadiusMin_Target;                             // 0x8F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverSpeed_Target;                                 // 0x8F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class UParticleSystem*>  ElementalBaseFX;                                   // 0x8F8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class UParticleSystem*>  ElementalSpawnFX;                                  // 0x948(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class UParticleSystem*>  ElementalCleanUpFX;                                // 0x998(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        DamagePerTick;                                     // 0x9E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_300E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DamageType;                                        // 0x9F0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AOakCharacter*                         OwnerPlayerCharacter;                              // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MantisOverrideDmgType;                             // 0xA00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OverrideTarget;                                    // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           StartProjAudio;                                    // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           StopProjAudio;                                     // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageMultiplier;                                  // 0xA20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_301F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DamageMultiplierHandle;                            // 0xA28(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class AProj_Shaman_17_C* GetDefaultObj();

	void GetClawArmorElement(class UClass** Res);
	void OnRep_DamageType(class UParticleSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UParticleSystem* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, class UParticleSystem* CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2);
	void IsValidOverrideTarget(class AActor* Actor, bool* ValidOverrideTarget, class UTargetableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsHostile_ReturnValue, bool CallFunc_IsTargetableByAIPlayers_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void GetClawElement(class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UGbxAbility* CallFunc_FindAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue2, TScriptInterface<class IBPI_ClawArmor_C> K2Node_DynamicCast_AsBPI_Claw_Armor, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetClawArmorElement_Res);
	void TrackCompanion(bool Condition, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue);
	void SetElement(class UClass* NewDamageType, bool Temp_bool_Variable, bool CallFunc_IsValidClass_ReturnValue, class UClass* K2Node_Select_Default);
	void UpdateDamageDealt(float NewDamagePerTick, class UClass* NewDamageType, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FHitResult& Temp_struct_Variable, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1);
	void SetHoverData(float HoverRadius, float HoverRadiusMin, float HoverSpeed);
	void InitTargeting(class AActor* CurrentTarget);
	void BeginCleanup(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue);
	void FindNewTarget(bool* TargetFound, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReleaseHomingTarget(class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SetHomingAndLocation(class AActor* NewTarget, bool CallFunc_IsValid_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_FindNewTarget_TargetFound);
	void UserConstructionScript();
	void CheckTargetValidity();
	void HoverAtOwner();
	void OnDeath_ProjectileHomingTarget(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void OnBeginExplode();
	void OnPlayerPing(class AActor* TargetActor, const struct FVector& TargetLocation, class AOakPlayerController* AlertInstigator);
	void ExecuteUbergraph_Proj_Shaman_17(int32 EntryPoint, bool CallFunc_FindNewTarget_TargetFound, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, bool CallFunc_FindNewTarget_TargetFound1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_TargetActor, const struct FVector& K2Node_CustomEvent_TargetLocation, class AOakPlayerController* K2Node_CustomEvent_AlertInstigator, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidOverrideTarget_ValidOverrideTarget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


