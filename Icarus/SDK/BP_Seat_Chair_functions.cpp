#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Seat_Chair.BP_Seat_Chair_C
// (Actor)

class UClass* ABP_Seat_Chair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Seat_Chair_C");

	return Clss;
}


// BP_Seat_Chair_C BP_Seat_Chair.Default__BP_Seat_Chair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Seat_Chair_C* ABP_Seat_Chair_C::GetDefaultObj()
{
	static class ABP_Seat_Chair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Seat_Chair_C*>(ABP_Seat_Chair_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Seat_Chair.BP_Seat_Chair_C.FindExit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     OutExitLocation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    OutExitRotation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_FindExit_OutExitLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindExit_OutExitRotation                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindExit_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ChairBase_C*             K2Node_DynamicCast_AsBP_Chair_Base                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_FindExitSpot_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Seat_Chair_C::FindExit(struct FVector* OutExitLocation, struct FRotator* OutExitRotation, const struct FVector& CallFunc_FindExit_OutExitLocation, const struct FRotator& CallFunc_FindExit_OutExitRotation, bool CallFunc_FindExit_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_ChairBase_C* K2Node_DynamicCast_AsBP_Chair_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_FindExitSpot_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Seat_Chair_C", "FindExit");

	Params::ABP_Seat_Chair_C_FindExit_Params Parms{};

	Parms.CallFunc_FindExit_OutExitLocation = CallFunc_FindExit_OutExitLocation;
	Parms.CallFunc_FindExit_OutExitRotation = CallFunc_FindExit_OutExitRotation;
	Parms.CallFunc_FindExit_ReturnValue = CallFunc_FindExit_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Chair_Base = K2Node_DynamicCast_AsBP_Chair_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindExitSpot_ReturnValue = CallFunc_FindExitSpot_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutExitLocation != nullptr)
		*OutExitLocation = std::move(Parms.OutExitLocation);

	if (OutExitRotation != nullptr)
		*OutExitRotation = std::move(Parms.OutExitRotation);

	return Parms.ReturnValue;

}


// Function BP_Seat_Chair.BP_Seat_Chair_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Seat_Chair_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Seat_Chair_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Seat_Chair.BP_Seat_Chair_C.OwningBedDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Seat_Chair_C::OwningBedDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Seat_Chair_C", "OwningBedDestroyed");

	Params::ABP_Seat_Chair_C_OwningBedDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Seat_Chair.BP_Seat_Chair_C.ExecuteUbergraph_BP_Seat_Chair
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Seat_Chair_C::ExecuteUbergraph_BP_Seat_Chair(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Seat_Chair_C", "ExecuteUbergraph_BP_Seat_Chair");

	Params::ABP_Seat_Chair_C_ExecuteUbergraph_BP_Seat_Chair_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


