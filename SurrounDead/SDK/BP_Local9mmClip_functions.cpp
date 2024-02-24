#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Local9mmClip.BP_Local9mmClip_C
// (Actor)

class UClass* ABP_Local9mmClip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Local9mmClip_C");

	return Clss;
}


// BP_Local9mmClip_C BP_Local9mmClip.Default__BP_Local9mmClip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Local9mmClip_C* ABP_Local9mmClip_C::GetDefaultObj()
{
	static class ABP_Local9mmClip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Local9mmClip_C*>(ABP_Local9mmClip_C::StaticClass()->DefaultObject);

	return Default;
}

}


