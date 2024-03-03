#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemBalls_Small.BP_ItemBalls_Small_C
// (Actor)

class UClass* ABP_ItemBalls_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemBalls_Small_C");

	return Clss;
}


// BP_ItemBalls_Small_C BP_ItemBalls_Small.Default__BP_ItemBalls_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemBalls_Small_C* ABP_ItemBalls_Small_C::GetDefaultObj()
{
	static class ABP_ItemBalls_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemBalls_Small_C*>(ABP_ItemBalls_Small_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemBalls_Small.BP_ItemBalls_Small_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemBalls_Small_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBalls_Small_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemBalls_Small.BP_ItemBalls_Small_C.ExecuteUbergraph_BP_ItemBalls_Small
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemBalls_Small_C::ExecuteUbergraph_BP_ItemBalls_Small(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBalls_Small_C", "ExecuteUbergraph_BP_ItemBalls_Small");

	Params::ABP_ItemBalls_Small_C_ExecuteUbergraph_BP_ItemBalls_Small_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


