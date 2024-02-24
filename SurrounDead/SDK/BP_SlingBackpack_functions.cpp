#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SlingBackpack.BP_SlingBackpack_C
// (Actor)

class UClass* ABP_SlingBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SlingBackpack_C");

	return Clss;
}


// BP_SlingBackpack_C BP_SlingBackpack.Default__BP_SlingBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SlingBackpack_C* ABP_SlingBackpack_C::GetDefaultObj()
{
	static class ABP_SlingBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SlingBackpack_C*>(ABP_SlingBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


