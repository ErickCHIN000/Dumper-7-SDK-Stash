#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IPowerConsumer.IPowerConsumer_C
// (None)

class UClass* IIPowerConsumer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IPowerConsumer_C");

	return Clss;
}


// IPowerConsumer_C IPowerConsumer.Default__IPowerConsumer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIPowerConsumer_C* IIPowerConsumer_C::GetDefaultObj()
{
	static class IIPowerConsumer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIPowerConsumer_C*>(IIPowerConsumer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IPowerConsumer.IPowerConsumer_C.AddChangeStateListeners
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Listener                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPowerConsumer_C::AddChangeStateListeners(class AActor* Listener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPowerConsumer_C", "AddChangeStateListeners");

	Params::IIPowerConsumer_C_AddChangeStateListeners_Params Parms{};

	Parms.Listener = Listener;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IPowerConsumer.IPowerConsumer_C.Power
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIPowerConsumer_C::Power(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPowerConsumer_C", "Power");

	Params::IIPowerConsumer_C_Power_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IPowerConsumer.IPowerConsumer_C.GetLoadValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Load                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPowerConsumer_C::GetLoadValue(float* Load)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPowerConsumer_C", "GetLoadValue");

	Params::IIPowerConsumer_C_GetLoadValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Load != nullptr)
		*Load = Parms.Load;

}

}


