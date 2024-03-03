#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead-InqBast1.BP_ItemHead-InqBast1_C
// (Actor)

class UClass* ABP_ItemHeadMinusInqBast1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead-InqBast1_C");

	return Clss;
}


// BP_ItemHead-InqBast1_C BP_ItemHead-InqBast1.Default__BP_ItemHead-InqBast1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHeadMinusInqBast1_C* ABP_ItemHeadMinusInqBast1_C::GetDefaultObj()
{
	static class ABP_ItemHeadMinusInqBast1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHeadMinusInqBast1_C*>(ABP_ItemHeadMinusInqBast1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemHead-InqBast1.BP_ItemHead-InqBast1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemHeadMinusInqBast1_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead-InqBast1_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemHead-InqBast1.BP_ItemHead-InqBast1_C.ExecuteUbergraph_BP_ItemHead-InqBast1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemHeadMinusInqBast1_C::ExecuteUbergraph_BP_ItemHeadMinusInqBast1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead-InqBast1_C", "ExecuteUbergraph_BP_ItemHead-InqBast1");

	Params::ABP_ItemHeadMinusInqBast1_C_ExecuteUbergraph_BP_ItemHeadMinusInqBast1_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


