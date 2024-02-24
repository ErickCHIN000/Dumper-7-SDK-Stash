#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C
// (Actor)

class UClass* AIO_TEDProjectile_ThrowableHole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IO_TEDProjectile_ThrowableHole_C");

	return Clss;
}


// IO_TEDProjectile_ThrowableHole_C IO_TEDProjectile_ThrowableHole.Default__IO_TEDProjectile_ThrowableHole_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIO_TEDProjectile_ThrowableHole_C* AIO_TEDProjectile_ThrowableHole_C::GetDefaultObj()
{
	static class AIO_TEDProjectile_ThrowableHole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIO_TEDProjectile_ThrowableHole_C*>(AIO_TEDProjectile_ThrowableHole_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.StartLifetimeExpireTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_ThrowableHole_C::StartLifetimeExpireTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "StartLifetimeExpireTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.StartDealingDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_TEDProjectile_ThrowableHole_C::StartDealingDamage(bool Temp_bool_Variable, bool Temp_bool_Variable1, float Temp_float_Variable, float Temp_float_Variable1, const struct FHitResult& Temp_struct_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select1_Default, float CallFunc_Divide_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "StartDealingDamage");

	Params::AIO_TEDProjectile_ThrowableHole_C_StartDealingDamage_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.OnRep_HoleState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AIO_TEDProjectile_ThrowableHole_C::OnRep_HoleState(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "OnRep_HoleState");

	Params::AIO_TEDProjectile_ThrowableHole_C_OnRep_HoleState_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_ThrowableHole_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.GbxAsyncRequest_Spawned_473CE9B24D9EF446C7E5B8AEB0A14943
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_TEDProjectile_ThrowableHole_C::GbxAsyncRequest_Spawned_473CE9B24D9EF446C7E5B8AEB0A14943(class AActor* Actor, int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "GbxAsyncRequest_Spawned_473CE9B24D9EF446C7E5B8AEB0A14943");

	Params::AIO_TEDProjectile_ThrowableHole_C_GbxAsyncRequest_Spawned_473CE9B24D9EF446C7E5B8AEB0A14943_Params Parms{};

	Parms.Actor = Actor;
	Parms.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.OnHoleClosing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_ThrowableHole_C::OnHoleClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "OnHoleClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.OnHoleOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_ThrowableHole_C::OnHoleOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "OnHoleOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.OnHoleOpening
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_ThrowableHole_C::OnHoleOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "OnHoleOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.SetStateOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_ThrowableHole_C::SetStateOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "SetStateOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.SetStateClosing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_ThrowableHole_C::SetStateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "SetStateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.SetStateClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_ThrowableHole_C::SetStateClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "SetStateClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_ThrowableHole_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.Audio_Play_Hole_Open
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_ThrowableHole_C::Audio_Play_Hole_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "Audio_Play_Hole_Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.OnHoleClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_TEDProjectile_ThrowableHole_C::OnHoleClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "OnHoleClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C.ExecuteUbergraph_IO_TEDProjectile_ThrowableHole
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASplat*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InstanceIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASplat*                      K2Node_DynamicCast_AsSplat                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplatData*                  Temp_object_Variable1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable2                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue2                        (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class USingularityComponent*       CallFunc_CreateSingularity_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_TEDProjectile_ThrowableHole_C::ExecuteUbergraph_IO_TEDProjectile_ThrowableHole(int32 EntryPoint, class ASplat* Temp_object_Variable, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, class ASplat* K2Node_DynamicCast_AsSplat, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class USplatData* Temp_object_Variable1, class USplatData* Temp_object_Variable2, bool Temp_bool_Variable1, bool Temp_bool_Variable2, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable3, float Temp_float_Variable2, float Temp_float_Variable3, bool Temp_bool_Variable4, float Temp_float_Variable4, float Temp_float_Variable5, bool Temp_bool_Variable5, float Temp_float_Variable6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, class USplatData* K2Node_Select_Default, bool CallFunc_HasAuthority_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_HasAuthority_ReturnValue2, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select1_Default, float K2Node_Select2_Default, float K2Node_Select3_Default, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FHitResult& Temp_struct_Variable, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float K2Node_Select4_Default, float K2Node_Select5_Default, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_TEDProjectile_ThrowableHole_C", "ExecuteUbergraph_IO_TEDProjectile_ThrowableHole");

	Params::AIO_TEDProjectile_ThrowableHole_C_ExecuteUbergraph_IO_TEDProjectile_ThrowableHole_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_InstanceIndex = K2Node_CustomEvent_InstanceIndex;
	Parms.K2Node_DynamicCast_AsSplat = K2Node_DynamicCast_AsSplat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue2 = CallFunc_K2_SetTimerDelegate_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_CreateSingularity_ReturnValue = CallFunc_CreateSingularity_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


