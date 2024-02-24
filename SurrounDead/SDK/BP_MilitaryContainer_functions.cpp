#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryContainer.BP_MilitaryContainer_C
// (Actor)

class UClass* ABP_MilitaryContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryContainer_C");

	return Clss;
}


// BP_MilitaryContainer_C BP_MilitaryContainer.Default__BP_MilitaryContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryContainer_C* ABP_MilitaryContainer_C::GetDefaultObj()
{
	static class ABP_MilitaryContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryContainer_C*>(ABP_MilitaryContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


