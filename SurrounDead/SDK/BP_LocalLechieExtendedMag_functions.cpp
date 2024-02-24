#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalLechieExtendedMag.BP_LocalLechieExtendedMag_C
// (Actor)

class UClass* ABP_LocalLechieExtendedMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalLechieExtendedMag_C");

	return Clss;
}


// BP_LocalLechieExtendedMag_C BP_LocalLechieExtendedMag.Default__BP_LocalLechieExtendedMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalLechieExtendedMag_C* ABP_LocalLechieExtendedMag_C::GetDefaultObj()
{
	static class ABP_LocalLechieExtendedMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalLechieExtendedMag_C*>(ABP_LocalLechieExtendedMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


