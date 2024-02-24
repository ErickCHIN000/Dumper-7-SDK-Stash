#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_45Loader.BP_45Loader_C
// (Actor)

class UClass* ABP_45Loader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_45Loader_C");

	return Clss;
}


// BP_45Loader_C BP_45Loader.Default__BP_45Loader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_45Loader_C* ABP_45Loader_C::GetDefaultObj()
{
	static class ABP_45Loader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_45Loader_C*>(ABP_45Loader_C::StaticClass()->DefaultObject);

	return Default;
}

}


