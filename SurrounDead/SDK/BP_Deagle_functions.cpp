#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Deagle.BP_Deagle_C
// (Actor)

class UClass* ABP_Deagle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Deagle_C");

	return Clss;
}


// BP_Deagle_C BP_Deagle.Default__BP_Deagle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Deagle_C* ABP_Deagle_C::GetDefaultObj()
{
	static class ABP_Deagle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Deagle_C*>(ABP_Deagle_C::StaticClass()->DefaultObject);

	return Default;
}

}


