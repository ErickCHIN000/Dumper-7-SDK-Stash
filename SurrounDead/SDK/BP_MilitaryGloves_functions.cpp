#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryGloves.BP_MilitaryGloves_C
// (Actor)

class UClass* ABP_MilitaryGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryGloves_C");

	return Clss;
}


// BP_MilitaryGloves_C BP_MilitaryGloves.Default__BP_MilitaryGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryGloves_C* ABP_MilitaryGloves_C::GetDefaultObj()
{
	static class ABP_MilitaryGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryGloves_C*>(ABP_MilitaryGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


