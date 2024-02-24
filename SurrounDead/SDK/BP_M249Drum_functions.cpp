#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_M249Drum.BP_M249Drum_C
// (Actor)

class UClass* ABP_M249Drum_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_M249Drum_C");

	return Clss;
}


// BP_M249Drum_C BP_M249Drum.Default__BP_M249Drum_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_M249Drum_C* ABP_M249Drum_C::GetDefaultObj()
{
	static class ABP_M249Drum_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_M249Drum_C*>(ABP_M249Drum_C::StaticClass()->DefaultObject);

	return Default;
}

}


