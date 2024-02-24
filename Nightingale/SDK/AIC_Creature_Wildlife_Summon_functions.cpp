#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_Creature_Wildlife_Summon.AIC_Creature_Wildlife_Summon_C
// (Actor)

class UClass* AAIC_Creature_Wildlife_Summon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_Creature_Wildlife_Summon_C");

	return Clss;
}


// AIC_Creature_Wildlife_Summon_C AIC_Creature_Wildlife_Summon.Default__AIC_Creature_Wildlife_Summon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIC_Creature_Wildlife_Summon_C* AAIC_Creature_Wildlife_Summon_C::GetDefaultObj()
{
	static class AAIC_Creature_Wildlife_Summon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIC_Creature_Wildlife_Summon_C*>(AAIC_Creature_Wildlife_Summon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIC_Creature_Wildlife_Summon.AIC_Creature_Wildlife_Summon_C.TargetPerceptionUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 Stimulus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void AAIC_Creature_Wildlife_Summon_C::TargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Creature_Wildlife_Summon_C", "TargetPerceptionUpdated");

	Params::AAIC_Creature_Wildlife_Summon_C_TargetPerceptionUpdated_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = Stimulus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_Creature_Wildlife_Summon.AIC_Creature_Wildlife_Summon_C.ExecuteUbergraph_AIC_Creature_Wildlife_Summon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 K2Node_Event_Stimulus                                            (NoDestructor)

void AAIC_Creature_Wildlife_Summon_C::ExecuteUbergraph_AIC_Creature_Wildlife_Summon(int32 EntryPoint, class AActor* K2Node_Event_Actor, const struct FAIStimulus& K2Node_Event_Stimulus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Creature_Wildlife_Summon_C", "ExecuteUbergraph_AIC_Creature_Wildlife_Summon");

	Params::AAIC_Creature_Wildlife_Summon_C_ExecuteUbergraph_AIC_Creature_Wildlife_Summon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_Event_Stimulus = K2Node_Event_Stimulus;

	UObject::ProcessEvent(Func, &Parms);

}

}


