#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EM_Keystone.EM_Keystone_C
// (Actor)

class UClass* AEM_Keystone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EM_Keystone_C");

	return Clss;
}


// EM_Keystone_C EM_Keystone.Default__EM_Keystone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEM_Keystone_C* AEM_Keystone_C::GetDefaultObj()
{
	static class AEM_Keystone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEM_Keystone_C*>(AEM_Keystone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EM_Keystone.EM_Keystone_C.OnTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_Keystone_C::OnTrigger(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_Keystone_C", "OnTrigger");

	Params::AEM_Keystone_C_OnTrigger_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_Keystone.EM_Keystone_C.OnBlock
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_Keystone_C::OnBlock(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_Keystone_C", "OnBlock");

	Params::AEM_Keystone_C_OnBlock_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_Keystone.EM_Keystone_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AEM_Keystone_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_Keystone_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EM_Keystone.EM_Keystone_C.ExecuteUbergraph_EM_Keystone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFromActivation                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bFromActivation_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckGameFlags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckGameFlags_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_Keystone_C::ExecuteUbergraph_EM_Keystone(int32 EntryPoint, bool K2Node_Event_bFromActivation, bool K2Node_Event_bFromActivation_1, bool CallFunc_CheckGameFlags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CheckGameFlags_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_Keystone_C", "ExecuteUbergraph_EM_Keystone");

	Params::AEM_Keystone_C_ExecuteUbergraph_EM_Keystone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bFromActivation = K2Node_Event_bFromActivation;
	Parms.K2Node_Event_bFromActivation_1 = K2Node_Event_bFromActivation_1;
	Parms.CallFunc_CheckGameFlags_ReturnValue = CallFunc_CheckGameFlags_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CheckGameFlags_ReturnValue_1 = CallFunc_CheckGameFlags_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


