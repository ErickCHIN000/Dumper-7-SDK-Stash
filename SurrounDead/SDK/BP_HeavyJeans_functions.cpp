#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HeavyJeans.BP_HeavyJeans_C
// (Actor)

class UClass* ABP_HeavyJeans_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HeavyJeans_C");

	return Clss;
}


// BP_HeavyJeans_C BP_HeavyJeans.Default__BP_HeavyJeans_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HeavyJeans_C* ABP_HeavyJeans_C::GetDefaultObj()
{
	static class ABP_HeavyJeans_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HeavyJeans_C*>(ABP_HeavyJeans_C::StaticClass()->DefaultObject);

	return Default;
}

}


