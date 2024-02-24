#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryPants.BP_MilitaryPants_C
// (Actor)

class UClass* ABP_MilitaryPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryPants_C");

	return Clss;
}


// BP_MilitaryPants_C BP_MilitaryPants.Default__BP_MilitaryPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryPants_C* ABP_MilitaryPants_C::GetDefaultObj()
{
	static class ABP_MilitaryPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryPants_C*>(ABP_MilitaryPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


