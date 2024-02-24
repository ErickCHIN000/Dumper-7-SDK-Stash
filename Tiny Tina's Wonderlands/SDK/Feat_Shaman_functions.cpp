#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Feat_Shaman.Feat_Shaman_C
// (None)

class UClass* UFeat_Shaman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Feat_Shaman_C");

	return Clss;
}


// Feat_Shaman_C Feat_Shaman.Default__Feat_Shaman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFeat_Shaman_C* UFeat_Shaman_C::GetDefaultObj()
{
	static class UFeat_Shaman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeat_Shaman_C*>(UFeat_Shaman_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Feat_Shaman.Feat_Shaman_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeat_Shaman_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Shaman_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_Shaman.Feat_Shaman_C.OakPassiveOnCausedElementalEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UFeat_Shaman_C::OakPassiveOnCausedElementalEffect(class AActor* Target, const struct FStatusEffectSpec& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Shaman_C", "OakPassiveOnCausedElementalEffect");

	Params::UFeat_Shaman_C_OakPassiveOnCausedElementalEffect_Params Parms{};

	Parms.Target = Target;
	Parms.Spec = Spec;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feat_Shaman.Feat_Shaman_C.ExecuteUbergraph_Feat_Shaman
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_Event_Spec                                                (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UFeat_Shaman_C::ExecuteUbergraph_Feat_Shaman(int32 EntryPoint, class AActor* K2Node_Event_Target, const struct FStatusEffectSpec& K2Node_Event_Spec, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Shaman_C", "ExecuteUbergraph_Feat_Shaman");

	Params::UFeat_Shaman_C_ExecuteUbergraph_Feat_Shaman_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Target = K2Node_Event_Target;
	Parms.K2Node_Event_Spec = K2Node_Event_Spec;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


