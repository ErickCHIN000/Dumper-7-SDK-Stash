#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericPowerEffect.GenericPowerEffect_C
// (Actor)

class UClass* AGenericPowerEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericPowerEffect_C");

	return Clss;
}


// GenericPowerEffect_C GenericPowerEffect.Default__GenericPowerEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericPowerEffect_C* AGenericPowerEffect_C::GetDefaultObj()
{
	static class AGenericPowerEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericPowerEffect_C*>(AGenericPowerEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericPowerEffect.GenericPowerEffect_C.GetLoadValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Load                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericPowerEffect_C::GetLoadValue(float* Load)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericPowerEffect_C", "GetLoadValue");

	Params::AGenericPowerEffect_C_GetLoadValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Load != nullptr)
		*Load = Parms.Load;

}


// Function GenericPowerEffect.GenericPowerEffect_C.OnRep_isUnderVoltage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGenericPowerEffect_C::OnRep_isUnderVoltage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericPowerEffect_C", "OnRep_isUnderVoltage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericPowerEffect.GenericPowerEffect_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericPowerEffect_C::UpdateState(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericPowerEffect_C", "UpdateState");

	Params::AGenericPowerEffect_C_UpdateState_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericPowerEffect.GenericPowerEffect_C.AddChangeStateListeners
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Listener                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericPowerEffect_C::AddChangeStateListeners(class AActor* Listener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericPowerEffect_C", "AddChangeStateListeners");

	Params::AGenericPowerEffect_C_AddChangeStateListeners_Params Parms{};

	Parms.Listener = Listener;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericPowerEffect.GenericPowerEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGenericPowerEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericPowerEffect_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericPowerEffect.GenericPowerEffect_C.Power
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericPowerEffect_C::Power(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericPowerEffect_C", "Power");

	Params::AGenericPowerEffect_C_Power_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericPowerEffect.GenericPowerEffect_C.ExecuteUbergraph_GenericPowerEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Listener                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_On                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericPowerEffect_C::ExecuteUbergraph_GenericPowerEffect(int32 EntryPoint, class AActor* K2Node_Event_Listener, bool K2Node_Event_On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericPowerEffect_C", "ExecuteUbergraph_GenericPowerEffect");

	Params::AGenericPowerEffect_C_ExecuteUbergraph_GenericPowerEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Listener = K2Node_Event_Listener;
	Parms.K2Node_Event_On = K2Node_Event_On;

	UObject::ProcessEvent(Func, &Parms);

}

}


