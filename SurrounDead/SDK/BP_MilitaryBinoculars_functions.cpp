#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryBinoculars.BP_MilitaryBinoculars_C
// (Actor)

class UClass* ABP_MilitaryBinoculars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryBinoculars_C");

	return Clss;
}


// BP_MilitaryBinoculars_C BP_MilitaryBinoculars.Default__BP_MilitaryBinoculars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryBinoculars_C* ABP_MilitaryBinoculars_C::GetDefaultObj()
{
	static class ABP_MilitaryBinoculars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryBinoculars_C*>(ABP_MilitaryBinoculars_C::StaticClass()->DefaultObject);

	return Default;
}

}


