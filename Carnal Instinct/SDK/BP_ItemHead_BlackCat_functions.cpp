#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead_BlackCat.BP_ItemHead_BlackCat_C
// (Actor)

class UClass* ABP_ItemHead_BlackCat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_BlackCat_C");

	return Clss;
}


// BP_ItemHead_BlackCat_C BP_ItemHead_BlackCat.Default__BP_ItemHead_BlackCat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_BlackCat_C* ABP_ItemHead_BlackCat_C::GetDefaultObj()
{
	static class ABP_ItemHead_BlackCat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_BlackCat_C*>(ABP_ItemHead_BlackCat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemHead_BlackCat.BP_ItemHead_BlackCat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemHead_BlackCat_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_BlackCat_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemHead_BlackCat.BP_ItemHead_BlackCat_C.ExecuteUbergraph_BP_ItemHead_BlackCat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemHead_BlackCat_C::ExecuteUbergraph_BP_ItemHead_BlackCat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_BlackCat_C", "ExecuteUbergraph_BP_ItemHead_BlackCat");

	Params::ABP_ItemHead_BlackCat_C_ExecuteUbergraph_BP_ItemHead_BlackCat_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


