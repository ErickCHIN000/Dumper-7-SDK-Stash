#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeagleMag.BP_DeagleMag_C
// (Actor)

class UClass* ABP_DeagleMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeagleMag_C");

	return Clss;
}


// BP_DeagleMag_C BP_DeagleMag.Default__BP_DeagleMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DeagleMag_C* ABP_DeagleMag_C::GetDefaultObj()
{
	static class ABP_DeagleMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DeagleMag_C*>(ABP_DeagleMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


