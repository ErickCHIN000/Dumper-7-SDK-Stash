#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Fire_WoodImpact.Fire_WoodImpact_C
// (Actor)

class UClass* AFire_WoodImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fire_WoodImpact_C");

	return Clss;
}


// Fire_WoodImpact_C Fire_WoodImpact.Default__Fire_WoodImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFire_WoodImpact_C* AFire_WoodImpact_C::GetDefaultObj()
{
	static class AFire_WoodImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFire_WoodImpact_C*>(AFire_WoodImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


