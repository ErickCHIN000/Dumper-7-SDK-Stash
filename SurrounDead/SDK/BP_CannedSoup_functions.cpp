#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CannedSoup.BP_CannedSoup_C
// (Actor)

class UClass* ABP_CannedSoup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CannedSoup_C");

	return Clss;
}


// BP_CannedSoup_C BP_CannedSoup.Default__BP_CannedSoup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CannedSoup_C* ABP_CannedSoup_C::GetDefaultObj()
{
	static class ABP_CannedSoup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CannedSoup_C*>(ABP_CannedSoup_C::StaticClass()->DefaultObject);

	return Default;
}

}


