#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemBody_FelianJag.BP_ItemBody_FelianJag_C
// (Actor)

class UClass* ABP_ItemBody_FelianJag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemBody_FelianJag_C");

	return Clss;
}


// BP_ItemBody_FelianJag_C BP_ItemBody_FelianJag.Default__BP_ItemBody_FelianJag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemBody_FelianJag_C* ABP_ItemBody_FelianJag_C::GetDefaultObj()
{
	static class ABP_ItemBody_FelianJag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemBody_FelianJag_C*>(ABP_ItemBody_FelianJag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemBody_FelianJag.BP_ItemBody_FelianJag_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemBody_FelianJag_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBody_FelianJag_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemBody_FelianJag.BP_ItemBody_FelianJag_C.ExecuteUbergraph_BP_ItemBody_FelianJag
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemBody_FelianJag_C::ExecuteUbergraph_BP_ItemBody_FelianJag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBody_FelianJag_C", "ExecuteUbergraph_BP_ItemBody_FelianJag");

	Params::ABP_ItemBody_FelianJag_C_ExecuteUbergraph_BP_ItemBody_FelianJag_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


