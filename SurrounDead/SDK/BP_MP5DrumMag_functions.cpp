#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MP5DrumMag.BP_MP5DrumMag_C
// (Actor)

class UClass* ABP_MP5DrumMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MP5DrumMag_C");

	return Clss;
}


// BP_MP5DrumMag_C BP_MP5DrumMag.Default__BP_MP5DrumMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MP5DrumMag_C* ABP_MP5DrumMag_C::GetDefaultObj()
{
	static class ABP_MP5DrumMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MP5DrumMag_C*>(ABP_MP5DrumMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


