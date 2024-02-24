#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UISurvivalMapComponent.UISurvivalMapComponent_C
// (None)

class UClass* UUISurvivalMapComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UISurvivalMapComponent_C");

	return Clss;
}


// UISurvivalMapComponent_C UISurvivalMapComponent.Default__UISurvivalMapComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUISurvivalMapComponent_C* UUISurvivalMapComponent_C::GetDefaultObj()
{
	static class UUISurvivalMapComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUISurvivalMapComponent_C*>(UUISurvivalMapComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


