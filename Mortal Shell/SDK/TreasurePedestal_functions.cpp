#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TreasurePedestal.TreasurePedestal_C
// (Actor)

class UClass* ATreasurePedestal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TreasurePedestal_C");

	return Clss;
}


// TreasurePedestal_C TreasurePedestal.Default__TreasurePedestal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATreasurePedestal_C* ATreasurePedestal_C::GetDefaultObj()
{
	static class ATreasurePedestal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATreasurePedestal_C*>(ATreasurePedestal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TreasurePedestal.TreasurePedestal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATreasurePedestal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreasurePedestal_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TreasurePedestal.TreasurePedestal_C.ExecuteUbergraph_TreasurePedestal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATreasurePedestal_C::ExecuteUbergraph_TreasurePedestal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreasurePedestal_C", "ExecuteUbergraph_TreasurePedestal");

	Params::ATreasurePedestal_C_ExecuteUbergraph_TreasurePedestal_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


