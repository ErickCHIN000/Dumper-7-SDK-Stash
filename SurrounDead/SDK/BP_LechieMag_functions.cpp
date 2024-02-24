#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LechieMag.BP_LechieMag_C
// (Actor)

class UClass* ABP_LechieMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LechieMag_C");

	return Clss;
}


// BP_LechieMag_C BP_LechieMag.Default__BP_LechieMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LechieMag_C* ABP_LechieMag_C::GetDefaultObj()
{
	static class ABP_LechieMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LechieMag_C*>(ABP_LechieMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


