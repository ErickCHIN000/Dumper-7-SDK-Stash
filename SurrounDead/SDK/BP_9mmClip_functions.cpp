#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_9mmClip.BP_9mmClip_C
// (Actor)

class UClass* ABP_9mmClip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_9mmClip_C");

	return Clss;
}


// BP_9mmClip_C BP_9mmClip.Default__BP_9mmClip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_9mmClip_C* ABP_9mmClip_C::GetDefaultObj()
{
	static class ABP_9mmClip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_9mmClip_C*>(ABP_9mmClip_C::StaticClass()->DefaultObject);

	return Default;
}

}


