#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalHuntersScope.BP_LocalHuntersScope_C
// (Actor)

class UClass* ABP_LocalHuntersScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalHuntersScope_C");

	return Clss;
}


// BP_LocalHuntersScope_C BP_LocalHuntersScope.Default__BP_LocalHuntersScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalHuntersScope_C* ABP_LocalHuntersScope_C::GetDefaultObj()
{
	static class ABP_LocalHuntersScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalHuntersScope_C*>(ABP_LocalHuntersScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


