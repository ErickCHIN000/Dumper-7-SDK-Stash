#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EM_PearlSlime.EM_PearlSlime_C
// (Actor)

class UClass* AEM_PearlSlime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EM_PearlSlime_C");

	return Clss;
}


// EM_PearlSlime_C EM_PearlSlime.Default__EM_PearlSlime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEM_PearlSlime_C* AEM_PearlSlime_C::GetDefaultObj()
{
	static class AEM_PearlSlime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEM_PearlSlime_C*>(AEM_PearlSlime_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EM_PearlSlime.EM_PearlSlime_C.OnTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_PearlSlime_C::OnTrigger(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_PearlSlime_C", "OnTrigger");

	Params::AEM_PearlSlime_C_OnTrigger_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_PearlSlime.EM_PearlSlime_C.OnBlock
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_PearlSlime_C::OnBlock(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_PearlSlime_C", "OnBlock");

	Params::AEM_PearlSlime_C_OnBlock_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_PearlSlime.EM_PearlSlime_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AEM_PearlSlime_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_PearlSlime_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EM_PearlSlime.EM_PearlSlime_C.ExecuteUbergraph_EM_PearlSlime
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFromActivation_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bFromActivation                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_PearlSlime_C::ExecuteUbergraph_EM_PearlSlime(int32 EntryPoint, bool K2Node_Event_bFromActivation_1, bool K2Node_Event_bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_PearlSlime_C", "ExecuteUbergraph_EM_PearlSlime");

	Params::AEM_PearlSlime_C_ExecuteUbergraph_EM_PearlSlime_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bFromActivation_1 = K2Node_Event_bFromActivation_1;
	Parms.K2Node_Event_bFromActivation = K2Node_Event_bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}

}


