#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalMP5DrumMag.BP_LocalMP5DrumMag_C
// (Actor)

class UClass* ABP_LocalMP5DrumMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalMP5DrumMag_C");

	return Clss;
}


// BP_LocalMP5DrumMag_C BP_LocalMP5DrumMag.Default__BP_LocalMP5DrumMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalMP5DrumMag_C* ABP_LocalMP5DrumMag_C::GetDefaultObj()
{
	static class ABP_LocalMP5DrumMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalMP5DrumMag_C*>(ABP_LocalMP5DrumMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


