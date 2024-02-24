#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C
// (Actor)

class UClass* ABP_EquipmentMenuOpenTransition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EquipmentMenuOpenTransition_C");

	return Clss;
}


// BP_EquipmentMenuOpenTransition_C BP_EquipmentMenuOpenTransition.Default__BP_EquipmentMenuOpenTransition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EquipmentMenuOpenTransition_C* ABP_EquipmentMenuOpenTransition_C::GetDefaultObj()
{
	static class ABP_EquipmentMenuOpenTransition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EquipmentMenuOpenTransition_C*>(ABP_EquipmentMenuOpenTransition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C.DoorTransitionEffectTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuOpenTransition_C::DoorTransitionEffectTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuOpenTransition_C", "DoorTransitionEffectTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C.DoorTransitionEffectTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuOpenTransition_C::DoorTransitionEffectTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuOpenTransition_C", "DoorTransitionEffectTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C.ConsumeEffect__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuOpenTransition_C::ConsumeEffect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuOpenTransition_C", "ConsumeEffect__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C.ConsumeEffect__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuOpenTransition_C::ConsumeEffect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuOpenTransition_C", "ConsumeEffect__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuOpenTransition_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuOpenTransition_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C.PlayConsumeEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuOpenTransition_C::PlayConsumeEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuOpenTransition_C", "PlayConsumeEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C.PlayHalfTransitionEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuOpenTransition_C::PlayHalfTransitionEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuOpenTransition_C", "PlayHalfTransitionEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C.Transition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuOpenTransition_C::Transition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuOpenTransition_C", "Transition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuOpenTransition_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuOpenTransition_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C.ExecuteUbergraph_BP_EquipmentMenuOpenTransition
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

void ABP_EquipmentMenuOpenTransition_C::ExecuteUbergraph_BP_EquipmentMenuOpenTransition(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuOpenTransition_C", "ExecuteUbergraph_BP_EquipmentMenuOpenTransition");

	Params::ABP_EquipmentMenuOpenTransition_C_ExecuteUbergraph_BP_EquipmentMenuOpenTransition_Params Parms{};

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

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C.OnTransitionEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuOpenTransition_C::OnTransitionEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuOpenTransition_C", "OnTransitionEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C.OnTransitionFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuOpenTransition_C::OnTransitionFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuOpenTransition_C", "OnTransitionFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


