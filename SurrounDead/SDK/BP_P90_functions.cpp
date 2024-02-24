#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_P90.BP_P90_C
// (Actor)

class UClass* ABP_P90_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_P90_C");

	return Clss;
}


// BP_P90_C BP_P90.Default__BP_P90_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_P90_C* ABP_P90_C::GetDefaultObj()
{
	static class ABP_P90_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_P90_C*>(ABP_P90_C::StaticClass()->DefaultObject);

	return Default;
}

}


