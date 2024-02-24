#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Melee_04_Giant_Tree_Club.GA_CreatureAbility_Melee_04_Giant_Tree_Club_C
// (None)

class UClass* UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Melee_04_Giant_Tree_Club_C");

	return Clss;
}


// GA_CreatureAbility_Melee_04_Giant_Tree_Club_C GA_CreatureAbility_Melee_04_Giant_Tree_Club.Default__GA_CreatureAbility_Melee_04_Giant_Tree_Club_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C* UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C*>(UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Melee_04_Giant_Tree_Club.GA_CreatureAbility_Melee_04_Giant_Tree_Club_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Melee_04_Giant_Tree_Club_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_Melee_04_Giant_Tree_Club.GA_CreatureAbility_Melee_04_Giant_Tree_Club_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Melee_04_Giant_Tree_Club_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_Melee_04_Giant_Tree_Club.GA_CreatureAbility_Melee_04_Giant_Tree_Club_C.ExecuteUbergraph_GA_CreatureAbility_Melee_04_Giant_Tree_Club
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_Wildlife_HillGiant_C*K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C::ExecuteUbergraph_GA_CreatureAbility_Melee_04_Giant_Tree_Club(int32 EntryPoint, int32 Temp_int_Variable, const struct FGameplayTag& Temp_struct_Variable, bool K2Node_Event_bWasCancelled, class ABP_Creature_Wildlife_HillGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Melee_04_Giant_Tree_Club_C", "ExecuteUbergraph_GA_CreatureAbility_Melee_04_Giant_Tree_Club");

	Params::UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C_ExecuteUbergraph_GA_CreatureAbility_Melee_04_Giant_Tree_Club_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant = K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


