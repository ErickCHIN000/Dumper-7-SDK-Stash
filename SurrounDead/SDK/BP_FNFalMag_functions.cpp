#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FNFalMag.BP_FNFalMag_C
// (Actor)

class UClass* ABP_FNFalMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FNFalMag_C");

	return Clss;
}


// BP_FNFalMag_C BP_FNFalMag.Default__BP_FNFalMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FNFalMag_C* ABP_FNFalMag_C::GetDefaultObj()
{
	static class ABP_FNFalMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FNFalMag_C*>(ABP_FNFalMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


