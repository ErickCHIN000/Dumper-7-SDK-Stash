#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CandyCane.BP_CandyCane_C
// (Actor)

class UClass* ABP_CandyCane_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CandyCane_C");

	return Clss;
}


// BP_CandyCane_C BP_CandyCane.Default__BP_CandyCane_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CandyCane_C* ABP_CandyCane_C::GetDefaultObj()
{
	static class ABP_CandyCane_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CandyCane_C*>(ABP_CandyCane_C::StaticClass()->DefaultObject);

	return Default;
}

}


