#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalMosinClip.BP_LocalMosinClip_C
// (Actor)

class UClass* ABP_LocalMosinClip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalMosinClip_C");

	return Clss;
}


// BP_LocalMosinClip_C BP_LocalMosinClip.Default__BP_LocalMosinClip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalMosinClip_C* ABP_LocalMosinClip_C::GetDefaultObj()
{
	static class ABP_LocalMosinClip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalMosinClip_C*>(ABP_LocalMosinClip_C::StaticClass()->DefaultObject);

	return Default;
}

}


