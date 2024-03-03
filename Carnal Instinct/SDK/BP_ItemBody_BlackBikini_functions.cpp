#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemBody_BlackBikini.BP_ItemBody_BlackBikini_C
// (Actor)

class UClass* ABP_ItemBody_BlackBikini_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemBody_BlackBikini_C");

	return Clss;
}


// BP_ItemBody_BlackBikini_C BP_ItemBody_BlackBikini.Default__BP_ItemBody_BlackBikini_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemBody_BlackBikini_C* ABP_ItemBody_BlackBikini_C::GetDefaultObj()
{
	static class ABP_ItemBody_BlackBikini_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemBody_BlackBikini_C*>(ABP_ItemBody_BlackBikini_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemBody_BlackBikini.BP_ItemBody_BlackBikini_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemBody_BlackBikini_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBody_BlackBikini_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemBody_BlackBikini.BP_ItemBody_BlackBikini_C.ExecuteUbergraph_BP_ItemBody_BlackBikini
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemBody_BlackBikini_C::ExecuteUbergraph_BP_ItemBody_BlackBikini(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBody_BlackBikini_C", "ExecuteUbergraph_BP_ItemBody_BlackBikini");

	Params::ABP_ItemBody_BlackBikini_C_ExecuteUbergraph_BP_ItemBody_BlackBikini_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


