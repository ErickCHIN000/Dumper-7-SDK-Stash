#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C
// (None)

class UClass* UBP_Tornado_LaunchGoatComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Tornado_LaunchGoatComponent_C");

	return Clss;
}


// BP_Tornado_LaunchGoatComponent_C BP_Tornado_LaunchGoatComponent.Default__BP_Tornado_LaunchGoatComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Tornado_LaunchGoatComponent_C* UBP_Tornado_LaunchGoatComponent_C::GetDefaultObj()
{
	static class UBP_Tornado_LaunchGoatComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Tornado_LaunchGoatComponent_C*>(UBP_Tornado_LaunchGoatComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C.GetCurrentAlternativeGoatPullForce
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     OutPullForce                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutIsHumanGoat                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Tornado_LaunchGoatComponent_C::GetCurrentAlternativeGoatPullForce(struct FVector* OutPullForce, bool* OutIsHumanGoat, class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tornado_LaunchGoatComponent_C", "GetCurrentAlternativeGoatPullForce");

	Params::UBP_Tornado_LaunchGoatComponent_C_GetCurrentAlternativeGoatPullForce_Params Parms{};

	Parms.CallFunc_GetCurrentAltGoat_ReturnValue = CallFunc_GetCurrentAltGoat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_1 = CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_2 = CallFunc_EqualEqual_GameplayTag_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetCurrentAltGoat_ReturnValue_1 = CallFunc_GetCurrentAltGoat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPullForce != nullptr)
		*OutPullForce = std::move(Parms.OutPullForce);

	if (OutIsHumanGoat != nullptr)
		*OutIsHumanGoat = Parms.OutIsHumanGoat;

}


// Function BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C.Height Reached
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Tornado_LaunchGoatComponent_C::Height_Reached(float Height, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tornado_LaunchGoatComponent_C", "Height Reached");

	Params::UBP_Tornado_LaunchGoatComponent_C_Height_Reached_Params Parms{};

	Parms.Height = Height;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C.SetGoatRagdoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Tornado_LaunchGoatComponent_C::SetGoatRagdoll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tornado_LaunchGoatComponent_C", "SetGoatRagdoll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C.SetSafeTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Tornado_LaunchGoatComponent_C::SetSafeTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tornado_LaunchGoatComponent_C", "SetSafeTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C.SafeTimerExcecute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Tornado_LaunchGoatComponent_C::SafeTimerExcecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tornado_LaunchGoatComponent_C", "SafeTimerExcecute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C.StartDestroyTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Tornado_LaunchGoatComponent_C::StartDestroyTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tornado_LaunchGoatComponent_C", "StartDestroyTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C.DestroyTimerExcecute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Tornado_LaunchGoatComponent_C::DestroyTimerExcecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tornado_LaunchGoatComponent_C", "DestroyTimerExcecute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Tornado_LaunchGoatComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tornado_LaunchGoatComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Tornado_LaunchGoatComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tornado_LaunchGoatComponent_C", "ReceiveTick");

	Params::UBP_Tornado_LaunchGoatComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C.Launch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Tornado_LaunchGoatComponent_C::Launch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tornado_LaunchGoatComponent_C", "Launch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C.ExecuteUbergraph_BP_Tornado_LaunchGoatComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRagdollStateChangeSettings Temp_struct_Variable                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class ABP_Tornado_C*               K2Node_DynamicCast_AsBP_Tornado                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetRagdollBlueprint_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Height_Reached_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCurrentAlternativeGoatPullForce_OutPullForce         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAlternativeGoatPullForce_OutIsHumanGoat       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Tornado_LaunchGoatComponent_C::ExecuteUbergraph_BP_Tornado_LaunchGoatComponent(int32 EntryPoint, const struct FRagdollStateChangeSettings& Temp_struct_Variable, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class ABP_Tornado_C* K2Node_DynamicCast_AsBP_Tornado, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetRagdollBlueprint_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Height_Reached_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_GetCurrentAlternativeGoatPullForce_OutPullForce, bool CallFunc_GetCurrentAlternativeGoatPullForce_OutIsHumanGoat, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tornado_LaunchGoatComponent_C", "ExecuteUbergraph_BP_Tornado_LaunchGoatComponent");

	Params::UBP_Tornado_LaunchGoatComponent_C_ExecuteUbergraph_BP_Tornado_LaunchGoatComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Tornado = K2Node_DynamicCast_AsBP_Tornado;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetRagdollBlueprint_ReturnValue = CallFunc_SetRagdollBlueprint_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Height_Reached_ReturnValue = CallFunc_Height_Reached_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_GetCurrentAlternativeGoatPullForce_OutPullForce = CallFunc_GetCurrentAlternativeGoatPullForce_OutPullForce;
	Parms.CallFunc_GetCurrentAlternativeGoatPullForce_OutIsHumanGoat = CallFunc_GetCurrentAlternativeGoatPullForce_OutIsHumanGoat;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


