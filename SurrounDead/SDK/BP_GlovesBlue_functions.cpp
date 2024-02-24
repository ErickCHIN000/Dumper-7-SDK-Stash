#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GlovesBlue.BP_GlovesBlue_C
// (Actor)

class UClass* ABP_GlovesBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GlovesBlue_C");

	return Clss;
}


// BP_GlovesBlue_C BP_GlovesBlue.Default__BP_GlovesBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GlovesBlue_C* ABP_GlovesBlue_C::GetDefaultObj()
{
	static class ABP_GlovesBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GlovesBlue_C*>(ABP_GlovesBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


