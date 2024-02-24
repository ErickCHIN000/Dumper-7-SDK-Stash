#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_EotenExitGround.GA_CreatureAbility_EotenExitGround_C
// (None)

class UClass* UGA_CreatureAbility_EotenExitGround_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_EotenExitGround_C");

	return Clss;
}


// GA_CreatureAbility_EotenExitGround_C GA_CreatureAbility_EotenExitGround.Default__GA_CreatureAbility_EotenExitGround_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_EotenExitGround_C* UGA_CreatureAbility_EotenExitGround_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_EotenExitGround_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_EotenExitGround_C*>(UGA_CreatureAbility_EotenExitGround_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_EotenExitGround.GA_CreatureAbility_EotenExitGround_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_EotenExitGround_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_EotenExitGround_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_EotenExitGround.GA_CreatureAbility_EotenExitGround_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_EotenExitGround_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_EotenExitGround_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_EotenExitGround_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_EotenExitGround.GA_CreatureAbility_EotenExitGround_C.ExecuteUbergraph_GA_CreatureAbility_EotenExitGround
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_Wildlife_Eoten_C*K2Node_DynamicCast_AsBP_Creature_Wildlife_Eoten                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_EotenExitGround_C::ExecuteUbergraph_GA_CreatureAbility_EotenExitGround(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool K2Node_Event_bWasCancelled, class ABP_Creature_Wildlife_Eoten_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Eoten, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& Temp_struct_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_EotenExitGround_C", "ExecuteUbergraph_GA_CreatureAbility_EotenExitGround");

	Params::UGA_CreatureAbility_EotenExitGround_C_ExecuteUbergraph_GA_CreatureAbility_EotenExitGround_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_DynamicCast_AsBP_Creature_Wildlife_Eoten = K2Node_DynamicCast_AsBP_Creature_Wildlife_Eoten;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


