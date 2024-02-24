#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneFormPP.BP_StoneFormPP_C
// (Actor)

class UClass* ABP_StoneFormPP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneFormPP_C");

	return Clss;
}


// BP_StoneFormPP_C BP_StoneFormPP.Default__BP_StoneFormPP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneFormPP_C* ABP_StoneFormPP_C::GetDefaultObj()
{
	static class ABP_StoneFormPP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneFormPP_C*>(ABP_StoneFormPP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StoneFormPP.BP_StoneFormPP_C.EffectTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StoneFormPP_C::EffectTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFormPP_C", "EffectTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFormPP.BP_StoneFormPP_C.EffectTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StoneFormPP_C::EffectTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFormPP_C", "EffectTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFormPP.BP_StoneFormPP_C.ReverseTImeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StoneFormPP_C::ReverseTImeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFormPP_C", "ReverseTImeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFormPP.BP_StoneFormPP_C.ReverseTImeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StoneFormPP_C::ReverseTImeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFormPP_C", "ReverseTImeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFormPP.BP_StoneFormPP_C.Heartbeat__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StoneFormPP_C::Heartbeat__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFormPP_C", "Heartbeat__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFormPP.BP_StoneFormPP_C.Heartbeat__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StoneFormPP_C::Heartbeat__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFormPP_C", "Heartbeat__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFormPP.BP_StoneFormPP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StoneFormPP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFormPP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFormPP.BP_StoneFormPP_C.StartStoneFormEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StoneFormPP_C::StartStoneFormEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFormPP_C", "StartStoneFormEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFormPP.BP_StoneFormPP_C.StopAndDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StoneFormPP_C::StopAndDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFormPP_C", "StopAndDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFormPP.BP_StoneFormPP_C.CancelStartEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StoneFormPP_C::CancelStartEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFormPP_C", "CancelStartEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFormPP.BP_StoneFormPP_C.CancelHeartbeatEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StoneFormPP_C::CancelHeartbeatEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFormPP_C", "CancelHeartbeatEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFormPP.BP_StoneFormPP_C.ExecuteUbergraph_BP_StoneFormPP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StoneFormPP_C::ExecuteUbergraph_BP_StoneFormPP(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFormPP_C", "ExecuteUbergraph_BP_StoneFormPP");

	Params::ABP_StoneFormPP_C_ExecuteUbergraph_BP_StoneFormPP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


