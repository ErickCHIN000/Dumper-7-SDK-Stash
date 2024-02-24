#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalSaigaMag.BP_LocalSaigaMag_C
// (Actor)

class UClass* ABP_LocalSaigaMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalSaigaMag_C");

	return Clss;
}


// BP_LocalSaigaMag_C BP_LocalSaigaMag.Default__BP_LocalSaigaMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalSaigaMag_C* ABP_LocalSaigaMag_C::GetDefaultObj()
{
	static class ABP_LocalSaigaMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalSaigaMag_C*>(ABP_LocalSaigaMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


