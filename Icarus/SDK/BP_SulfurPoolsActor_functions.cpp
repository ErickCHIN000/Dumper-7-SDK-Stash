#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SulfurPoolsActor.BP_SulfurPoolsActor_C
// (Actor)

class UClass* ABP_SulfurPoolsActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SulfurPoolsActor_C");

	return Clss;
}


// BP_SulfurPoolsActor_C BP_SulfurPoolsActor.Default__BP_SulfurPoolsActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SulfurPoolsActor_C* ABP_SulfurPoolsActor_C::GetDefaultObj()
{
	static class ABP_SulfurPoolsActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SulfurPoolsActor_C*>(ABP_SulfurPoolsActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SulfurPoolsActor.BP_SulfurPoolsActor_C.OnRep_EffectActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SulfurPoolsActor_C::OnRep_EffectActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SulfurPoolsActor_C", "OnRep_EffectActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SulfurPoolsActor.BP_SulfurPoolsActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SulfurPoolsActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SulfurPoolsActor_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SulfurPoolsActor.BP_SulfurPoolsActor_C.TriggerSulfurPoolsEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SulfurPoolsActor_C::TriggerSulfurPoolsEffect(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SulfurPoolsActor_C", "TriggerSulfurPoolsEffect");

	Params::ABP_SulfurPoolsActor_C_TriggerSulfurPoolsEffect_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SulfurPoolsActor.BP_SulfurPoolsActor_C.ExecuteUbergraph_BP_SulfurPoolsActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Active                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SulfurPoolsActor_C::ExecuteUbergraph_BP_SulfurPoolsActor(int32 EntryPoint, bool K2Node_CustomEvent_Active, bool CallFunc_RemoveModifierState_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SulfurPoolsActor_C", "ExecuteUbergraph_BP_SulfurPoolsActor");

	Params::ABP_SulfurPoolsActor_C_ExecuteUbergraph_BP_SulfurPoolsActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Active = K2Node_CustomEvent_Active;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


