#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PolicePants.BP_PolicePants_C
// (Actor)

class UClass* ABP_PolicePants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PolicePants_C");

	return Clss;
}


// BP_PolicePants_C BP_PolicePants.Default__BP_PolicePants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PolicePants_C* ABP_PolicePants_C::GetDefaultObj()
{
	static class ABP_PolicePants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PolicePants_C*>(ABP_PolicePants_C::StaticClass()->DefaultObject);

	return Default;
}

}


