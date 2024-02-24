#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalCerberusMag.BP_LocalCerberusMag_C
// (Actor)

class UClass* ABP_LocalCerberusMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalCerberusMag_C");

	return Clss;
}


// BP_LocalCerberusMag_C BP_LocalCerberusMag.Default__BP_LocalCerberusMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalCerberusMag_C* ABP_LocalCerberusMag_C::GetDefaultObj()
{
	static class ABP_LocalCerberusMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalCerberusMag_C*>(ABP_LocalCerberusMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


