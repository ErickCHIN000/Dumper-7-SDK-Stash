#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C
// (Actor)

class UClass* AIO_TEDProjectile_Gluttony_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IO_TEDProjectile_Gluttony_C");

	return Clss;
}


// IO_TEDProjectile_Gluttony_C IO_TEDProjectile_Gluttony.Default__IO_TEDProjectile_Gluttony_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIO_TEDProjectile_Gluttony_C* AIO_TEDProjectile_Gluttony_C::GetDefaultObj()
{
	static class AIO_TEDProjectile_Gluttony_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIO_TEDProjectile_Gluttony_C*>(AIO_TEDProjectile_Gluttony_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.OnRep_HoleState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AIO_TEDProjectile_Gluttony_C::OnRep_HoleState(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "OnRep_HoleState");

	Params::AIO_TEDProjectile_Gluttony_C_OnRep_HoleState_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_Gluttony_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_Gluttony_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.OnHoleOpening
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_Gluttony_C::OnHoleOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "OnHoleOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.OnHoleOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_Gluttony_C::OnHoleOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "OnHoleOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.OnHoleClosing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_Gluttony_C::OnHoleClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "OnHoleClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.OnHoleClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_Gluttony_C::OnHoleClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "OnHoleClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.SetStateOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_Gluttony_C::SetStateOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "SetStateOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.SetStateClosing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_Gluttony_C::SetStateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "SetStateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.SetStateClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_Gluttony_C::SetStateClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "SetStateClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.Audio_StartLoop
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_Gluttony_C::Audio_StartLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "Audio_StartLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.Audio_SetRTPCTime
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_TEDProjectile_Gluttony_C::Audio_SetRTPCTime(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "Audio_SetRTPCTime");

	Params::AIO_TEDProjectile_Gluttony_C_Audio_SetRTPCTime_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.Audio_PlayExplosion
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_Gluttony_C::Audio_PlayExplosion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "Audio_PlayExplosion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_Gluttony.IO_TEDProjectile_Gluttony_C.ExecuteUbergraph_IO_TEDProjectile_Gluttony
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue2                        (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USingularityComponent*       CallFunc_CreateSingularity_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)

void AIO_TEDProjectile_Gluttony_C::ExecuteUbergraph_IO_TEDProjectile_Gluttony(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue1, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, float CallFunc_Multiply_FloatFloat_ReturnValue, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue, float K2Node_CustomEvent_Value, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_Gluttony_C", "ExecuteUbergraph_IO_TEDProjectile_Gluttony");

	Params::AIO_TEDProjectile_Gluttony_C_ExecuteUbergraph_IO_TEDProjectile_Gluttony_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue2 = CallFunc_K2_SetTimerDelegate_ReturnValue2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_CreateSingularity_ReturnValue = CallFunc_CreateSingularity_ReturnValue;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


