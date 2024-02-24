#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalHeavyScope.BP_LocalHeavyScope_C
// (Actor)

class UClass* ABP_LocalHeavyScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalHeavyScope_C");

	return Clss;
}


// BP_LocalHeavyScope_C BP_LocalHeavyScope.Default__BP_LocalHeavyScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalHeavyScope_C* ABP_LocalHeavyScope_C::GetDefaultObj()
{
	static class ABP_LocalHeavyScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalHeavyScope_C*>(ABP_LocalHeavyScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


