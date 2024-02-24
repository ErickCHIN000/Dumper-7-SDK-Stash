#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C
// (None)

class UClass* UBP_ActionableBehaviour_SimplePlace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_SimplePlace_C");

	return Clss;
}


// BP_ActionableBehaviour_SimplePlace_C BP_ActionableBehaviour_SimplePlace.Default__BP_ActionableBehaviour_SimplePlace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_SimplePlace_C* UBP_ActionableBehaviour_SimplePlace_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_SimplePlace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_SimplePlace_C*>(UBP_ActionableBehaviour_SimplePlace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.GetInterpolatedTraceData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TraceLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    TraceRotation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualExactly_VectorVector_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_REase_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VEase_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_SimplePlace_C::GetInterpolatedTraceData(struct FVector* TraceLocation, struct FRotator* TraceRotation, bool CallFunc_EqualExactly_VectorVector_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_REase_ReturnValue, const struct FVector& CallFunc_VEase_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "GetInterpolatedTraceData");

	Params::UBP_ActionableBehaviour_SimplePlace_C_GetInterpolatedTraceData_Params Parms{};

	Parms.CallFunc_EqualExactly_VectorVector_ReturnValue = CallFunc_EqualExactly_VectorVector_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_REase_ReturnValue = CallFunc_REase_ReturnValue;
	Parms.CallFunc_VEase_ReturnValue = CallFunc_VEase_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceLocation != nullptr)
		*TraceLocation = std::move(Parms.TraceLocation);

	if (TraceRotation != nullptr)
		*TraceRotation = std::move(Parms.TraceRotation);

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.GetTraceIgnoreActors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>              OutIgnoreActors                                                  (Parm, OutParm)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ReferenceParm)

void UBP_ActionableBehaviour_SimplePlace_C::GetTraceIgnoreActors(TArray<class AActor*>* OutIgnoreActors, TArray<class AActor*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "GetTraceIgnoreActors");

	Params::UBP_ActionableBehaviour_SimplePlace_C_GetTraceIgnoreActors_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIgnoreActors != nullptr)
		*OutIgnoreActors = std::move(Parms.OutIgnoreActors);

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.PerformLineTrace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TraceStart                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceEnd                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TraceComplex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              IgnoreActors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_ActionableBehaviour_SimplePlace_C::PerformLineTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool TraceComplex, TArray<class AActor*>& IgnoreActors, struct FHitResult* OutHit, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "PerformLineTrace");

	Params::UBP_ActionableBehaviour_SimplePlace_C_PerformLineTrace_Params Parms{};

	Parms.TraceStart = TraceStart;
	Parms.TraceEnd = TraceEnd;
	Parms.TraceComplex = TraceComplex;
	Parms.IgnoreActors = IgnoreActors;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.DoTrace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FRotator                    TraceRotation                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TraceStart                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetInterpolatedTraceData_TraceLocation                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetInterpolatedTraceData_TraceRotation                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetTraceIgnoreActors_OutIgnoreActors                    (ReferenceParm)
