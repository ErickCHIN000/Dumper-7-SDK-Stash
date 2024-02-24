#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HeavyScope.BP_HeavyScope_C
// (Actor)

class UClass* ABP_HeavyScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HeavyScope_C");

	return Clss;
}


// BP_HeavyScope_C BP_HeavyScope.Default__BP_HeavyScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HeavyScope_C* ABP_HeavyScope_C::GetDefaultObj()
{
	static class ABP_HeavyScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HeavyScope_C*>(ABP_HeavyScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


