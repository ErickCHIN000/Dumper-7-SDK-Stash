#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OfficePants.BP_OfficePants_C
// (Actor)

class UClass* ABP_OfficePants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OfficePants_C");

	return Clss;
}


// BP_OfficePants_C BP_OfficePants.Default__BP_OfficePants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OfficePants_C* ABP_OfficePants_C::GetDefaultObj()
{
	static class ABP_OfficePants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OfficePants_C*>(ABP_OfficePants_C::StaticClass()->DefaultObject);

	return Default;
}

}


