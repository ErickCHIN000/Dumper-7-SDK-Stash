#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C
// (Actor)

class UClass* ABP_PortalEncounter_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PortalEncounter_Tutorial_C");

	return Clss;
}


// BP_PortalEncounter_Tutorial_C BP_PortalEncounter_Tutorial.Default__BP_PortalEncounter_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PortalEncounter_Tutorial_C* ABP_PortalEncounter_Tutorial_C::GetDefaultObj()
{
	static class ABP_PortalEncounter_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PortalEncounter_Tutorial_C*>(ABP_PortalEncounter_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.GetSpawnTransforms
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>          SpawnTransforms                                                  (Parm, OutParm)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_3                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_4                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          K2Node_MakeArray_Array                                           (ReferenceParm)

void ABP_PortalEncounter_Tutorial_C::GetSpawnTransforms(TArray<struct FTransform>* SpawnTransforms, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_4, TArray<struct FTransform>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "GetSpawnTransforms");

	Params::ABP_PortalEncounter_Tutorial_C_GetSpawnTransforms_Params Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_2 = CallFunc_K2_GetComponentToWorld_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_3 = CallFunc_K2_GetComponentToWorld_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_4 = CallFunc_K2_GetComponentToWorld_ReturnValue_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnTransforms != nullptr)
		*SpawnTransforms = std::move(Parms.SpawnTransforms);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.GetRallyPointLocations
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             RallyPointLocations                                              (Parm, OutParm)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_MakeArray_Array                                           (ReferenceParm)

void ABP_PortalEncounter_Tutorial_C::GetRallyPointLocations(TArray<struct FVector>* RallyPointLocations, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, TArray<struct FVector>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "GetRallyPointLocations");

	Params::ABP_PortalEncounter_Tutorial_C_GetRallyPointLocations_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (RallyPointLocations != nullptr)
		*RallyPointLocations = std::move(Parms.RallyPointLocations);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.InitializeStructureReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalEncounter_Tutorial_C::InitializeStructureReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "InitializeStructureReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.AdjustTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*>     SpawnPoints                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PortalEncounter_Tutorial_C::AdjustTransform(TArray<class USceneComponent*>& SpawnPoints, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class USceneComponent* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "AdjustTransform");

	Params::ABP_PortalEncounter_Tutorial_C_AdjustTransform_Params Parms{};

	Parms.SpawnPoints = SpawnPoints;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
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
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.GetArchState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PortalArchStates      ArchState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalEncounter_Tutorial_C::GetArchState(enum class E_PortalArchStates* ArchState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "GetArchState");

	Params::ABP_PortalEncounter_Tutorial_C_GetArchState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ArchState != nullptr)
		*ArchState = Parms.ArchState;

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.OpenEvilPortal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalEncounter_Tutorial_C::OpenEvilPortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "OpenEvilPortal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.ClearPortalTimers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalEncounter_Tutorial_C::ClearPortalTimers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "ClearPortalTimers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.ServerSetArchState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PortalArchStates      NewArchState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalEncounter_Tutorial_C::ServerSetArchState(enum class E_PortalArchStates NewArchState, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "ServerSetArchState");

	Params::ABP_PortalEncounter_Tutorial_C_ServerSetArchState_Params Parms{};

	Parms.NewArchState = NewArchState;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.OnRep_Arch State
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalEncounter_Tutorial_C::OnRep_Arch_State(bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "OnRep_Arch State");

	Params::ABP_PortalEncounter_Tutorial_C_OnRep_Arch_State_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.OldGetSpawnTransforms
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FTransform>          SpawnTransforms                                                  (Parm, OutParm)
// TArray<struct FTransform>          CallFunc_GetSpawnTransforms_SpawnTransforms                      (ReferenceParm)

void ABP_PortalEncounter_Tutorial_C::OldGetSpawnTransforms(TArray<struct FTransform>* SpawnTransforms, TArray<struct FTransform>& CallFunc_GetSpawnTransforms_SpawnTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "OldGetSpawnTransforms");

	Params::ABP_PortalEncounter_Tutorial_C_OldGetSpawnTransforms_Params Parms{};

	Parms.CallFunc_GetSpawnTransforms_SpawnTransforms = CallFunc_GetSpawnTransforms_SpawnTransforms;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnTransforms != nullptr)
		*SpawnTransforms = std::move(Parms.SpawnTransforms);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.Portal Control__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PortalEncounter_Tutorial_C::Portal_Control__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "Portal Control__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.Portal Control__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PortalEncounter_Tutorial_C::Portal_Control__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "Portal Control__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.Portal Control__PortalLoopStop__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_PortalEncounter_Tutorial_C::Portal_Control__PortalLoopStop__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "Portal Control__PortalLoopStop__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.Portal Control__PortalLoopStart__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_PortalEncounter_Tutorial_C::Portal_Control__PortalLoopStart__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "Portal Control__PortalLoopStart__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.PlayOpenSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalEncounter_Tutorial_C::PlayOpenSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "PlayOpenSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.ReverseOpenSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalEncounter_Tutorial_C::ReverseOpenSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "ReverseOpenSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.SetArchStateGoodOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalEncounter_Tutorial_C::SetArchStateGoodOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "SetArchStateGoodOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.SetArchStateEvilOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalEncounter_Tutorial_C::SetArchStateEvilOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "SetArchStateEvilOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.ExecuteUbergraph_BP_PortalEncounter_Tutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalEncounter_Tutorial_C::ExecuteUbergraph_BP_PortalEncounter_Tutorial(int32 EntryPoint, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, bool CallFunc_PostAsyncAkEventScoped_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "ExecuteUbergraph_BP_PortalEncounter_Tutorial");

	Params::ABP_PortalEncounter_Tutorial_C_ExecuteUbergraph_BP_PortalEncounter_Tutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue = CallFunc_PostAsyncAkEventScoped_ReturnValue;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue_1 = CallFunc_PostAsyncAkEventScoped_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalEncounter_Tutorial.BP_PortalEncounter_Tutorial_C.ArchStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PortalArchStates      ArchState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalEncounter_Tutorial_C::ArchStateChanged__DelegateSignature(enum class E_PortalArchStates ArchState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalEncounter_Tutorial_C", "ArchStateChanged__DelegateSignature");

	Params::ABP_PortalEncounter_Tutorial_C_ArchStateChanged__DelegateSignature_Params Parms{};

	Parms.ArchState = ArchState;

	UObject::ProcessEvent(Func, &Parms);

}

}


