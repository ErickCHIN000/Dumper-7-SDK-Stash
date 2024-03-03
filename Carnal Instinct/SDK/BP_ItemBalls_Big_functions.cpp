#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemBalls_Big.BP_ItemBalls_Big_C
// (Actor)

class UClass* ABP_ItemBalls_Big_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemBalls_Big_C");

	return Clss;
}


// BP_ItemBalls_Big_C BP_ItemBalls_Big.Default__BP_ItemBalls_Big_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemBalls_Big_C* ABP_ItemBalls_Big_C::GetDefaultObj()
{
	static class ABP_ItemBalls_Big_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemBalls_Big_C*>(ABP_ItemBalls_Big_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemBalls_Big.BP_ItemBalls_Big_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemBalls_Big_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBalls_Big_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemBalls_Big.BP_ItemBalls_Big_C.ExecuteUbergraph_BP_ItemBalls_Big
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemBalls_Big_C::ExecuteUbergraph_BP_ItemBalls_Big(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBalls_Big_C", "ExecuteUbergraph_BP_ItemBalls_Big");

	Params::ABP_ItemBalls_Big_C_ExecuteUbergraph_BP_ItemBalls_Big_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


