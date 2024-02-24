#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BaseballBat.BP_BaseballBat_C
// (Actor)

class UClass* ABP_BaseballBat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BaseballBat_C");

	return Clss;
}


// BP_BaseballBat_C BP_BaseballBat.Default__BP_BaseballBat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BaseballBat_C* ABP_BaseballBat_C::GetDefaultObj()
{
	static class ABP_BaseballBat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BaseballBat_C*>(ABP_BaseballBat_C::StaticClass()->DefaultObject);

	return Default;
}

}


