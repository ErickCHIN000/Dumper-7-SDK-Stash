#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AHitReact_DragonCompanion_Stagger_F.AHitReact_DragonCompanion_Stagger_F_C
// (None)

class UClass* UAHitReact_DragonCompanion_Stagger_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AHitReact_DragonCompanion_Stagger_F_C");

	return Clss;
}


// AHitReact_DragonCompanion_Stagger_F_C AHitReact_DragonCompanion_Stagger_F.Default__AHitReact_DragonCompanion_Stagger_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAHitReact_DragonCompanion_Stagger_F_C* UAHitReact_DragonCompanion_Stagger_F_C::GetDefaultObj()
{
	static class UAHitReact_DragonCompanion_Stagger_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAHitReact_DragonCompanion_Stagger_F_C*>(UAHitReact_DragonCompanion_Stagger_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


