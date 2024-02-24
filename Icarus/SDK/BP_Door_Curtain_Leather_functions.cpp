#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Door_Curtain_Leather.BP_Door_Curtain_Leather_C
// (Actor)

class UClass* ABP_Door_Curtain_Leather_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Door_Curtain_Leather_C");

	return Clss;
}


// BP_Door_Curtain_Leather_C BP_Door_Curtain_Leather.Default__BP_Door_Curtain_Leather_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Door_Curtain_Leather_C* ABP_Door_Curtain_Leather_C::GetDefaultObj()
{
	static class ABP_Door_Curtain_Leather_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Door_Curtain_Leather_C*>(ABP_Door_Curtain_Leather_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Door_Curtain_Leather.BP_Door_Curtain_Leather_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Door_Curtain_Leather_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Door_Curtain_Leather_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Door_Curtain_Leather.BP_Door_Curtain_Leather_C.ExecuteUbergraph_BP_Door_Curtain_Leather
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Door_Curtain_Leather_C::ExecuteUbergraph_BP_Door_Curtain_Leather(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Door_Curtain_Leather_C", "ExecuteUbergraph_BP_Door_Curtain_Leather");

	Params::ABP_Door_Curtain_Leather_C_ExecuteUbergraph_BP_Door_Curtain_Leather_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


