#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AHitReact_Mushroom_Stagger_B.AHitReact_Mushroom_Stagger_B_C
// (None)

class UClass* UAHitReact_Mushroom_Stagger_B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AHitReact_Mushroom_Stagger_B_C");

	return Clss;
}


// AHitReact_Mushroom_Stagger_B_C AHitReact_Mushroom_Stagger_B.Default__AHitReact_Mushroom_Stagger_B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAHitReact_Mushroom_Stagger_B_C* UAHitReact_Mushroom_Stagger_B_C::GetDefaultObj()
{
	static class UAHitReact_Mushroom_Stagger_B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAHitReact_Mushroom_Stagger_B_C*>(UAHitReact_Mushroom_Stagger_B_C::StaticClass()->DefaultObject);

	return Default;
}

}


