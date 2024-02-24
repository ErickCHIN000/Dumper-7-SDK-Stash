#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x35 (0x255 - 0x220)
// BlueprintGeneratedClass NavPointSpawner.NavPointSpawner_C
class ANavPointSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         TriggerBox;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Rotation_E9F5BC28418814CE277C5CB021FF905C; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_E9F5BC28418814CE277C5CB021FF905C; // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1435[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NavPointNumber;                                    // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsOnOpeningPoint;                                  // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ANavPointSpawner_C* GetDefaultObj();

	void UnlockItems();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_NavPointSpawner(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, class AActor* K2Node_Event_OtherActor, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class ADestructible_Barrell_Spawner_C* K2Node_DynamicCast_AsDestructible_Barrell_Spawner, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class ARoasterSpawner_C* K2Node_DynamicCast_AsRoaster_Spawner, bool K2Node_DynamicCast_bSuccess_3, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AStairMarker_C* K2Node_DynamicCast_AsStair_Marker, bool K2Node_DynamicCast_bSuccess_4, class ATreasurePedestal_C* K2Node_DynamicCast_AsTreasure_Pedestal, bool K2Node_DynamicCast_bSuccess_5, class AColumnMarker_C* K2Node_DynamicCast_AsColumn_Marker, bool K2Node_DynamicCast_bSuccess_6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}


