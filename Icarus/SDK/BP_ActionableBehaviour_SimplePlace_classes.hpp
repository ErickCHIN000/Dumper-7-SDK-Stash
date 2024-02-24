#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15E (0x468 - 0x30A)
// BlueprintGeneratedClass BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C
class UBP_ActionableBehaviour_SimplePlace_C : public UBP_ActionableBehaviour_Base_C
{
public:
	uint8                                        Pad_5459[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TraceDistance;                                     // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TickTraceOnClients;                                // 0x31C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DoSecondaryDownwardTrace;                          // 0x31D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_546E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            OnActionTraceHit;                                  // 0x320(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class EActionableEventType              ActionTypeCache;                                   // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EActionableTrigger                ActionTriggerCache;                                // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x3AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasLastTraceValid;                                 // 0x3AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FHitResult                            LastCameraTrace;                                   // 0x3AC(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               ReplicatedTraceOrigin;                             // 0x434(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ReplicatedTraceRotation;                           // 0x440(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               LastInterpolatedHitLocation;                       // 0x44C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LastInterpolatedHitRotation;                       // 0x458(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        TraceInterpolationSpeed;                           // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_SimplePlace_C* GetDefaultObj();

	void GetInterpolatedTraceData(struct FVector* TraceLocation, struct FRotator* TraceRotation, bool CallFunc_EqualExactly_VectorVector_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_REase_ReturnValue, const struct FVector& CallFunc_VEase_ReturnValue);
	void GetTraceIgnoreActors(TArray<class AActor*>* OutIgnoreActors, TArray<class AActor*>& K2Node_MakeArray_Array);
	bool PerformLineTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool TraceComplex, TArray<class AActor*>& IgnoreActors, struct FHitResult* OutHit, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue);
	bool DoTrace(struct FHitResult* OutHit, const struct FRotator& TraceRotation, const struct FVector& TraceStart, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_GetInterpolatedTraceData_TraceLocation, const struct FRotator& CallFunc_GetInterpolatedTraceData_TraceRotation, TArray<class AActor*>& CallFunc_GetTraceIgnoreActors_OutIgnoreActors, float CallFunc_GetTraceDistance_TraceDistance, TArray<class AActor*>& CallFunc_GetTraceIgnoreActors_OutIgnoreActors_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetTraceDistance_TraceDistance_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_PerformLineTrace_OutHit, bool CallFunc_PerformLineTrace_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, const struct FHitResult& CallFunc_PerformLineTrace_OutHit_1, bool CallFunc_PerformLineTrace_ReturnValue_1);
	void ShouldActionCameraTrace(enum class EActionableEventType ActionableType, enum class EActionableTrigger ActionableTrigger, bool* ShouldTrace, bool K2Node_SwitchEnum_CmpSuccess);
	void GetTraceDistance(float* TraceDistance);
	void TickCameraTraceHit(const struct FHitResult& Hit, bool DidHit);
	void OnActionCameraTraceHit(const struct FHitResult& Hit);
	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Server_OnActionCameraTraceHit(const struct FHitResult& HitTrace);
	void UpdatePositionOnServer();
	void Server_UpdatePositionFromClient(const struct FVector& DeployTraceOrigin, const struct FRotator& DeployTraceRotation);
	void ExecuteUbergraph_BP_ActionableBehaviour_SimplePlace(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_2, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ShouldActionCameraTrace_ShouldTrace, float K2Node_Event_DeltaSeconds, const struct FHitResult& CallFunc_DoTrace_OutHit, bool CallFunc_DoTrace_ReturnValue, const struct FHitResult& CallFunc_DoTrace_OutHit_1, bool CallFunc_DoTrace_ReturnValue_1, const struct FHitResult& K2Node_CustomEvent_HitTrace, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& K2Node_CustomEvent_DeployTraceOrigin, const struct FRotator& K2Node_CustomEvent_DeployTraceRotation, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue);
};

}


