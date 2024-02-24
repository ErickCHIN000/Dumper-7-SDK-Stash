#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AHitReact_DragonCompanion_Stagger_R.AHitReact_DragonCompanion_Stagger_R_C
// (None)

class UClass* UAHitReact_DragonCompanion_Stagger_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AHitReact_DragonCompanion_Stagger_R_C");

	return Clss;
}


// AHitReact_DragonCompanion_Stagger_R_C AHitReact_DragonCompanion_Stagger_R.Default__AHitReact_DragonCompanion_Stagger_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAHitReact_DragonCompanion_Stagger_R_C* UAHitReact_DragonCompanion_Stagger_R_C::GetDefaultObj()
{
	static class UAHitReact_DragonCompanion_Stagger_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAHitReact_DragonCompanion_Stagger_R_C*>(UAHitReact_DragonCompanion_Stagger_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


