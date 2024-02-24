#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_HeadOfTheSnake_BAMF_PortalIn.BP_CE_HeadOfTheSnake_BAMF_PortalIn_C
// (None)

class UClass* UBP_CE_HeadOfTheSnake_BAMF_PortalIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_HeadOfTheSnake_BAMF_PortalIn_C");

	return Clss;
}


// BP_CE_HeadOfTheSnake_BAMF_PortalIn_C BP_CE_HeadOfTheSnake_BAMF_PortalIn.Default__BP_CE_HeadOfTheSnake_BAMF_PortalIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_HeadOfTheSnake_BAMF_PortalIn_C* UBP_CE_HeadOfTheSnake_BAMF_PortalIn_C::GetDefaultObj()
{
	static class UBP_CE_HeadOfTheSnake_BAMF_PortalIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_HeadOfTheSnake_BAMF_PortalIn_C*>(UBP_CE_HeadOfTheSnake_BAMF_PortalIn_C::StaticClass()->DefaultObject);

	return Default;
}

}


