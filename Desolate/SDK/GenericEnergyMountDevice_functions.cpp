#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericEnergyMountDevice.GenericEnergyMountDevice_C
// (Actor)

class UClass* AGenericEnergyMountDevice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericEnergyMountDevice_C");

	return Clss;
}


// GenericEnergyMountDevice_C GenericEnergyMountDevice.Default__GenericEnergyMountDevice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericEnergyMountDevice_C* AGenericEnergyMountDevice_C::GetDefaultObj()
{
	static class AGenericEnergyMountDevice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericEnergyMountDevice_C*>(AGenericEnergyMountDevice_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.ShouldNotBeSaved
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGenericEnergyMountDevice_C::ShouldNotBeSaved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "ShouldNotBeSaved");

	Params::AGenericEnergyMountDevice_C_ShouldNotBeSaved_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.GetActorState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName AGenericEnergyMountDevice_C::GetActorState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "GetActorState");

	Params::AGenericEnergyMountDevice_C_GetActorState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.DisableAttachedContainersEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericEnergyMountDevice_C::DisableAttachedContainersEffects(class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "DisableAttachedContainersEffects");

	Params::AGenericEnergyMountDevice_C_DisableAttachedContainersEffects_Params Parms{};

	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.EnableAttachedContainersEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericEnergyMountDevice_C::EnableAttachedContainersEffects(class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "EnableAttachedContainersEffects");

	Params::AGenericEnergyMountDevice_C_EnableAttachedContainersEffects_Params Parms{};

	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.OnRep_AttachedContainer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGenericEnergyMountDevice_C::OnRep_AttachedContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "OnRep_AttachedContainer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.CanHandleEnergyContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericEnergyMountDevice_C::CanHandleEnergyContainer(bool* Result, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "CanHandleEnergyContainer");

	Params::AGenericEnergyMountDevice_C_CanHandleEnergyContainer_Params Parms{};

	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.StopWorkEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGenericEnergyMountDevice_C::StopWorkEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "StopWorkEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.StartWorkEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGenericEnergyMountDevice_C::StartWorkEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "StartWorkEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.OnConteinerDetached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHGlobals*                  CallFunc_GetSHGlobals_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericEnergyMountDevice_C::OnConteinerDetached(class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "OnConteinerDetached");

	Params::AGenericEnergyMountDevice_C_OnConteinerDetached_Params Parms{};

	Parms.CallFunc_GetSHGlobals_ReturnValue = CallFunc_GetSHGlobals_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.OnConteinerAttached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnergyContainer_C*          Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEnergy_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGlobals*                  CallFunc_GetSHGlobals_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericEnergyMountDevice_C::OnConteinerAttached(class AEnergyContainer_C* Container, float CallFunc_GetEnergy_Result, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "OnConteinerAttached");

	Params::AGenericEnergyMountDevice_C_OnConteinerAttached_Params Parms{};

	Parms.Container = Container;
	Parms.CallFunc_GetEnergy_Result = CallFunc_GetEnergy_Result;
	Parms.CallFunc_GetSHGlobals_ReturnValue = CallFunc_GetSHGlobals_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.IsWorking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericEnergyMountDevice_C::IsWorking(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "IsWorking");

	Params::AGenericEnergyMountDevice_C_IsWorking_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.BndEvt__SHMountPoint_K2Node_ComponentBoundEvent_1_OnDetachDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AGenericEnergyMountDevice_C::BndEvt__SHMountPoint_K2Node_ComponentBoundEvent_1_OnDetachDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "BndEvt__SHMountPoint_K2Node_ComponentBoundEvent_1_OnDetachDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.BndEvt__SHMountPoint_K2Node_ComponentBoundEvent_0_OnAttachDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericEnergyMountDevice_C::BndEvt__SHMountPoint_K2Node_ComponentBoundEvent_0_OnAttachDelegate__DelegateSignature(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "BndEvt__SHMountPoint_K2Node_ComponentBoundEvent_0_OnAttachDelegate__DelegateSignature");

	Params::AGenericEnergyMountDevice_C_BndEvt__SHMountPoint_K2Node_ComponentBoundEvent_0_OnAttachDelegate__DelegateSignature_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.OnStateRestored
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGenericEnergyMountDevice_C::OnStateRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "OnStateRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.BndEvt__Box_K2Node_ComponentBoundEvent_48_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGenericEnergyMountDevice_C::BndEvt__Box_K2Node_ComponentBoundEvent_48_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "BndEvt__Box_K2Node_ComponentBoundEvent_48_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AGenericEnergyMountDevice_C_BndEvt__Box_K2Node_ComponentBoundEvent_48_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.OnContainerDropped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnergyContainer_C*          Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericEnergyMountDevice_C::OnContainerDropped(class AEnergyContainer_C* Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "OnContainerDropped");

	Params::AGenericEnergyMountDevice_C_OnContainerDropped_Params Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.OnDestroyed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericEnergyMountDevice_C::OnDestroyed_Event_0(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "OnDestroyed_Event_0");

	Params::AGenericEnergyMountDevice_C_OnDestroyed_Event_0_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.AttachContainer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGenericEnergyMountDevice_C::AttachContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "AttachContainer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.SetActorState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StateName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericEnergyMountDevice_C::SetActorState(class FName StateName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "SetActorState");

	Params::AGenericEnergyMountDevice_C_SetActorState_Params Parms{};

	Parms.StateName = StateName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericEnergyMountDevice.GenericEnergyMountDevice_C.ExecuteUbergraph_GenericEnergyMountDevice
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_Actor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnergyContainer_C*          K2Node_DynamicCast_AsEnergy_Container                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AEnergyContainer_C*          K2Node_CustomEvent_Container                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_StateName                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanHandleEnergyContainer_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericEnergyMountDevice_C::ExecuteUbergraph_GenericEnergyMountDevice(int32 EntryPoint, class AActor* K2Node_ComponentBoundEvent_Actor, bool CallFunc_HasAuthority_ReturnValue, class AEnergyContainer_C* K2Node_DynamicCast_AsEnergy_Container, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AEnergyContainer_C* K2Node_CustomEvent_Container, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, class FName K2Node_Event_StateName, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_CanHandleEnergyContainer_Result, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyMountDevice_C", "ExecuteUbergraph_GenericEnergyMountDevice");

	Params::AGenericEnergyMountDevice_C_ExecuteUbergraph_GenericEnergyMountDevice_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Actor = K2Node_ComponentBoundEvent_Actor;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnergy_Container = K2Node_DynamicCast_AsEnergy_Container;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_CustomEvent_Container = K2Node_CustomEvent_Container;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.K2Node_Event_StateName = K2Node_Event_StateName;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_CanHandleEnergyContainer_Result = CallFunc_CanHandleEnergyContainer_Result;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


