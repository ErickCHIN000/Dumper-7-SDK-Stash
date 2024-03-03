#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Arrow.BP_Arrow_C
// (Actor)

class UClass* ABP_Arrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Arrow_C");

	return Clss;
}


// BP_Arrow_C BP_Arrow.Default__BP_Arrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Arrow_C* ABP_Arrow_C::GetDefaultObj()
{
	static class ABP_Arrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Arrow_C*>(ABP_Arrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


