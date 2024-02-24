#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Exit.GA_CreatureAbility_Exit_C
// (None)

class UClass* UGA_CreatureAbility_Exit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Exit_C");

	return Clss;
}


// GA_CreatureAbility_Exit_C GA_CreatureAbility_Exit.Default__GA_CreatureAbility_Exit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Exit_C* UGA_CreatureAbility_Exit_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Exit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Exit_C*>(UGA_CreatureAbility_Exit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Exit.GA_CreatureAbility_Exit_C.CreatureAbilityMontageStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array                                           (ReferenceParm)

void UGA_CreatureAbility_Exit_C::CreatureAbilityMontageStart(TArray<struct FGameplayTag>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Exit_C", "CreatureAbilityMontageStart");

	Params::UGA_CreatureAbility_Exit_C_CreatureAbilityMontageStart_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_Exit.GA_CreatureAbility_Exit_C.CreatureAbilityEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_Exit_C::CreatureAbilityEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Exit_C", "CreatureAbilityEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_Exit.GA_CreatureAbility_Exit_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Exit_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Exit_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_Exit_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_Exit.GA_CreatureAbility_Exit_C.ExecuteUbergraph_GA_CreatureAbility_Exit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Exit_C::ExecuteUbergraph_GA_CreatureAbility_Exit(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool K2Node_Event_bWasCancelled, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Exit_C", "ExecuteUbergraph_GA_CreatureAbility_Exit");

	Params::UGA_CreatureAbility_Exit_C_ExecuteUbergraph_GA_CreatureAbility_Exit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


