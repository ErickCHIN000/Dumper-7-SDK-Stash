#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CannedCorn.BP_CannedCorn_C
// (Actor)

class UClass* ABP_CannedCorn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CannedCorn_C");

	return Clss;
}


// BP_CannedCorn_C BP_CannedCorn.Default__BP_CannedCorn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CannedCorn_C* ABP_CannedCorn_C::GetDefaultObj()
{
	static class ABP_CannedCorn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CannedCorn_C*>(ABP_CannedCorn_C::StaticClass()->DefaultObject);

	return Default;
}

}


