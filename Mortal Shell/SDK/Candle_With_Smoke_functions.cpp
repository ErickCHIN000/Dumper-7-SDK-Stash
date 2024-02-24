#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Candle_With_Smoke.Candle_With_Smoke_C
// (Actor)

class UClass* ACandle_With_Smoke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Candle_With_Smoke_C");

	return Clss;
}


// Candle_With_Smoke_C Candle_With_Smoke.Default__Candle_With_Smoke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACandle_With_Smoke_C* ACandle_With_Smoke_C::GetDefaultObj()
{
	static class ACandle_With_Smoke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACandle_With_Smoke_C*>(ACandle_With_Smoke_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Candle_With_Smoke.Candle_With_Smoke_C.PassFloat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FloatToPass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACandle_With_Smoke_C::PassFloat(float FloatToPass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Candle_With_Smoke_C", "PassFloat");

	Params::ACandle_With_Smoke_C_PassFloat_Params Parms{};

	Parms.FloatToPass = FloatToPass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Candle_With_Smoke.Candle_With_Smoke_C.GenericChildActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACandle_With_Smoke_C::GenericChildActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Candle_With_Smoke_C", "GenericChildActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Candle_With_Smoke.Candle_With_Smoke_C.ExecuteUbergraph_Candle_With_Smoke
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_FloatToPass                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACandle_With_Smoke_C::ExecuteUbergraph_Candle_With_Smoke(int32 EntryPoint, float K2Node_Event_FloatToPass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Candle_With_Smoke_C", "ExecuteUbergraph_Candle_With_Smoke");

	Params::ACandle_With_Smoke_C_ExecuteUbergraph_Candle_With_Smoke_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FloatToPass = K2Node_Event_FloatToPass;

	UObject::ProcessEvent(Func, &Parms);

}

}


