#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InternalCervix.BP_InternalCervix_C
// (Actor)

class UClass* ABP_InternalCervix_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InternalCervix_C");

	return Clss;
}


// BP_InternalCervix_C BP_InternalCervix.Default__BP_InternalCervix_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_InternalCervix_C* ABP_InternalCervix_C::GetDefaultObj()
{
	static class ABP_InternalCervix_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_InternalCervix_C*>(ABP_InternalCervix_C::StaticClass()->DefaultObject);

	return Default;
}

}


