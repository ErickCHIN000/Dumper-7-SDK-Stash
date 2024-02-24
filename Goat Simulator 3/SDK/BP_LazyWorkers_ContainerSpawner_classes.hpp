#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x82 (0x2B2 - 0x230)
// BlueprintGeneratedClass BP_LazyWorkers_ContainerSpawner.BP_LazyWorkers_ContainerSpawner_C
class ABP_LazyWorkers_ContainerSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ContainerLerp_Alpha_C90C1ADC4D65D04A2F90D1939041EF5A; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ContainerLerp__Direction_C90C1ADC4D65D04A2F90D1939041EF5A; // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CD3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ContainerLerp;                                     // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnZOffset;                                      // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnContainerDelayMin;                            // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnContainerDelayMax;                            // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnContainerDelayMinCurrent;                     // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnContainerDelayMaxCurrent;                     // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnContainerDelayMultiplier;                     // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           ContainerMesh;                                     // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            ContainerMats;                                     // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AGGGoat*                               GoatAimingFor;                                     // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnVelocityTowardGoat;                           // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ContainerSpawnLocation;                            // 0x28C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SeekTimeTowardGoat;                                // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AlphaBeforeBecomingPhysActor;                      // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraShakeRadius;                                 // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CF3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             ContainerSpawnSound;                               // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FirstTime;                                         // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsActive;                                         // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_LazyWorkers_ContainerSpawner_C* GetDefaultObj();

	void ContainerLerp__FinishedFunc();
	void ContainerLerp__UpdateFunc();
	void SpawnContainer();
	void SpawnContainerTimer();
	void ActivateContainerSpawner(bool FirstTime);
	void OnFinishedLoadingResources_Event(class AGGPhysicsActor* PActor);
	void ContainerSeekTowardGoat(class AGGPhysicsActor* Container, float SeekingTime, float AlphaToGoBeforeBecomingPhysActor);
	void PlaySpawnSound(const struct FVector& Location);
	void DeactivateContainerSpawner();
	void ExecuteUbergraph_BP_LazyWorkers_ContainerSpawner(int32 EntryPoint, bool K2Node_CustomEvent_firstTime, class AGGPhysicsActor* K2Node_CustomEvent_PActor, const struct FVector& CallFunc_MakeVector_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGGPhysicsActor* K2Node_CustomEvent_Container, float K2Node_CustomEvent_SeekingTime, float K2Node_CustomEvent_AlphaToGoBeforeBecomingPhysActor, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_VSize_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, TArray<class AGGGoat*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class AGGGoat* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_LazyWorker_ContainerFromSpawner_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_7, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
};

}


