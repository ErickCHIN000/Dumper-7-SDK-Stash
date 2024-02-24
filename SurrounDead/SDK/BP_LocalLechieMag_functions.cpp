#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalLechieMag.BP_LocalLechieMag_C
// (Actor)

class UClass* ABP_LocalLechieMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalLechieMag_C");

	return Clss;
}


// BP_LocalLechieMag_C BP_LocalLechieMag.Default__BP_LocalLechieMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalLechieMag_C* ABP_LocalLechieMag_C::GetDefaultObj()
{
	static class ABP_LocalLechieMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalLechieMag_C*>(ABP_LocalLechieMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


