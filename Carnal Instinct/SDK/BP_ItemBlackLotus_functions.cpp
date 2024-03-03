#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemBlackLotus.BP_ItemBlackLotus_C
// (Actor)

class UClass* ABP_ItemBlackLotus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemBlackLotus_C");

	return Clss;
}


// BP_ItemBlackLotus_C BP_ItemBlackLotus.Default__BP_ItemBlackLotus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemBlackLotus_C* ABP_ItemBlackLotus_C::GetDefaultObj()
{
	static class ABP_ItemBlackLotus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemBlackLotus_C*>(ABP_ItemBlackLotus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemBlackLotus.BP_ItemBlackLotus_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemBlackLotus_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBlackLotus_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemBlackLotus.BP_ItemBlackLotus_C.ExecuteUbergraph_BP_ItemBlackLotus
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemBlackLotus_C::ExecuteUbergraph_BP_ItemBlackLotus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBlackLotus_C", "ExecuteUbergraph_BP_ItemBlackLotus");

	Params::ABP_ItemBlackLotus_C_ExecuteUbergraph_BP_ItemBlackLotus_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


