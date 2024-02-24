#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AHitReact_DragonCompanion_Gib.AHitReact_DragonCompanion_Gib_C
// (None)

class UClass* UAHitReact_DragonCompanion_Gib_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AHitReact_DragonCompanion_Gib_C");

	return Clss;
}


// AHitReact_DragonCompanion_Gib_C AHitReact_DragonCompanion_Gib.Default__AHitReact_DragonCompanion_Gib_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAHitReact_DragonCompanion_Gib_C* UAHitReact_DragonCompanion_Gib_C::GetDefaultObj()
{
	static class UAHitReact_DragonCompanion_Gib_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAHitReact_DragonCompanion_Gib_C*>(UAHitReact_DragonCompanion_Gib_C::StaticClass()->DefaultObject);

	return Default;
}

}


