#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalPistolSuppressor.BP_LocalPistolSuppressor_C
// (Actor)

class UClass* ABP_LocalPistolSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalPistolSuppressor_C");

	return Clss;
}


// BP_LocalPistolSuppressor_C BP_LocalPistolSuppressor.Default__BP_LocalPistolSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalPistolSuppressor_C* ABP_LocalPistolSuppressor_C::GetDefaultObj()
{
	static class ABP_LocalPistolSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalPistolSuppressor_C*>(ABP_LocalPistolSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


