#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Kitchen_Storage.BP_Kitchen_Storage_C
// (Actor)

class UClass* ABP_Kitchen_Storage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Kitchen_Storage_C");

	return Clss;
}


// BP_Kitchen_Storage_C BP_Kitchen_Storage.Default__BP_Kitchen_Storage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Kitchen_Storage_C* ABP_Kitchen_Storage_C::GetDefaultObj()
{
	static class ABP_Kitchen_Storage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Kitchen_Storage_C*>(ABP_Kitchen_Storage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Kitchen_Storage.BP_Kitchen_Storage_C.OnBecomeInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Kitchen_Storage_C::OnBecomeInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Kitchen_Storage_C", "OnBecomeInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Kitchen_Storage.BP_Kitchen_Storage_C.OnNoLongerInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Kitchen_Storage_C::OnNoLongerInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Kitchen_Storage_C", "OnNoLongerInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Kitchen_Storage.BP_Kitchen_Storage_C.ExecuteUbergraph_BP_Kitchen_Storage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Kitchen_Storage_C::ExecuteUbergraph_BP_Kitchen_Storage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Kitchen_Storage_C", "ExecuteUbergraph_BP_Kitchen_Storage");

	Params::ABP_Kitchen_Storage_C_ExecuteUbergraph_BP_Kitchen_Storage_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


