#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TracksuitPants.BP_TracksuitPants_C
// (Actor)

class UClass* ABP_TracksuitPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TracksuitPants_C");

	return Clss;
}


// BP_TracksuitPants_C BP_TracksuitPants.Default__BP_TracksuitPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TracksuitPants_C* ABP_TracksuitPants_C::GetDefaultObj()
{
	static class ABP_TracksuitPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TracksuitPants_C*>(ABP_TracksuitPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


