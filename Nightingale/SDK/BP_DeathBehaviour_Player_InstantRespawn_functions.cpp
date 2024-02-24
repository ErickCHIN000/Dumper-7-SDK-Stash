#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeathBehaviour_Player_InstantRespawn.BP_DeathBehaviour_Player_InstantRespawn_C
// (None)

class UClass* UBP_DeathBehaviour_Player_InstantRespawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeathBehaviour_Player_InstantRespawn_C");

	return Clss;
}


// BP_DeathBehaviour_Player_InstantRespawn_C BP_DeathBehaviour_Player_InstantRespawn.Default__BP_DeathBehaviour_Player_InstantRespawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DeathBehaviour_Player_InstantRespawn_C* UBP_DeathBehaviour_Player_InstantRespawn_C::GetDefaultObj()
{
	static class UBP_DeathBehaviour_Player_InstantRespawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DeathBehaviour_Player_InstantRespawn_C*>(UBP_DeathBehaviour_Player_InstantRespawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DeathBehaviour_Player_InstantRespawn.BP_DeathBehaviour_Player_InstantRespawn_C.StartDowned
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_DeathBehaviour_Player_InstantRespawn_C::StartDowned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathBehaviour_Player_InstantRespawn_C", "StartDowned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathBehaviour_Player_InstantRespawn.BP_DeathBehaviour_Player_InstantRespawn_C.StartDeath
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_DeathBehaviour_Player_InstantRespawn_C::StartDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathBehaviour_Player_InstantRespawn_C", "StartDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathBehaviour_Player_InstantRespawn.BP_DeathBehaviour_Player_InstantRespawn_C.StartRespawn
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_DeathBehaviour_Player_InstantRespawn_C::StartRespawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathBehaviour_Player_InstantRespawn_C", "StartRespawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathBehaviour_Player_InstantRespawn.BP_DeathBehaviour_Player_InstantRespawn_C.ExecuteUbergraph_BP_DeathBehaviour_Player_InstantRespawn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunSpawningEQS_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DeathDownedTimeRemainingTag_ReturnValue                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_ReturnValue_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DeathDeathTimeRemainingTag_ReturnValue                  (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DeathBehaviour_Player_InstantRespawn_C::ExecuteUbergraph_BP_DeathBehaviour_Player_InstantRespawn(int32 EntryPoint, bool CallFunc_RunSpawningEQS_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue, const struct FGameplayTag& CallFunc_DeathDownedTimeRemainingTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue_1, const struct FGameplayTag& CallFunc_DeathDeathTimeRemainingTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathBehaviour_Player_InstantRespawn_C", "ExecuteUbergraph_BP_DeathBehaviour_Player_InstantRespawn");

	Params::UBP_DeathBehaviour_Player_InstantRespawn_C_ExecuteUbergraph_BP_DeathBehaviour_Player_InstantRespawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RunSpawningEQS_ReturnValue = CallFunc_RunSpawningEQS_ReturnValue;
	Parms.CallFunc_GetPawn_ReturnValue = CallFunc_GetPawn_ReturnValue;
	Parms.CallFunc_DeathDownedTimeRemainingTag_ReturnValue = CallFunc_DeathDownedTimeRemainingTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPawn_ReturnValue_1 = CallFunc_GetPawn_ReturnValue_1;
	Parms.CallFunc_DeathDeathTimeRemainingTag_ReturnValue = CallFunc_DeathDeathTimeRemainingTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


