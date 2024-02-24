#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MosinClip.BP_MosinClip_C
// (Actor)

class UClass* ABP_MosinClip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MosinClip_C");

	return Clss;
}


// BP_MosinClip_C BP_MosinClip.Default__BP_MosinClip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MosinClip_C* ABP_MosinClip_C::GetDefaultObj()
{
	static class ABP_MosinClip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MosinClip_C*>(ABP_MosinClip_C::StaticClass()->DefaultObject);

	return Default;
}

}


