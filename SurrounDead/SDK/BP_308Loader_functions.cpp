#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_308Loader.BP_308Loader_C
// (Actor)

class UClass* ABP_308Loader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_308Loader_C");

	return Clss;
}


// BP_308Loader_C BP_308Loader.Default__BP_308Loader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_308Loader_C* ABP_308Loader_C::GetDefaultObj()
{
	static class ABP_308Loader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_308Loader_C*>(ABP_308Loader_C::StaticClass()->DefaultObject);

	return Default;
}

}


