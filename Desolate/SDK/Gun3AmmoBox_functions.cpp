#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Gun3AmmoBox.Gun3AmmoBox_C
// (Actor)

class UClass* AGun3AmmoBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gun3AmmoBox_C");

	return Clss;
}


// Gun3AmmoBox_C Gun3AmmoBox.Default__Gun3AmmoBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGun3AmmoBox_C* AGun3AmmoBox_C::GetDefaultObj()
{
	static class AGun3AmmoBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGun3AmmoBox_C*>(AGun3AmmoBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Gun3AmmoBox.Gun3AmmoBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGun3AmmoBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gun3AmmoBox_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Gun3AmmoBox.Gun3AmmoBox_C.ExecuteUbergraph_Gun3AmmoBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGun3AmmoBox_C::ExecuteUbergraph_Gun3AmmoBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gun3AmmoBox_C", "ExecuteUbergraph_Gun3AmmoBox");

	Params::AGun3AmmoBox_C_ExecuteUbergraph_Gun3AmmoBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


