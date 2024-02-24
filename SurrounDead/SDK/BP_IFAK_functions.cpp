#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IFAK.BP_IFAK_C
// (Actor)

class UClass* ABP_IFAK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IFAK_C");

	return Clss;
}


// BP_IFAK_C BP_IFAK.Default__BP_IFAK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IFAK_C* ABP_IFAK_C::GetDefaultObj()
{
	static class ABP_IFAK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IFAK_C*>(ABP_IFAK_C::StaticClass()->DefaultObject);

	return Default;
}

}


