#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharacterInfoHUDComponent.CharacterInfoHUDComponent_C
// (None)

class UClass* UCharacterInfoHUDComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterInfoHUDComponent_C");

	return Clss;
}


// CharacterInfoHUDComponent_C CharacterInfoHUDComponent.Default__CharacterInfoHUDComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterInfoHUDComponent_C* UCharacterInfoHUDComponent_C::GetDefaultObj()
{
	static class UCharacterInfoHUDComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterInfoHUDComponent_C*>(UCharacterInfoHUDComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


