#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GlovesGreen.BP_GlovesGreen_C
// (Actor)

class UClass* ABP_GlovesGreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GlovesGreen_C");

	return Clss;
}


// BP_GlovesGreen_C BP_GlovesGreen.Default__BP_GlovesGreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GlovesGreen_C* ABP_GlovesGreen_C::GetDefaultObj()
{
	static class ABP_GlovesGreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GlovesGreen_C*>(ABP_GlovesGreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


