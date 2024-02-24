#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GlovesOrange.BP_GlovesOrange_C
// (Actor)

class UClass* ABP_GlovesOrange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GlovesOrange_C");

	return Clss;
}


// BP_GlovesOrange_C BP_GlovesOrange.Default__BP_GlovesOrange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GlovesOrange_C* ABP_GlovesOrange_C::GetDefaultObj()
{
	static class ABP_GlovesOrange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GlovesOrange_C*>(ABP_GlovesOrange_C::StaticClass()->DefaultObject);

	return Default;
}

}


