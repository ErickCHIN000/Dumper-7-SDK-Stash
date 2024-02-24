#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Rogue_15.Passive_Rogue_15_C
// (None)

class UClass* UPassive_Rogue_15_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Rogue_15_C");

	return Clss;
}


// Passive_Rogue_15_C Passive_Rogue_15.Default__Passive_Rogue_15_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Rogue_15_C* UPassive_Rogue_15_C::GetDefaultObj()
{
	static class UPassive_Rogue_15_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Rogue_15_C*>(UPassive_Rogue_15_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Rogue_15.Passive_Rogue_15_C.OakPassiveOnCausedElementalEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UPassive_Rogue_15_C::OakPassiveOnCausedElementalEffect(class AActor* Target, const struct FStatusEffectSpec& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_15_C", "OakPassiveOnCausedElementalEffect");

	Params::UPassive_Rogue_15_C_OakPassiveOnCausedElementalEffect_Params Parms{};

	Parms.Target = Target;
	Parms.Spec = Spec;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_Rogue_15.Passive_Rogue_15_C.ExecuteUbergraph_Passive_Rogue_15
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_Event_Spec                                                (NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UPassive_Rogue_15_C::ExecuteUbergraph_Passive_Rogue_15(int32 EntryPoint, class AActor* K2Node_Event_Target, const struct FStatusEffectSpec& K2Node_Event_Spec, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_15_C", "ExecuteUbergraph_Passive_Rogue_15");

	Params::UPassive_Rogue_15_C_ExecuteUbergraph_Passive_Rogue_15_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Target = K2Node_Event_Target;
	Parms.K2Node_Event_Spec = K2Node_Event_Spec;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