// float                              CallFunc_GetTraceDistance_TraceDistance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetTraceIgnoreActors_OutIgnoreActors_1                  (ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTraceDistance_TraceDistance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_PerformLineTrace_OutHit                                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_PerformLineTrace_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqualExactly_VectorVector_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_PerformLineTrace_OutHit_1                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_PerformLineTrace_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_ActionableBehaviour_SimplePlace_C::DoTrace(struct FHitResult* OutHit, const struct FRotator& TraceRotation, const struct FVector& TraceStart, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_GetInterpolatedTraceData_TraceLocation, const struct FRotator& CallFunc_GetInterpolatedTraceData_TraceRotation, TArray<class AActor*>& CallFunc_GetTraceIgnoreActors_OutIgnoreActors, float CallFunc_GetTraceDistance_TraceDistance, TArray<class AActor*>& CallFunc_GetTraceIgnoreActors_OutIgnoreActors_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetTraceDistance_TraceDistance_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_PerformLineTrace_OutHit, bool CallFunc_PerformLineTrace_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, const struct FHitResult& CallFunc_PerformLineTrace_OutHit_1, bool CallFunc_PerformLineTrace_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "DoTrace");

	Params::UBP_ActionableBehaviour_SimplePlace_C_DoTrace_Params Parms{};

	Parms.TraceRotation = TraceRotation;
	Parms.TraceStart = TraceStart;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetInterpolatedTraceData_TraceLocation = CallFunc_GetInterpolatedTraceData_TraceLocation;
	Parms.CallFunc_GetInterpolatedTraceData_TraceRotation = CallFunc_GetInterpolatedTraceData_TraceRotation;
	Parms.CallFunc_GetTraceIgnoreActors_OutIgnoreActors = CallFunc_GetTraceIgnoreActors_OutIgnoreActors;
	Parms.CallFunc_GetTraceDistance_TraceDistance = CallFunc_GetTraceDistance_TraceDistance;
	Parms.CallFunc_GetTraceIgnoreActors_OutIgnoreActors_1 = CallFunc_GetTraceIgnoreActors_OutIgnoreActors_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetTraceDistance_TraceDistance_1 = CallFunc_GetTraceDistance_TraceDistance_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_PerformLineTrace_OutHit = CallFunc_PerformLineTrace_OutHit;
	Parms.CallFunc_PerformLineTrace_ReturnValue = CallFunc_PerformLineTrace_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_NotEqualExactly_VectorVector_ReturnValue = CallFunc_NotEqualExactly_VectorVector_ReturnValue;
	Parms.CallFunc_PerformLineTrace_OutHit_1 = CallFunc_PerformLineTrace_OutHit_1;
	Parms.CallFunc_PerformLineTrace_ReturnValue_1 = CallFunc_PerformLineTrace_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.ShouldActionCameraTrace
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EActionableEventType    ActionableType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      ActionableTrigger                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldTrace                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_SimplePlace_C::ShouldActionCameraTrace(enum class EActionableEventType ActionableType, enum class EActionableTrigger ActionableTrigger, bool* ShouldTrace, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "ShouldActionCameraTrace");

	Params::UBP_ActionableBehaviour_SimplePlace_C_ShouldActionCameraTrace_Params Parms{};

	Parms.ActionableType = ActionableType;
	Parms.ActionableTrigger = ActionableTrigger;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldTrace != nullptr)
		*ShouldTrace = Parms.ShouldTrace;

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.GetTraceDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              TraceDistance                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_SimplePlace_C::GetTraceDistance(float* TraceDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "GetTraceDistance");

	Params::UBP_ActionableBehaviour_SimplePlace_C_GetTraceDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TraceDistance != nullptr)
		*TraceDistance = Parms.TraceDistance;

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.TickCameraTraceHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               DidHit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_SimplePlace_C::TickCameraTraceHit(const struct FHitResult& Hit, bool DidHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "TickCameraTraceHit");

	Params::UBP_ActionableBehaviour_SimplePlace_C_TickCameraTraceHit_Params Parms{};

	Parms.Hit = Hit;
	Parms.DidHit = DidHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.OnActionCameraTraceHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_ActionableBehaviour_SimplePlace_C::OnActionCameraTraceHit(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "OnActionCameraTraceHit");

	Params::UBP_ActionableBehaviour_SimplePlace_C_OnActionCameraTraceHit_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.PerformAction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InvokingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    OnActionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      ActionTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_SimplePlace_C::PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "PerformAction");

	Params::UBP_ActionableBehaviour_SimplePlace_C_PerformAction_Params Parms{};

	Parms.InvokingActor = InvokingActor;
	Parms.OnActionType = OnActionType;
	Parms.ActionTrigger = ActionTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_SimplePlace_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "ReceiveTick");

	Params::UBP_ActionableBehaviour_SimplePlace_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_SimplePlace_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.Server_OnActionCameraTraceHit
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitTrace                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_ActionableBehaviour_SimplePlace_C::Server_OnActionCameraTraceHit(const struct FHitResult& HitTrace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "Server_OnActionCameraTraceHit");

	Params::UBP_ActionableBehaviour_SimplePlace_C_Server_OnActionCameraTraceHit_Params Parms{};

	Parms.HitTrace = HitTrace;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.UpdatePositionOnServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_SimplePlace_C::UpdatePositionOnServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "UpdatePositionOnServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.Server_UpdatePositionFromClient
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DeployTraceOrigin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    DeployTraceRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_SimplePlace_C::Server_UpdatePositionFromClient(const struct FVector& DeployTraceOrigin, const struct FRotator& DeployTraceRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "Server_UpdatePositionFromClient");

	Params::UBP_ActionableBehaviour_SimplePlace_C_Server_UpdatePositionFromClient_Params Parms{};

	Parms.DeployTraceOrigin = DeployTraceOrigin;
	Parms.DeployTraceRotation = DeployTraceRotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.ExecuteUbergraph_BP_ActionableBehaviour_SimplePlace
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_InvokingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_Event_OnActionType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_Event_ActionTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldActionCameraTrace_ShouldTrace                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_DoTrace_OutHit                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_DoTrace_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_DoTrace_OutHit_1                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_DoTrace_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_CustomEvent_HitTrace                                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FVector                     K2Node_CustomEvent_DeployTraceOrigin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_DeployTraceRotation                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_SimplePlace_C::ExecuteUbergraph_BP_ActionableBehaviour_SimplePlace(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_2, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ShouldActionCameraTrace_ShouldTrace, float K2Node_Event_DeltaSeconds, const struct FHitResult& CallFunc_DoTrace_OutHit, bool CallFunc_DoTrace_ReturnValue, const struct FHitResult& CallFunc_DoTrace_OutHit_1, bool CallFunc_DoTrace_ReturnValue_1, const struct FHitResult& K2Node_CustomEvent_HitTrace, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& K2Node_CustomEvent_DeployTraceOrigin, const struct FRotator& K2Node_CustomEvent_DeployTraceRotation, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_SimplePlace_C", "ExecuteUbergraph_BP_ActionableBehaviour_SimplePlace");

	Params::UBP_ActionableBehaviour_SimplePlace_C_ExecuteUbergraph_BP_ActionableBehaviour_SimplePlace_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_2 = CallFunc_IsLocallyControlled_ReturnValue_2;
	Parms.K2Node_Event_InvokingActor = K2Node_Event_InvokingActor;
	Parms.K2Node_Event_OnActionType = K2Node_Event_OnActionType;
	Parms.K2Node_Event_ActionTrigger = K2Node_Event_ActionTrigger;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_ShouldActionCameraTrace_ShouldTrace = CallFunc_ShouldActionCameraTrace_ShouldTrace;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_DoTrace_OutHit = CallFunc_DoTrace_OutHit;
	Parms.CallFunc_DoTrace_ReturnValue = CallFunc_DoTrace_ReturnValue;
	Parms.CallFunc_DoTrace_OutHit_1 = CallFunc_DoTrace_OutHit_1;
	Parms.CallFunc_DoTrace_ReturnValue_1 = CallFunc_DoTrace_ReturnValue_1;
	Parms.K2Node_CustomEvent_HitTrace = K2Node_CustomEvent_HitTrace;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_DeployTraceOrigin = K2Node_CustomEvent_DeployTraceOrigin;
	Parms.K2Node_CustomEvent_DeployTraceRotation = K2Node_CustomEvent_DeployTraceRotation;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


