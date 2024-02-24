#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Crafting_Step_Refinement_Crafter_Activate.GA_Crafting_Step_Refinement_Crafter_Activate_C
// (None)

class UClass* UGA_Crafting_Step_Refinement_Crafter_Activate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Crafting_Step_Refinement_Crafter_Activate_C");

	return Clss;
}


// GA_Crafting_Step_Refinement_Crafter_Activate_C GA_Crafting_Step_Refinement_Crafter_Activate.Default__GA_Crafting_Step_Refinement_Crafter_Activate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Crafting_Step_Refinement_Crafter_Activate_C* UGA_Crafting_Step_Refinement_Crafter_Activate_C::GetDefaultObj()
{
	static class UGA_Crafting_Step_Refinement_Crafter_Activate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Crafting_Step_Refinement_Crafter_Activate_C*>(UGA_Crafting_Step_Refinement_Crafter_Activate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Crafting_Step_Refinement_Crafter_Activate.GA_Crafting_Step_Refinement_Crafter_Activate_C.InitializeAbilityFromEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeAbilityFromEvent_Success                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Crafter_Activate_C::InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_InitializeAbilityFromEvent_Success, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Crafter_Activate_C", "InitializeAbilityFromEvent");

	Params::UGA_Crafting_Step_Refinement_Crafter_Activate_C_InitializeAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_InitializeAbilityFromEvent_Success = CallFunc_InitializeAbilityFromEvent_Success;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Refinement_Crafter_Activate.GA_Crafting_Step_Refinement_Crafter_Activate_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Crafting_Step_Refinement_Crafter_Activate_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Crafter_Activate_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Crafting_Step_Refinement_Crafter_Activate_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Refinement_Crafter_Activate.GA_Crafting_Step_Refinement_Crafter_Activate_C.ExecuteUbergraph_GA_Crafting_Step_Refinement_Crafter_Activate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingStep_ReturnValue           (None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Crafter_Activate_C::ExecuteUbergraph_GA_Crafting_Step_Refinement_Crafter_Activate(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Crafter_Activate_C", "ExecuteUbergraph_GA_Crafting_Step_Refinement_Crafter_Activate");

	Params::UGA_Crafting_Step_Refinement_Crafter_Activate_C_ExecuteUbergraph_GA_Crafting_Step_Refinement_Crafter_Activate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue = CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


