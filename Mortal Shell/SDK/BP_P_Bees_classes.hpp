#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x279 - 0x220)
// BlueprintGeneratedClass BP_P_Bees.BP_P_Bees_C
class ABP_P_Bees_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ActorToChase;                                      // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        ParticleHealAmount;                                // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeSinceSpawned;                                  // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBeforeAttract;                                // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1203[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CollideGameTimes;                                  // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        CollideGameTimeOffset;                             // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PatricleExtraDamageAmt;                            // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBeforeDestroy;                                // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBeforeAbsorb;                                 // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   GameInstanceRef;                                   // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasReceivedDOT_;                                   // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_P_Bees_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void DamageForEachBee();
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_P_Bees(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_EventName, float K2Node_ComponentBoundEvent_EmitterTime, int32 K2Node_ComponentBoundEvent_ParticleTime, const struct FVector& K2Node_ComponentBoundEvent_Location, const struct FVector& K2Node_ComponentBoundEvent_Velocity, const struct FVector& K2Node_ComponentBoundEvent_Direction, const struct FVector& K2Node_ComponentBoundEvent_Normal, class FName K2Node_ComponentBoundEvent_BoneName, class UPhysicalMaterial* K2Node_ComponentBoundEvent_PhysMat, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


