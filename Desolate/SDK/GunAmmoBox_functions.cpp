#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GunAmmoBox.GunAmmoBox_C
// (Actor)

class UClass* AGunAmmoBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GunAmmoBox_C");

	return Clss;
}


// GunAmmoBox_C GunAmmoBox.Default__GunAmmoBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGunAmmoBox_C* AGunAmmoBox_C::GetDefaultObj()
{
	static class AGunAmmoBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGunAmmoBox_C*>(AGunAmmoBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GunAmmoBox.GunAmmoBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGunAmmoBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GunAmmoBox_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GunAmmoBox.GunAmmoBox_C.ExecuteUbergraph_GunAmmoBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGunAmmoBox_C::ExecuteUbergraph_GunAmmoBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GunAmmoBox_C", "ExecuteUbergraph_GunAmmoBox");

	Params::AGunAmmoBox_C_ExecuteUbergraph_GunAmmoBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


