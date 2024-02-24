#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FiremansAxe.BP_FiremansAxe_C
// (Actor)

class UClass* ABP_FiremansAxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FiremansAxe_C");

	return Clss;
}


// BP_FiremansAxe_C BP_FiremansAxe.Default__BP_FiremansAxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FiremansAxe_C* ABP_FiremansAxe_C::GetDefaultObj()
{
	static class ABP_FiremansAxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FiremansAxe_C*>(ABP_FiremansAxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


