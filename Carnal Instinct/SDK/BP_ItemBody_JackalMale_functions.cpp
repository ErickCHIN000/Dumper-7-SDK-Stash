#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemBody_JackalMale.BP_ItemBody_JackalMale_C
// (Actor)

class UClass* ABP_ItemBody_JackalMale_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemBody_JackalMale_C");

	return Clss;
}


// BP_ItemBody_JackalMale_C BP_ItemBody_JackalMale.Default__BP_ItemBody_JackalMale_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemBody_JackalMale_C* ABP_ItemBody_JackalMale_C::GetDefaultObj()
{
	static class ABP_ItemBody_JackalMale_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemBody_JackalMale_C*>(ABP_ItemBody_JackalMale_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemBody_JackalMale.BP_ItemBody_JackalMale_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemBody_JackalMale_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBody_JackalMale_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemBody_JackalMale.BP_ItemBody_JackalMale_C.ExecuteUbergraph_BP_ItemBody_JackalMale
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemBody_JackalMale_C::ExecuteUbergraph_BP_ItemBody_JackalMale(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBody_JackalMale_C", "ExecuteUbergraph_BP_ItemBody_JackalMale");

	Params::ABP_ItemBody_JackalMale_C_ExecuteUbergraph_BP_ItemBody_JackalMale_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


