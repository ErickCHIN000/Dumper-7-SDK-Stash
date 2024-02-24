#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IO_Spell_GelSphere.IO_Spell_GelSphere_C
// (Actor)

class UClass* AIO_Spell_GelSphere_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IO_Spell_GelSphere_C");

	return Clss;
}


// IO_Spell_GelSphere_C IO_Spell_GelSphere.Default__IO_Spell_GelSphere_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIO_Spell_GelSphere_C* AIO_Spell_GelSphere_C::GetDefaultObj()
{
	static class AIO_Spell_GelSphere_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIO_Spell_GelSphere_C*>(AIO_Spell_GelSphere_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.PlayFeedback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFeedbackData*               FBData                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_Spell_GelSphere_C::PlayFeedback(class UFeedbackData* FBData, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "PlayFeedback");

	Params::AIO_Spell_GelSphere_C_PlayFeedback_Params Parms{};

	Parms.FBData = FBData;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_Spell_GelSphere_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.Wobble__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AIO_Spell_GelSphere_C::Wobble__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "Wobble__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.Wobble__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AIO_Spell_GelSphere_C::Wobble__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "Wobble__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.Wobble__PlayFeedback__EventFunc
// (BlueprintEvent)
// Parameters:

void AIO_Spell_GelSphere_C::Wobble__PlayFeedback__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "Wobble__PlayFeedback__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AIO_Spell_GelSphere_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.DelayedBlast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_Spell_GelSphere_C::DelayedBlast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "DelayedBlast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.BeginCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_Spell_GelSphere_C::BeginCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "BeginCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.StartTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartScale                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_Spell_GelSphere_C::StartTimeline(const struct FVector& StartScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "StartTimeline");

	Params::AIO_Spell_GelSphere_C_StartTimeline_Params Parms{};

	Parms.StartScale = StartScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.SetupOrb
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_Spell_GelSphere_C::SetupOrb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "SetupOrb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.AttachedTargetDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_Spell_GelSphere_C::AttachedTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "AttachedTargetDied");

	Params::AIO_Spell_GelSphere_C_AttachedTargetDied_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.OnAttachedTargedCloaked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_Spell_GelSphere_C::OnAttachedTargedCloaked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "OnAttachedTargedCloaked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_Spell_GelSphere.IO_Spell_GelSphere_C.ExecuteUbergraph_IO_Spell_GelSphere
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// struct FVector                     K2Node_CustomEvent_StartScale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsGbx_Damage_Type                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCauseDamageStatusEffectOverridesK2Node_MakeStruct_CauseDamageStatusEffectOverrides               (NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_PlayerEnemyInteractions_C>K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakDamageComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCompanionTargetingSocket_Socket                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamageReceiver                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// class UAICloakComponent*           CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_Spell_GelSphere_C::ExecuteUbergraph_IO_Spell_GelSphere(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& K2Node_CustomEvent_StartScale, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, bool CallFunc_IsAlive_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess1, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, class FName CallFunc_GetCompanionTargetingSocket_Socket, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class UAICloakComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_Spell_GelSphere_C", "ExecuteUbergraph_IO_Spell_GelSphere");

	Params::AIO_Spell_GelSphere_C_ExecuteUbergraph_IO_Spell_GelSphere_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_StartScale = K2Node_CustomEvent_StartScale;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsGbx_Damage_Type = K2Node_ClassDynamicCast_AsGbx_Damage_Type;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_CauseDamageStatusEffectOverrides = K2Node_MakeStruct_CauseDamageStatusEffectOverrides;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions = K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetCompanionTargetingSocket_Socket = CallFunc_GetCompanionTargetingSocket_Socket;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_DamageReceiver = K2Node_CustomEvent_DamageReceiver;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}


