#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PistolSuppressor.BP_PistolSuppressor_C
// (Actor)

class UClass* ABP_PistolSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PistolSuppressor_C");

	return Clss;
}


// BP_PistolSuppressor_C BP_PistolSuppressor.Default__BP_PistolSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PistolSuppressor_C* ABP_PistolSuppressor_C::GetDefaultObj()
{
	static class ABP_PistolSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PistolSuppressor_C*>(ABP_PistolSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


