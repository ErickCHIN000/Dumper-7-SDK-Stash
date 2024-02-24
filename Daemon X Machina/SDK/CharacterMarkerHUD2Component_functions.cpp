#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharacterMarkerHUD2Component.CharacterMarkerHUD2Component_C
// (None)

class UClass* UCharacterMarkerHUD2Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterMarkerHUD2Component_C");

	return Clss;
}


// CharacterMarkerHUD2Component_C CharacterMarkerHUD2Component.Default__CharacterMarkerHUD2Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterMarkerHUD2Component_C* UCharacterMarkerHUD2Component_C::GetDefaultObj()
{
	static class UCharacterMarkerHUD2Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterMarkerHUD2Component_C*>(UCharacterMarkerHUD2Component_C::StaticClass()->DefaultObject);

	return Default;
}

}


