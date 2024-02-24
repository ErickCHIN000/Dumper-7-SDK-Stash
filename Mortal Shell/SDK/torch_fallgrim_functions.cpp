#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass torch_fallgrim.torch_fallgrim_C
// (Actor)

class UClass* ATorch_fallgrim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("torch_fallgrim_C");

	return Clss;
}


// torch_fallgrim_C torch_fallgrim.Default__torch_fallgrim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATorch_fallgrim_C* ATorch_fallgrim_C::GetDefaultObj()
{
	static class ATorch_fallgrim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATorch_fallgrim_C*>(ATorch_fallgrim_C::StaticClass()->DefaultObject);

	return Default;
}


// Function torch_fallgrim.torch_fallgrim_C.PlayFireAtRandomInitialTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATorch_fallgrim_C::PlayFireAtRandomInitialTime(float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("torch_fallgrim_C", "PlayFireAtRandomInitialTime");

	Params::ATorch_fallgrim_C_PlayFireAtRandomInitialTime_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function torch_fallgrim.torch_fallgrim_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATorch_fallgrim_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("torch_fallgrim_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function torch_fallgrim.torch_fallgrim_C.ExecuteUbergraph_torch_fallgrim
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATorch_fallgrim_C::ExecuteUbergraph_torch_fallgrim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("torch_fallgrim_C", "ExecuteUbergraph_torch_fallgrim");

	Params::ATorch_fallgrim_C_ExecuteUbergraph_torch_fallgrim_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


