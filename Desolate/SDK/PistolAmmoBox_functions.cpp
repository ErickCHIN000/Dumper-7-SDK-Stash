#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PistolAmmoBox.PistolAmmoBox_C
// (Actor)

class UClass* APistolAmmoBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PistolAmmoBox_C");

	return Clss;
}


// PistolAmmoBox_C PistolAmmoBox.Default__PistolAmmoBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APistolAmmoBox_C* APistolAmmoBox_C::GetDefaultObj()
{
	static class APistolAmmoBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APistolAmmoBox_C*>(APistolAmmoBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PistolAmmoBox.PistolAmmoBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APistolAmmoBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PistolAmmoBox_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PistolAmmoBox.PistolAmmoBox_C.ExecuteUbergraph_PistolAmmoBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APistolAmmoBox_C::ExecuteUbergraph_PistolAmmoBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PistolAmmoBox_C", "ExecuteUbergraph_PistolAmmoBox");

	Params::APistolAmmoBox_C_ExecuteUbergraph_PistolAmmoBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


