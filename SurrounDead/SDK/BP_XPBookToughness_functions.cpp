#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XPBookToughness.BP_XPBookToughness_C
// (Actor)

class UClass* ABP_XPBookToughness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XPBookToughness_C");

	return Clss;
}


// BP_XPBookToughness_C BP_XPBookToughness.Default__BP_XPBookToughness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_XPBookToughness_C* ABP_XPBookToughness_C::GetDefaultObj()
{
	static class ABP_XPBookToughness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_XPBookToughness_C*>(ABP_XPBookToughness_C::StaticClass()->DefaultObject);

	return Default;
}

}


