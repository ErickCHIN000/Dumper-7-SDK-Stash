#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C
// (Actor)

class UClass* ABP_StormModeMainMenuTransition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StormModeMainMenuTransition_C");

	return Clss;
}


// BP_StormModeMainMenuTransition_C BP_StormModeMainMenuTransition.Default__BP_StormModeMainMenuTransition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StormModeMainMenuTransition_C* ABP_StormModeMainMenuTransition_C::GetDefaultObj()
{
	static class ABP_StormModeMainMenuTransition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StormModeMainMenuTransition_C*>(ABP_StormModeMainMenuTransition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.Timeline_Transition_Effect__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::Timeline_Transition_Effect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "Timeline_Transition_Effect__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.Timeline_Transition_Effect__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::Timeline_Transition_Effect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "Timeline_Transition_Effect__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.Timeline_Transition_Effect__AlmostFinished__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::Timeline_Transition_Effect__AlmostFinished__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "Timeline_Transition_Effect__AlmostFinished__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.ConsumeEffect__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::ConsumeEffect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "ConsumeEffect__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.ConsumeEffect__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::ConsumeEffect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "ConsumeEffect__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.Timeline_Deactivate_Early__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::Timeline_Deactivate_Early__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "Timeline_Deactivate_Early__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.Timeline_Deactivate_Early__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::Timeline_Deactivate_Early__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "Timeline_Deactivate_Early__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.PlayConsumeEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::PlayConsumeEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "PlayConsumeEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.PlayHalfTransitionEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::PlayHalfTransitionEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "PlayHalfTransitionEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.Transition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::Transition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "Transition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.DeactivateEarly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::DeactivateEarly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "DeactivateEarly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.ExecuteUbergraph_BP_StormModeMainMenuTransition
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StormModeMainMenuTransition_C::ExecuteUbergraph_BP_StormModeMainMenuTransition(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "ExecuteUbergraph_BP_StormModeMainMenuTransition");

	Params::ABP_StormModeMainMenuTransition_C_ExecuteUbergraph_BP_StormModeMainMenuTransition_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1 = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.OnTransitionEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::OnTransitionEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "OnTransitionEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C.OnTransitionFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormModeMainMenuTransition_C::OnTransitionFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormModeMainMenuTransition_C", "OnTransitionFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


