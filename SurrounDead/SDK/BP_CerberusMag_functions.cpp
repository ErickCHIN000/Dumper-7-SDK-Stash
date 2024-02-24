#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CerberusMag.BP_CerberusMag_C
// (Actor)

class UClass* ABP_CerberusMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CerberusMag_C");

	return Clss;
}


// BP_CerberusMag_C BP_CerberusMag.Default__BP_CerberusMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CerberusMag_C* ABP_CerberusMag_C::GetDefaultObj()
{
	static class ABP_CerberusMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CerberusMag_C*>(ABP_CerberusMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


