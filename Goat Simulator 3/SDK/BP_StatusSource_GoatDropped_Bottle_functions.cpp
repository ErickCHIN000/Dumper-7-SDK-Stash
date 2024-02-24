#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StatusSource_GoatDropped_Bottle.BP_StatusSource_GoatDropped_Bottle_C
// (Actor)

class UClass* ABP_StatusSource_GoatDropped_Bottle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StatusSource_GoatDropped_Bottle_C");

	return Clss;
}


// BP_StatusSource_GoatDropped_Bottle_C BP_StatusSource_GoatDropped_Bottle.Default__BP_StatusSource_GoatDropped_Bottle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StatusSource_GoatDropped_Bottle_C* ABP_StatusSource_GoatDropped_Bottle_C::GetDefaultObj()
{
	static class ABP_StatusSource_GoatDropped_Bottle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StatusSource_GoatDropped_Bottle_C*>(ABP_StatusSource_GoatDropped_Bottle_C::StaticClass()->DefaultObject);

	return Default;
}

}


