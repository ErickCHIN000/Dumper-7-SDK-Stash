#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Aviators.BP_Aviators_C
// (Actor)

class UClass* ABP_Aviators_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Aviators_C");

	return Clss;
}


// BP_Aviators_C BP_Aviators.Default__BP_Aviators_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Aviators_C* ABP_Aviators_C::GetDefaultObj()
{
	static class ABP_Aviators_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Aviators_C*>(ABP_Aviators_C::StaticClass()->DefaultObject);

	return Default;
}

}


