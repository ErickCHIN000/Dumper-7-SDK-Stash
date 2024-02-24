#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EmptyLocationPing.BP_EmptyLocationPing_C
// (Actor)

class UClass* ABP_EmptyLocationPing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EmptyLocationPing_C");

	return Clss;
}


// BP_EmptyLocationPing_C BP_EmptyLocationPing.Default__BP_EmptyLocationPing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EmptyLocationPing_C* ABP_EmptyLocationPing_C::GetDefaultObj()
{
	static class ABP_EmptyLocationPing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EmptyLocationPing_C*>(ABP_EmptyLocationPing_C::StaticClass()->DefaultObject);

	return Default;
}

}


