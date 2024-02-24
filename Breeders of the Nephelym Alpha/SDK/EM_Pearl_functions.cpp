#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EM_Pearl.EM_Pearl_C
// (Actor)

class UClass* AEM_Pearl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EM_Pearl_C");

	return Clss;
}


// EM_Pearl_C EM_Pearl.Default__EM_Pearl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEM_Pearl_C* AEM_Pearl_C::GetDefaultObj()
{
	static class AEM_Pearl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEM_Pearl_C*>(AEM_Pearl_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EM_Pearl.EM_Pearl_C.OnTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_Pearl_C::OnTrigger(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_Pearl_C", "OnTrigger");

	Params::AEM_Pearl_C_OnTrigger_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_Pearl.EM_Pearl_C.OnBlock
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_Pearl_C::OnBlock(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_Pearl_C", "OnBlock");

	Params::AEM_Pearl_C_OnBlock_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_Pearl.EM_Pearl_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AEM_Pearl_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_Pearl_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EM_Pearl.EM_Pearl_C.ExecuteUbergraph_EM_Pearl
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFromActivation_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bFromActivation                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_Pearl_C::ExecuteUbergraph_EM_Pearl(int32 EntryPoint, bool K2Node_Event_bFromActivation_1, bool K2Node_Event_bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_Pearl_C", "ExecuteUbergraph_EM_Pearl");

	Params::AEM_Pearl_C_ExecuteUbergraph_EM_Pearl_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bFromActivation_1 = K2Node_Event_bFromActivation_1;
	Parms.K2Node_Event_bFromActivation = K2Node_Event_bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}

}


