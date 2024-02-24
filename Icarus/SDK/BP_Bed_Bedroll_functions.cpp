#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bed_Bedroll.BP_Bed_Bedroll_C
// (Actor)

class UClass* ABP_Bed_Bedroll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bed_Bedroll_C");

	return Clss;
}


// BP_Bed_Bedroll_C BP_Bed_Bedroll.Default__BP_Bed_Bedroll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bed_Bedroll_C* ABP_Bed_Bedroll_C::GetDefaultObj()
{
	static class ABP_Bed_Bedroll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bed_Bedroll_C*>(ABP_Bed_Bedroll_C::StaticClass()->DefaultObject);

	return Default;
}

}


