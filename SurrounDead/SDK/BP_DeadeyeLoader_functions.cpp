#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeadeyeLoader.BP_DeadeyeLoader_C
// (Actor)

class UClass* ABP_DeadeyeLoader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeadeyeLoader_C");

	return Clss;
}


// BP_DeadeyeLoader_C BP_DeadeyeLoader.Default__BP_DeadeyeLoader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DeadeyeLoader_C* ABP_DeadeyeLoader_C::GetDefaultObj()
{
	static class ABP_DeadeyeLoader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DeadeyeLoader_C*>(ABP_DeadeyeLoader_C::StaticClass()->DefaultObject);

	return Default;
}

}


