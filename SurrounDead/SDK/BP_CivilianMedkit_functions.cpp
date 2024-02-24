#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CivilianMedkit.BP_CivilianMedkit_C
// (Actor)

class UClass* ABP_CivilianMedkit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CivilianMedkit_C");

	return Clss;
}


// BP_CivilianMedkit_C BP_CivilianMedkit.Default__BP_CivilianMedkit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CivilianMedkit_C* ABP_CivilianMedkit_C::GetDefaultObj()
{
	static class ABP_CivilianMedkit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CivilianMedkit_C*>(ABP_CivilianMedkit_C::StaticClass()->DefaultObject);

	return Default;
}

}


