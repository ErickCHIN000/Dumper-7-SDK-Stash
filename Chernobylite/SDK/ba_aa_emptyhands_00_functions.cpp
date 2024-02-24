#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_aa_emptyhands_00.ba_aa_emptyhands_00_C
// (Actor)

class UClass* Aba_aa_emptyhands_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_aa_emptyhands_00_C");

	return Clss;
}


// ba_aa_emptyhands_00_C ba_aa_emptyhands_00.Default__ba_aa_emptyhands_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_aa_emptyhands_00_C* Aba_aa_emptyhands_00_C::GetDefaultObj()
{
	static class Aba_aa_emptyhands_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_aa_emptyhands_00_C*>(Aba_aa_emptyhands_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_aa_emptyhands_00.ba_aa_emptyhands_00_C.ActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_emptyhands_00_C::ActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_emptyhands_00_C", "ActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_emptyhands_00.ba_aa_emptyhands_00_C.AlternativeActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_emptyhands_00_C::AlternativeActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_emptyhands_00_C", "AlternativeActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_emptyhands_00.ba_aa_emptyhands_00_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_emptyhands_00_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_emptyhands_00_C", "ReceiveTick");

	Params::Aba_aa_emptyhands_00_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_emptyhands_00.ba_aa_emptyhands_00_C.ExecuteUbergraph_ba_aa_emptyhands_00
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_emptyhands_00_C::ExecuteUbergraph_ba_aa_emptyhands_00(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_emptyhands_00_C", "ExecuteUbergraph_ba_aa_emptyhands_00");

	Params::Aba_aa_emptyhands_00_C_ExecuteUbergraph_ba_aa_emptyhands_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


