#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_GiantOffering_Leave.GA_CreatureAbility_GiantOffering_Leave_C
// (None)

class UClass* UGA_CreatureAbility_GiantOffering_Leave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_GiantOffering_Leave_C");

	return Clss;
}


// GA_CreatureAbility_GiantOffering_Leave_C GA_CreatureAbility_GiantOffering_Leave.Default__GA_CreatureAbility_GiantOffering_Leave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_GiantOffering_Leave_C* UGA_CreatureAbility_GiantOffering_Leave_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_GiantOffering_Leave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_GiantOffering_Leave_C*>(UGA_CreatureAbility_GiantOffering_Leave_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_GiantOffering_Leave.GA_CreatureAbility_GiantOffering_Leave_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_GiantOffering_Leave_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantOffering_Leave_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_GiantOffering_Leave.GA_CreatureAbility_GiantOffering_Leave_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_GiantOffering_Leave_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantOffering_Leave_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_GiantOffering_Leave_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_GiantOffering_Leave.GA_CreatureAbility_GiantOffering_Leave_C.ExecuteUbergraph_GA_CreatureAbility_GiantOffering_Leave
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_Wildlife_SunGiant_C*K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_GiantOffering_Leave_C::ExecuteUbergraph_GA_CreatureAbility_GiantOffering_Leave(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, bool K2Node_Event_bWasCancelled, class ABP_Creature_Wildlife_SunGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantOffering_Leave_C", "ExecuteUbergraph_GA_CreatureAbility_GiantOffering_Leave");

	Params::UGA_CreatureAbility_GiantOffering_Leave_C_ExecuteUbergraph_GA_CreatureAbility_GiantOffering_Leave_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant = K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


