#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OW_CarWithPower_1.OW_CarWithPower_1_C
// (Actor)

class UClass* AOW_CarWithPower_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OW_CarWithPower_1_C");

	return Clss;
}


// OW_CarWithPower_1_C OW_CarWithPower_1.Default__OW_CarWithPower_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOW_CarWithPower_1_C* AOW_CarWithPower_1_C::GetDefaultObj()
{
	static class AOW_CarWithPower_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOW_CarWithPower_1_C*>(AOW_CarWithPower_1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OW_CarWithPower_1.OW_CarWithPower_1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AOW_CarWithPower_1_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OW_CarWithPower_1_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OW_CarWithPower_1.OW_CarWithPower_1_C.ExecuteUbergraph_OW_CarWithPower_1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOW_CarWithPower_1_C::ExecuteUbergraph_OW_CarWithPower_1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OW_CarWithPower_1_C", "ExecuteUbergraph_OW_CarWithPower_1");

	Params::AOW_CarWithPower_1_C_ExecuteUbergraph_OW_CarWithPower_1_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


