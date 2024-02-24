#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x35C - 0x320)
// BlueprintGeneratedClass BP_FireInstanceShadow.BP_FireInstanceShadow_C
class ABP_FireInstanceShadow_C : public AFireInstanceShadow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_FireAudio_C*                       Audio;                                             // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FireInstance_RVTCapture_C*         RVTCaptureActor;                                   // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFlammableInstance*>            Instance;                                          // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            RemoveFireRef;                                     // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        DistanceBetweenFoliage;                            // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FireInstanceShadow_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnTransferredTo(class AFireInstanceBase* Dest, class UFlammableInstance* Instance);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__PropagatedMesh_K2Node_ComponentBoundEvent_1_OnConcaveHullMeshGenerated__DelegateSignature();
	void ReceiveTick(float DeltaSeconds);
	void RemoveFireInstance(class UFlammableInstance* Instance, class UFlammableState* State);
	void OnFlammableInstanceAdded(class UFlammableInstance* Instance);
	void ExecuteUbergraph_BP_FireInstanceShadow(int32 EntryPoint, class UFlammableInstance* K2Node_Event_Instance, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_FireInstance_RVTCapture_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_FireAudio_C* CallFunc_FinishSpawningActor_ReturnValue_1, class AFireInstanceBase* K2Node_Event_Dest, class UFlammableInstance* K2Node_Event_Instance_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, float K2Node_Event_DeltaSeconds, class UFlammableInstance* K2Node_CustomEvent_Instance, class UFlammableState* K2Node_CustomEvent_State, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
	void RemoveFireRef__DelegateSignature(class UFlammableInstance* FlammableInstanceRef);
};

}


