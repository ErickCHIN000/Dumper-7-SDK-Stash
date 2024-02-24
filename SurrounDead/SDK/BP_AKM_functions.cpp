#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AKM.BP_AKM_C
// (Actor)

class UClass* ABP_AKM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AKM_C");

	return Clss;
}


// BP_AKM_C BP_AKM.Default__BP_AKM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AKM_C* ABP_AKM_C::GetDefaultObj()
{
	static class ABP_AKM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AKM_C*>(ABP_AKM_C::StaticClass()->DefaultObject);

	return Default;
}

}


