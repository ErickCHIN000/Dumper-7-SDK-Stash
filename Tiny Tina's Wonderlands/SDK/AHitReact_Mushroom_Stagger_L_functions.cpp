#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AHitReact_Mushroom_Stagger_L.AHitReact_Mushroom_Stagger_L_C
// (None)

class UClass* UAHitReact_Mushroom_Stagger_L_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AHitReact_Mushroom_Stagger_L_C");

	return Clss;
}


// AHitReact_Mushroom_Stagger_L_C AHitReact_Mushroom_Stagger_L.Default__AHitReact_Mushroom_Stagger_L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAHitReact_Mushroom_Stagger_L_C* UAHitReact_Mushroom_Stagger_L_C::GetDefaultObj()
{
	static class UAHitReact_Mushroom_Stagger_L_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAHitReact_Mushroom_Stagger_L_C*>(UAHitReact_Mushroom_Stagger_L_C::StaticClass()->DefaultObject);

	return Default;
}

}


