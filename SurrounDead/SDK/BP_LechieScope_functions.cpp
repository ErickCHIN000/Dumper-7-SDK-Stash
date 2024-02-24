#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LechieScope.BP_LechieScope_C
// (Actor)

class UClass* ABP_LechieScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LechieScope_C");

	return Clss;
}


// BP_LechieScope_C BP_LechieScope.Default__BP_LechieScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LechieScope_C* ABP_LechieScope_C::GetDefaultObj()
{
	static class ABP_LechieScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LechieScope_C*>(ABP_LechieScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


