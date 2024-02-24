#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharacterMarkerHUD3Component.CharacterMarkerHUD3Component_C
// (None)

class UClass* UCharacterMarkerHUD3Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterMarkerHUD3Component_C");

	return Clss;
}


// CharacterMarkerHUD3Component_C CharacterMarkerHUD3Component.Default__CharacterMarkerHUD3Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterMarkerHUD3Component_C* UCharacterMarkerHUD3Component_C::GetDefaultObj()
{
	static class UCharacterMarkerHUD3Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterMarkerHUD3Component_C*>(UCharacterMarkerHUD3Component_C::StaticClass()->DefaultObject);

	return Default;
}

}


