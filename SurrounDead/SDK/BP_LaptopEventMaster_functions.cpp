#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LaptopEventMaster.BP_LaptopEventMaster_C
// (Actor)

class UClass* ABP_LaptopEventMaster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LaptopEventMaster_C");

	return Clss;
}


// BP_LaptopEventMaster_C BP_LaptopEventMaster.Default__BP_LaptopEventMaster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LaptopEventMaster_C* ABP_LaptopEventMaster_C::GetDefaultObj()
{
	static class ABP_LaptopEventMaster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LaptopEventMaster_C*>(ABP_LaptopEventMaster_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LaptopEventMaster.BP_LaptopEventMaster_C.SpawnEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LaptopEventMaster_C::SpawnEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LaptopEventMaster_C", "SpawnEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


