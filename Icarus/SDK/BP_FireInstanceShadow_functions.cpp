#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FireInstanceShadow.BP_FireInstanceShadow_C
// (Actor)

class UClass* ABP_FireInstanceShadow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FireInstanceShadow_C");

	return Clss;
}


// BP_FireInstanceShadow_C BP_FireInstanceShadow.Default__BP_FireInstanceShadow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FireInstanceShadow_C* ABP_FireInstanceShadow_C::GetDefaultObj()
{
	static class ABP_FireInstanceShadow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FireInstanceShadow_C*>(ABP_FireInstanceShadow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FireInstanceShadow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireInstanceShadow_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.OnTransferredTo
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFireInstanceBase*           Dest                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireInstanceShadow_C::OnTransferredTo(class AFireInstanceBase* Dest, class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireInstanceShadow_C", "OnTransferredTo");

	Params::ABP_FireInstanceShadow_C_OnTransferredTo_Params Parms{};

	Parms.Dest = Dest;
	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireInstanceShadow_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireInstanceShadow_C", "ReceiveEndPlay");

	Params::ABP_FireInstanceShadow_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.BndEvt__PropagatedMesh_K2Node_ComponentBoundEvent_1_OnConcaveHullMeshGenerated__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_FireInstanceShadow_C::BndEvt__PropagatedMesh_K2Node_ComponentBoundEvent_1_OnConcaveHullMeshGenerated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireInstanceShadow_C", "BndEvt__PropagatedMesh_K2Node_ComponentBoundEvent_1_OnConcaveHullMeshGenerated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireInstanceShadow_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireInstanceShadow_C", "ReceiveTick");

	Params::ABP_FireInstanceShadow_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.RemoveFireInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireInstanceShadow_C::RemoveFireInstance(class UFlammableInstance* Instance, class UFlammableState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireInstanceShadow_C", "RemoveFireInstance");

	Params::ABP_FireInstanceShadow_C_RemoveFireInstance_Params Parms{};

	Parms.Instance = Instance;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.OnFlammableInstanceAdded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireInstanceShadow_C::OnFlammableInstanceAdded(class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireInstanceShadow_C", "OnFlammableInstanceAdded");

	Params::ABP_FireInstanceShadow_C_OnFlammableInstanceAdded_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.ExecuteUbergraph_BP_FireInstanceShadow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_Event_Instance                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FireInstance_RVTCapture_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FireAudio_C*             CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFireInstanceBase*           K2Node_Event_Dest                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_Event_Instance_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_CustomEvent_Instance                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             K2Node_CustomEvent_State                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FireInstanceShadow_C::ExecuteUbergraph_BP_FireInstanceShadow(int32 EntryPoint, class UFlammableInstance* K2Node_Event_Instance, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_FireInstance_RVTCapture_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_FireAudio_C* CallFunc_FinishSpawningActor_ReturnValue_1, class AFireInstanceBase* K2Node_Event_Dest, class UFlammableInstance* K2Node_Event_Instance_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, float K2Node_Event_DeltaSeconds, class UFlammableInstance* K2Node_CustomEvent_Instance, class UFlammableState* K2Node_CustomEvent_State, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireInstanceShadow_C", "ExecuteUbergraph_BP_FireInstanceShadow");

	Params::ABP_FireInstanceShadow_C_ExecuteUbergraph_BP_FireInstanceShadow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Instance = K2Node_Event_Instance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.K2Node_Event_Dest = K2Node_Event_Dest;
	Parms.K2Node_Event_Instance_1 = K2Node_Event_Instance_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_Instance = K2Node_CustomEvent_Instance;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.RemoveFireRef__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          FlammableInstanceRef                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireInstanceShadow_C::RemoveFireRef__DelegateSignature(class UFlammableInstance* FlammableInstanceRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireInstanceShadow_C", "RemoveFireRef__DelegateSignature");

	Params::ABP_FireInstanceShadow_C_RemoveFireRef__DelegateSignature_Params Parms{};

	Parms.FlammableInstanceRef = FlammableInstanceRef;

	UObject::ProcessEvent(Func, &Parms);

}

}


