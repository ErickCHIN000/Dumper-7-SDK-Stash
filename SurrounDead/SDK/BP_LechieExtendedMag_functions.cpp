#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LechieExtendedMag.BP_LechieExtendedMag_C
// (Actor)

class UClass* ABP_LechieExtendedMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LechieExtendedMag_C");

	return Clss;
}


// BP_LechieExtendedMag_C BP_LechieExtendedMag.Default__BP_LechieExtendedMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LechieExtendedMag_C* ABP_LechieExtendedMag_C::GetDefaultObj()
{
	static class ABP_LechieExtendedMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LechieExtendedMag_C*>(ABP_LechieExtendedMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


