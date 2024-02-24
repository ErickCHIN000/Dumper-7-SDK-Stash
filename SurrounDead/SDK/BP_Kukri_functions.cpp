#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Kukri.BP_Kukri_C
// (Actor)

class UClass* ABP_Kukri_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Kukri_C");

	return Clss;
}


// BP_Kukri_C BP_Kukri.Default__BP_Kukri_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Kukri_C* ABP_Kukri_C::GetDefaultObj()
{
	static class ABP_Kukri_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Kukri_C*>(ABP_Kukri_C::StaticClass()->DefaultObject);

	return Default;
}

}


