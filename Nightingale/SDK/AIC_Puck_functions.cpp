#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_Puck.AIC_Puck_C
// (Actor)

class UClass* AAIC_Puck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_Puck_C");

	return Clss;
}


// AIC_Puck_C AIC_Puck.Default__AIC_Puck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIC_Puck_C* AAIC_Puck_C::GetDefaultObj()
{
	static class AAIC_Puck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIC_Puck_C*>(AAIC_Puck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIC_Puck.AIC_Puck_C.BndEvt__AIC_Puck_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 Stimulus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void AAIC_Puck_C::BndEvt__AIC_Puck_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Puck_C", "BndEvt__AIC_Puck_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature");

	Params::AAIC_Puck_C_BndEvt__AIC_Puck_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = Stimulus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_Puck.AIC_Puck_C.ExecuteUbergraph_AIC_Puck
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_Actor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 K2Node_ComponentBoundEvent_Stimulus                              (NoDestructor)

void AAIC_Puck_C::ExecuteUbergraph_AIC_Puck(int32 EntryPoint, class AActor* K2Node_ComponentBoundEvent_Actor, const struct FAIStimulus& K2Node_ComponentBoundEvent_Stimulus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Puck_C", "ExecuteUbergraph_AIC_Puck");

	Params::AAIC_Puck_C_ExecuteUbergraph_AIC_Puck_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Actor = K2Node_ComponentBoundEvent_Actor;
	Parms.K2Node_ComponentBoundEvent_Stimulus = K2Node_ComponentBoundEvent_Stimulus;

	UObject::ProcessEvent(Func, &Parms);

}

}


