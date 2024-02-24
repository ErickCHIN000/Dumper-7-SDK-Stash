#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_WeatherControl_01.ba_WeatherControl_01_C
// (Actor)

class UClass* Aba_WeatherControl_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_WeatherControl_01_C");

	return Clss;
}


// ba_WeatherControl_01_C ba_WeatherControl_01.Default__ba_WeatherControl_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_WeatherControl_01_C* Aba_WeatherControl_01_C::GetDefaultObj()
{
	static class Aba_WeatherControl_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_WeatherControl_01_C*>(Aba_WeatherControl_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_WeatherControl_01.ba_WeatherControl_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_WeatherControl_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_WeatherControl_01_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_WeatherControl_01.ba_WeatherControl_01_C.Inicialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_WeatherControl_01_C::Inicialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_WeatherControl_01_C", "Inicialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_WeatherControl_01.ba_WeatherControl_01_C.ExecuteUbergraph_ba_WeatherControl_01
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_DarkTime_01_C*           CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_WeatherControl_01_C::ExecuteUbergraph_ba_WeatherControl_01(int32 EntryPoint, class Aba_DarkTime_01_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_WeatherControl_01_C", "ExecuteUbergraph_ba_WeatherControl_01");

	Params::Aba_WeatherControl_01_C_ExecuteUbergraph_ba_WeatherControl_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


