#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalFNFalMag.BP_LocalFNFalMag_C
// (Actor)

class UClass* ABP_LocalFNFalMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalFNFalMag_C");

	return Clss;
}


// BP_LocalFNFalMag_C BP_LocalFNFalMag.Default__BP_LocalFNFalMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalFNFalMag_C* ABP_LocalFNFalMag_C::GetDefaultObj()
{
	static class ABP_LocalFNFalMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalFNFalMag_C*>(ABP_LocalFNFalMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


