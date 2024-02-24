#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SPAS12Loader.BP_SPAS12Loader_C
// (Actor)

class UClass* ABP_SPAS12Loader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SPAS12Loader_C");

	return Clss;
}


// BP_SPAS12Loader_C BP_SPAS12Loader.Default__BP_SPAS12Loader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SPAS12Loader_C* ABP_SPAS12Loader_C::GetDefaultObj()
{
	static class ABP_SPAS12Loader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SPAS12Loader_C*>(ABP_SPAS12Loader_C::StaticClass()->DefaultObject);

	return Default;
}

}


