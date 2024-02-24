#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryPantsBlack.BP_MilitaryPantsBlack_C
// (Actor)

class UClass* ABP_MilitaryPantsBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryPantsBlack_C");

	return Clss;
}


// BP_MilitaryPantsBlack_C BP_MilitaryPantsBlack.Default__BP_MilitaryPantsBlack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryPantsBlack_C* ABP_MilitaryPantsBlack_C::GetDefaultObj()
{
	static class ABP_MilitaryPantsBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryPantsBlack_C*>(ABP_MilitaryPantsBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


