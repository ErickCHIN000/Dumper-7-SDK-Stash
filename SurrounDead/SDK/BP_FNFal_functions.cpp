#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FNFal.BP_FNFal_C
// (Actor)

class UClass* ABP_FNFal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FNFal_C");

	return Clss;
}


// BP_FNFal_C BP_FNFal.Default__BP_FNFal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FNFal_C* ABP_FNFal_C::GetDefaultObj()
{
	static class ABP_FNFal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FNFal_C*>(ABP_FNFal_C::StaticClass()->DefaultObject);

	return Default;
}

}


