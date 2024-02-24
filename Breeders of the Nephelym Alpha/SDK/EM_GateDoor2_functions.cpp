#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EM_GateDoor2.EM_GateDoor2_C
// (Actor)

class UClass* AEM_GateDoor2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EM_GateDoor2_C");

	return Clss;
}


// EM_GateDoor2_C EM_GateDoor2.Default__EM_GateDoor2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEM_GateDoor2_C* AEM_GateDoor2_C::GetDefaultObj()
{
	static class AEM_GateDoor2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEM_GateDoor2_C*>(AEM_GateDoor2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EM_GateDoor2.EM_GateDoor2_C.OnTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_GateDoor2_C::OnTrigger(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_GateDoor2_C", "OnTrigger");

	Params::AEM_GateDoor2_C_OnTrigger_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_GateDoor2.EM_GateDoor2_C.OnBlock
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_GateDoor2_C::OnBlock(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_GateDoor2_C", "OnBlock");

	Params::AEM_GateDoor2_C_OnBlock_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_GateDoor2.EM_GateDoor2_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AEM_GateDoor2_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_GateDoor2_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EM_GateDoor2.EM_GateDoor2_C.ExecuteUbergraph_EM_GateDoor2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMoveComponentAction    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMoveComponentAction    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFromActivation_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bFromActivation                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AEM_GateDoor2_C::ExecuteUbergraph_EM_GateDoor2(int32 EntryPoint, enum class EMoveComponentAction Temp_byte_Variable, enum class EMoveComponentAction Temp_byte_Variable_1, bool K2Node_Event_bFromActivation_1, bool K2Node_Event_bFromActivation, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_GateDoor2_C", "ExecuteUbergraph_EM_GateDoor2");

	Params::AEM_GateDoor2_C_ExecuteUbergraph_EM_GateDoor2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_bFromActivation_1 = K2Node_Event_bFromActivation_1;
	Parms.K2Node_Event_bFromActivation = K2Node_Event_bFromActivation;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


