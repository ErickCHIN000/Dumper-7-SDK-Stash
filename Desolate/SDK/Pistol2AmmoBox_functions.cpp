#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pistol2AmmoBox.Pistol2AmmoBox_C
// (Actor)

class UClass* APistol2AmmoBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol2AmmoBox_C");

	return Clss;
}


// Pistol2AmmoBox_C Pistol2AmmoBox.Default__Pistol2AmmoBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APistol2AmmoBox_C* APistol2AmmoBox_C::GetDefaultObj()
{
	static class APistol2AmmoBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APistol2AmmoBox_C*>(APistol2AmmoBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Pistol2AmmoBox.Pistol2AmmoBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APistol2AmmoBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pistol2AmmoBox_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Pistol2AmmoBox.Pistol2AmmoBox_C.ExecuteUbergraph_Pistol2AmmoBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APistol2AmmoBox_C::ExecuteUbergraph_Pistol2AmmoBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pistol2AmmoBox_C", "ExecuteUbergraph_Pistol2AmmoBox");

	Params::APistol2AmmoBox_C_ExecuteUbergraph_Pistol2AmmoBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


