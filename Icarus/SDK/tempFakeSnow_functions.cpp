#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass tempFakeSnow.tempFakeSnow_C
// (Actor)

class UClass* ATempFakeSnow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("tempFakeSnow_C");

	return Clss;
}


// tempFakeSnow_C tempFakeSnow.Default__tempFakeSnow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATempFakeSnow_C* ATempFakeSnow_C::GetDefaultObj()
{
	static class ATempFakeSnow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATempFakeSnow_C*>(ATempFakeSnow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function tempFakeSnow.tempFakeSnow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATempFakeSnow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("tempFakeSnow_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function tempFakeSnow.tempFakeSnow_C.ExecuteUbergraph_tempFakeSnow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATempFakeSnow_C::ExecuteUbergraph_tempFakeSnow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("tempFakeSnow_C", "ExecuteUbergraph_tempFakeSnow");

	Params::ATempFakeSnow_C_ExecuteUbergraph_tempFakeSnow_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


