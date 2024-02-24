#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA08 - 0x9F0)
// BlueprintGeneratedClass BP_LazyWorker_ContainerFromSpawner.BP_LazyWorker_ContainerFromSpawner_C
class ABP_LazyWorker_ContainerFromSpawner_C : public ABP_PActor_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        CameraShakeRadius;                                 // 0x9F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_BE1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             ContainerImpactSound;                              // 0xA00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LazyWorker_ContainerFromSpawner_C* GetDefaultObj();

	void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void PlayImpactSound();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LazyWorker_ContainerFromSpawner(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FRagdollStateChangeSettings& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& Temp_object_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetRagdollBlueprint_ReturnValue, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
};

}


