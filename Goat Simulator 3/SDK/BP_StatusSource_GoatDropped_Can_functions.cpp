#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StatusSource_GoatDropped_Can.BP_StatusSource_GoatDropped_Can_C
// (Actor)

class UClass* ABP_StatusSource_GoatDropped_Can_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StatusSource_GoatDropped_Can_C");

	return Clss;
}


// BP_StatusSource_GoatDropped_Can_C BP_StatusSource_GoatDropped_Can.Default__BP_StatusSource_GoatDropped_Can_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StatusSource_GoatDropped_Can_C* ABP_StatusSource_GoatDropped_Can_C::GetDefaultObj()
{
	static class ABP_StatusSource_GoatDropped_Can_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StatusSource_GoatDropped_Can_C*>(ABP_StatusSource_GoatDropped_Can_C::StaticClass()->DefaultObject);

	return Default;
}

}


