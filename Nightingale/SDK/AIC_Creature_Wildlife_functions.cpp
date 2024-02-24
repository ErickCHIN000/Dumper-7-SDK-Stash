#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_Creature_Wildlife.AIC_Creature_Wildlife_C
// (Actor)

class UClass* AAIC_Creature_Wildlife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_Creature_Wildlife_C");

	return Clss;
}


// AIC_Creature_Wildlife_C AIC_Creature_Wildlife.Default__AIC_Creature_Wildlife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIC_Creature_Wildlife_C* AAIC_Creature_Wildlife_C::GetDefaultObj()
{
	static class AAIC_Creature_Wildlife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIC_Creature_Wildlife_C*>(AAIC_Creature_Wildlife_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIC_Creature_Wildlife.AIC_Creature_Wildlife_C.TargetPerceptionUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 Stimulus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void AAIC_Creature_Wildlife_C::TargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Creature_Wildlife_C", "TargetPerceptionUpdated");

	Params::AAIC_Creature_Wildlife_C_TargetPerceptionUpdated_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = Stimulus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_Creature_Wildlife.AIC_Creature_Wildlife_C.ExecuteUbergraph_AIC_Creature_Wildlife
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 K2Node_Event_Stimulus                                            (NoDestructor)

void AAIC_Creature_Wildlife_C::ExecuteUbergraph_AIC_Creature_Wildlife(int32 EntryPoint, class AActor* K2Node_Event_Actor, const struct FAIStimulus& K2Node_Event_Stimulus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Creature_Wildlife_C", "ExecuteUbergraph_AIC_Creature_Wildlife");

	Params::AAIC_Creature_Wildlife_C_ExecuteUbergraph_AIC_Creature_Wildlife_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_Event_Stimulus = K2Node_Event_Stimulus;

	UObject::ProcessEvent(Func, &Parms);

}

}


