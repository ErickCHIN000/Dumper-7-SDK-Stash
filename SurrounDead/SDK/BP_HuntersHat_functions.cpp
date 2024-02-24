#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntersHat.BP_HuntersHat_C
// (Actor)

class UClass* ABP_HuntersHat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntersHat_C");

	return Clss;
}


// BP_HuntersHat_C BP_HuntersHat.Default__BP_HuntersHat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HuntersHat_C* ABP_HuntersHat_C::GetDefaultObj()
{
	static class ABP_HuntersHat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HuntersHat_C*>(ABP_HuntersHat_C::StaticClass()->DefaultObject);

	return Default;
}

}


