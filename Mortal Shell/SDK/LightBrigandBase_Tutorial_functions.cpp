#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBrigandBase_Tutorial.LightBrigandBase_Tutorial_C
// (Actor, Pawn)

class UClass* ALightBrigandBase_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBrigandBase_Tutorial_C");

	return Clss;
}


// LightBrigandBase_Tutorial_C LightBrigandBase_Tutorial.Default__LightBrigandBase_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALightBrigandBase_Tutorial_C* ALightBrigandBase_Tutorial_C::GetDefaultObj()
{
	static class ALightBrigandBase_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightBrigandBase_Tutorial_C*>(ALightBrigandBase_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightBrigandBase_Tutorial.LightBrigandBase_Tutorial_C.FadeOutTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ALightBrigandBase_Tutorial_C::FadeOutTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Tutorial_C", "FadeOutTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Tutorial.LightBrigandBase_Tutorial_C.FadeOutTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ALightBrigandBase_Tutorial_C::FadeOutTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Tutorial_C", "FadeOutTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Tutorial.LightBrigandBase_Tutorial_C.EnemyDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldPlayDeathAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_Tutorial_C::EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Tutorial_C", "EnemyDeath");

	Params::ALightBrigandBase_Tutorial_C_EnemyDeath_Params Parms{};

	Parms.Killer = Killer;
	Parms.bShouldPlayDeathAnim = bShouldPlayDeathAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_Tutorial.LightBrigandBase_Tutorial_C.ExecuteUbergraph_LightBrigandBase_Tutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Killer                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldPlayDeathAnim                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_Tutorial_C::ExecuteUbergraph_LightBrigandBase_Tutorial(int32 EntryPoint, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Tutorial_C", "ExecuteUbergraph_LightBrigandBase_Tutorial");

	Params::ALightBrigandBase_Tutorial_C_ExecuteUbergraph_LightBrigandBase_Tutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Killer = K2Node_Event_Killer;
	Parms.K2Node_Event_bShouldPlayDeathAnim = K2Node_Event_bShouldPlayDeathAnim;

	UObject::ProcessEvent(Func, &Parms);

}

}


