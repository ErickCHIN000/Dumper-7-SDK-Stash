#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD4 (0x2F4 - 0x220)
// BlueprintGeneratedClass BP_Frost_Spike_Player.BP_Frost_Spike_Player_C
class ABP_Frost_Spike_Player_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                       Decal;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Spike_AOE;                                       // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Decal_Opacity_Alpha_DFDDFBF6411E53415C8228B98683D93E; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Decal_Opacity__Direction_DFDDFBF6411E53415C8228B98683D93E; // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BAE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Decal_Opacity;                            // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Spike_Lower_Alpha_7E786CCC4EB30EC04E8D9DADC6E902AA; // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Spike_Lower__Direction_7E786CCC4EB30EC04E8D9DADC6E902AA; // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Spike_Lower;                              // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Spike_Raise_Alpha_EE161088493450960D8D3CA7A89AC007; // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Spike_Raise__Direction_EE161088493450960D8D3CA7A89AC007; // 0x274(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BC9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Spike_Raise;                              // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDirectlyTargetingPlayer_;                        // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1BCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FreezeDuration;                                    // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AffectsPlayer_;                                    // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1BD3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   OtherComponent;                                    // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RaiseSpikePlayRate;                                // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        LowerSpikePlayRate;                                // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AffectsEnemies_;                                   // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1BDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IceParticleLife;                                   // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1BE1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        TargetsAlreadyHit;                                 // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bConsistentFreeze;                                 // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OtherActor;                                        // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     EnemyCharacter;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          ZeroBase;                                          // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_PlayerFreeze;                                // 0x2E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Decal;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DropItemBoost;                                     // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Frost_Spike_Player_C* GetDefaultObj();

	void ShouldIncreaseDropItemChance(bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEnemyCommonInterface_C> CallFunc_EnemyCommon_GetHealth_self_CastInput, float CallFunc_EnemyCommon_GetHealth_Health, float CallFunc_EnemyCommon_GetHealth_MaxHealth, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void SetDecalOpacityAndScale(float Alpha, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue);
	void Decal_CreateMID(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void Player_Unfreeze(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base);
	void Player_Freeze(class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class ICryptBossInterface_C> K2Node_DynamicCast_AsCrypt_Boss_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void ApplyDamageToPlayer(float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetSpikeZLocation(float NewLocation_Z, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void Sound_IceSpike(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void SetRandomScaleZ(float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void InitializeSpikeAOEParticle(const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam);
	void DebugFrostSpike(const class FString& String, float CallFunc_GetGameTimeInSeconds_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7);
	bool AlreadyHit_(bool CallFunc_Array_Contains_ReturnValue);
	bool IgnoreSuper_(bool CallFunc_ComponentHasTag_ReturnValue);
	void Timeline_Spike_Raise__FinishedFunc();
	void Timeline_Spike_Raise__UpdateFunc();
	void Timeline_Spike_Lower__FinishedFunc();
	void Timeline_Spike_Lower__UpdateFunc();
	void Timeline_Decal_Opacity__FinishedFunc();
	void Timeline_Decal_Opacity__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void UnFreezePlayer();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void TryEnemyCharacter();
	void Spike_Raise_Start();
	void Spike_Lower_Start();
	void Spike_Decal_Opacity();
	void ExecuteUbergraph_BP_Frost_Spike_Player(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IgnoreSuper__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_AlreadyHit__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_IsClosed_Variable, TScriptInterface<class ICryptBossInterface_C> K2Node_DynamicCast_AsCrypt_Boss_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BossCryptCharacter_GetThrowAttack_ThrowAttack, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_6);
};

}


