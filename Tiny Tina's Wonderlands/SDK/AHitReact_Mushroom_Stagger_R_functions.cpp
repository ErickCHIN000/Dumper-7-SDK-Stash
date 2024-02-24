#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AHitReact_Mushroom_Stagger_R.AHitReact_Mushroom_Stagger_R_C
// (None)

class UClass* UAHitReact_Mushroom_Stagger_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AHitReact_Mushroom_Stagger_R_C");

	return Clss;
}


// AHitReact_Mushroom_Stagger_R_C AHitReact_Mushroom_Stagger_R.Default__AHitReact_Mushroom_Stagger_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAHitReact_Mushroom_Stagger_R_C* UAHitReact_Mushroom_Stagger_R_C::GetDefaultObj()
{
	static class UAHitReact_Mushroom_Stagger_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAHitReact_Mushroom_Stagger_R_C*>(UAHitReact_Mushroom_Stagger_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


