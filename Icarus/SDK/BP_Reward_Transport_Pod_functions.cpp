#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Reward_Transport_Pod.BP_Reward_Transport_Pod_C
// (Actor)

class UClass* ABP_Reward_Transport_Pod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Reward_Transport_Pod_C");

	return Clss;
}


// BP_Reward_Transport_Pod_C BP_Reward_Transport_Pod.Default__BP_Reward_Transport_Pod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Reward_Transport_Pod_C* ABP_Reward_Transport_Pod_C::GetDefaultObj()
{
	static class ABP_Reward_Transport_Pod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Reward_Transport_Pod_C*>(ABP_Reward_Transport_Pod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Reward_Transport_Pod.BP_Reward_Transport_Pod_C.OnRep_FireFlare
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Reward_Transport_Pod_C::OnRep_FireFlare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_C", "OnRep_FireFlare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Reward_Transport_Pod.BP_Reward_Transport_Pod_C.WorldObject_Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Reward_Transport_Pod_C::WorldObject_Interact(class AActor* Instigator, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_C", "WorldObject_Interact");

	Params::ABP_Reward_Transport_Pod_C_WorldObject_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Reward_Transport_Pod.BP_Reward_Transport_Pod_C.FireFlareTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Reward_Transport_Pod_C::FireFlareTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_C", "FireFlareTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Reward_Transport_Pod.BP_Reward_Transport_Pod_C.FireFlareTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Reward_Transport_Pod_C::FireFlareTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_C", "FireFlareTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Reward_Transport_Pod.BP_Reward_Transport_Pod_C.Flare
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Reward_Transport_Pod_C::Flare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_C", "Flare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Reward_Transport_Pod.BP_Reward_Transport_Pod_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Reward_Transport_Pod_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Reward_Transport_Pod.BP_Reward_Transport_Pod_C.OnLanded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Reward_Transport_Pod_C::OnLanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_C", "OnLanded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Reward_Transport_Pod.BP_Reward_Transport_Pod_C.ExecuteUbergraph_BP_Reward_Transport_Pod
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Reward_Transport_Pod_C::ExecuteUbergraph_BP_Reward_Transport_Pod(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_C", "ExecuteUbergraph_BP_Reward_Transport_Pod");

	Params::ABP_Reward_Transport_Pod_C_ExecuteUbergraph_BP_Reward_Transport_Pod_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


