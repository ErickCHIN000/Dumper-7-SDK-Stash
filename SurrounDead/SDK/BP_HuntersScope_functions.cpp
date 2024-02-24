#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntersScope.BP_HuntersScope_C
// (Actor)

class UClass* ABP_HuntersScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntersScope_C");

	return Clss;
}


// BP_HuntersScope_C BP_HuntersScope.Default__BP_HuntersScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HuntersScope_C* ABP_HuntersScope_C::GetDefaultObj()
{
	static class ABP_HuntersScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HuntersScope_C*>(ABP_HuntersScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


