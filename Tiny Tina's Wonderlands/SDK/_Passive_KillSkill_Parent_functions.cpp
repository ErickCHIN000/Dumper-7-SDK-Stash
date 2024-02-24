#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass _Passive_KillSkill_Parent._Passive_KillSkill_Parent_C
// (None)

class UClass* U_Passive_KillSkill_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("_Passive_KillSkill_Parent_C");

	return Clss;
}


// _Passive_KillSkill_Parent_C _Passive_KillSkill_Parent.Default___Passive_KillSkill_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_Passive_KillSkill_Parent_C* U_Passive_KillSkill_Parent_C::GetDefaultObj()
{
	static class U_Passive_KillSkill_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<U_Passive_KillSkill_Parent_C*>(U_Passive_KillSkill_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function _Passive_KillSkill_Parent._Passive_KillSkill_Parent_C.OakPassiveTriggerKillSkillEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bWasAutoTrigger                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void U_Passive_KillSkill_Parent_C::OakPassiveTriggerKillSkillEffect(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details, bool bWasAutoTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_KillSkill_Parent_C", "OakPassiveTriggerKillSkillEffect");

	Params::U_Passive_KillSkill_Parent_C_OakPassiveTriggerKillSkillEffect_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;
	Parms.bWasAutoTrigger = bWasAutoTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_KillSkill_Parent._Passive_KillSkill_Parent_C.ExecuteUbergraph__Passive_KillSkill_Parent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageComponent*            K2Node_Event_Damaged                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         K2Node_Event_Details                                             (None)
// bool                               K2Node_Event_bWasAutoTrigger                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void U_Passive_KillSkill_Parent_C::ExecuteUbergraph__Passive_KillSkill_Parent(int32 EntryPoint, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, bool K2Node_Event_bWasAutoTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_KillSkill_Parent_C", "ExecuteUbergraph__Passive_KillSkill_Parent");

	Params::U_Passive_KillSkill_Parent_C_ExecuteUbergraph__Passive_KillSkill_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Damaged = K2Node_Event_Damaged;
	Parms.K2Node_Event_Details = K2Node_Event_Details;
	Parms.K2Node_Event_bWasAutoTrigger = K2Node_Event_bWasAutoTrigger;

	UObject::ProcessEvent(Func, &Parms);

}

}


