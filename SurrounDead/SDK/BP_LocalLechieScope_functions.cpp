#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalLechieScope.BP_LocalLechieScope_C
// (Actor)

class UClass* ABP_LocalLechieScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalLechieScope_C");

	return Clss;
}


// BP_LocalLechieScope_C BP_LocalLechieScope.Default__BP_LocalLechieScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalLechieScope_C* ABP_LocalLechieScope_C::GetDefaultObj()
{
	static class ABP_LocalLechieScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalLechieScope_C*>(ABP_LocalLechieScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


