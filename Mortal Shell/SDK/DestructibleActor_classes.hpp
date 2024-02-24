#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA4 (0x2C4 - 0x220)
// BlueprintGeneratedClass DestructibleActor.DestructibleActor_C
class ADestructibleActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     DestroyableCollision;                              // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DestroyableMesh;                                   // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Health;                                            // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseHealthValue_;                                   // 0x24C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1625[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IncomingDamage;                                    // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanTakeDamage;                                     // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_162F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       DestroyEffect;                                     // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KillDelayAfterDestroyed;                           // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1637[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             DestroyedSound;                                    // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnLoot_;                                        // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_163D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                LootItem;                                          // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyOnCollide_;                                 // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1642[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoadHealth;                                        // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LoadCanTakeDamage;                                 // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1652[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DestroyedSoundVolume;                              // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUsable_Actor_C*                       HideActorIndicatorUntilDestroyed;                  // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACrawlSpace_C*                         HideCrawlspaceIndicatorUntilDestroyed;             // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnDualSenseAudio;                               // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ControllerAudio_Type         DualSense_SoundType;                               // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1663[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            DualSense_Sound;                                   // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DualSense_SoundVolume;                             // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ControllerAudio_Type         DualSense_VibrationType;                           // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_166D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            DualSense_Vibration;                               // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DualSense_VibrationVolume;                         // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADestructibleActor_C* GetDefaultObj();

	void DualSense_Audio(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue);
	void SpawnAudio(float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void SpawnDestroyedEffects();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void Reset();
	void ExecuteUbergraph_DestructibleActor(int32 EntryPoint, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, bool CallFunc_IsMyNameInChangedSet_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AUsable_Actor_C* K2Node_DynamicCast_AsUsable_Actor, bool K2Node_DynamicCast_bSuccess, class AUsable_Actor_C* K2Node_DynamicCast_AsUsable_Actor_1, bool K2Node_DynamicCast_bSuccess_1, class AUsable_Actor_C* K2Node_DynamicCast_AsUsable_Actor_2, bool K2Node_DynamicCast_bSuccess_2, class AUsable_Actor_C* K2Node_DynamicCast_AsUsable_Actor_3, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
};

}


