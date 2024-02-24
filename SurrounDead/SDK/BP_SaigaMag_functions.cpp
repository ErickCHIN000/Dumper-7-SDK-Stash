#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SaigaMag.BP_SaigaMag_C
// (Actor)

class UClass* ABP_SaigaMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SaigaMag_C");

	return Clss;
}


// BP_SaigaMag_C BP_SaigaMag.Default__BP_SaigaMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SaigaMag_C* ABP_SaigaMag_C::GetDefaultObj()
{
	static class ABP_SaigaMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SaigaMag_C*>(ABP_SaigaMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


