#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Poison_WoodImpact.Poison_WoodImpact_C
// (Actor)

class UClass* APoison_WoodImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Poison_WoodImpact_C");

	return Clss;
}


// Poison_WoodImpact_C Poison_WoodImpact.Default__Poison_WoodImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APoison_WoodImpact_C* APoison_WoodImpact_C::GetDefaultObj()
{
	static class APoison_WoodImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APoison_WoodImpact_C*>(APoison_WoodImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


