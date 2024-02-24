#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HeavyJeans2.BP_HeavyJeans2_C
// (Actor)

class UClass* ABP_HeavyJeans2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HeavyJeans2_C");

	return Clss;
}


// BP_HeavyJeans2_C BP_HeavyJeans2.Default__BP_HeavyJeans2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HeavyJeans2_C* ABP_HeavyJeans2_C::GetDefaultObj()
{
	static class ABP_HeavyJeans2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HeavyJeans2_C*>(ABP_HeavyJeans2_C::StaticClass()->DefaultObject);

	return Default;
}

}


