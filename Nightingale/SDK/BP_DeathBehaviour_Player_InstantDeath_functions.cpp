#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeathBehaviour_Player_InstantDeath.BP_DeathBehaviour_Player_InstantDeath_C
// (None)

class UClass* UBP_DeathBehaviour_Player_InstantDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeathBehaviour_Player_InstantDeath_C");

	return Clss;
}


// BP_DeathBehaviour_Player_InstantDeath_C BP_DeathBehaviour_Player_InstantDeath.Default__BP_DeathBehaviour_Player_InstantDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DeathBehaviour_Player_InstantDeath_C* UBP_DeathBehaviour_Player_InstantDeath_C::GetDefaultObj()
{
	static class UBP_DeathBehaviour_Player_InstantDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DeathBehaviour_Player_InstantDeath_C*>(UBP_DeathBehaviour_Player_InstantDeath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DeathBehaviour_Player_InstantDeath.BP_DeathBehaviour_Player_InstantDeath_C.StartDowned
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_DeathBehaviour_Player_InstantDeath_C::StartDowned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathBehaviour_Player_InstantDeath_C", "StartDowned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeathBehaviour_Player_InstantDeath.BP_DeathBehaviour_Player_InstantDeath_C.ExecuteUbergraph_BP_DeathBehaviour_Player_InstantDeath
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DeathDownedTimeRemainingTag_ReturnValue                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_ReturnValue_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DeathBehaviour_Player_InstantDeath_C::ExecuteUbergraph_BP_DeathBehaviour_Player_InstantDeath(int32 EntryPoint, class APawn* CallFunc_GetPawn_ReturnValue, const struct FGameplayTag& CallFunc_DeathDownedTimeRemainingTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathBehaviour_Player_InstantDeath_C", "ExecuteUbergraph_BP_DeathBehaviour_Player_InstantDeath");

	Params::UBP_DeathBehaviour_Player_InstantDeath_C_ExecuteUbergraph_BP_DeathBehaviour_Player_InstantDeath_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPawn_ReturnValue = CallFunc_GetPawn_ReturnValue;
	Parms.CallFunc_DeathDownedTimeRemainingTag_ReturnValue = CallFunc_DeathDownedTimeRemainingTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPawn_ReturnValue_1 = CallFunc_GetPawn_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


