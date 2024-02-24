#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WornKnife.BP_WornKnife_C
// (Actor)

class UClass* ABP_WornKnife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WornKnife_C");

	return Clss;
}


// BP_WornKnife_C BP_WornKnife.Default__BP_WornKnife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WornKnife_C* ABP_WornKnife_C::GetDefaultObj()
{
	static class ABP_WornKnife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WornKnife_C*>(ABP_WornKnife_C::StaticClass()->DefaultObject);

	return Default;
}

}


