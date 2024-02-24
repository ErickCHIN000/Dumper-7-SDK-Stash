#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_BAMF_PortalIn_NP.BP_CE_BAMF_PortalIn_NP_C
// (None)

class UClass* UBP_CE_BAMF_PortalIn_NP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_BAMF_PortalIn_NP_C");

	return Clss;
}


// BP_CE_BAMF_PortalIn_NP_C BP_CE_BAMF_PortalIn_NP.Default__BP_CE_BAMF_PortalIn_NP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_BAMF_PortalIn_NP_C* UBP_CE_BAMF_PortalIn_NP_C::GetDefaultObj()
{
	static class UBP_CE_BAMF_PortalIn_NP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_BAMF_PortalIn_NP_C*>(UBP_CE_BAMF_PortalIn_NP_C::StaticClass()->DefaultObject);

	return Default;
}

}


