#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SaveCharacterCosmetic.SaveCharacterCosmetic_C
// (None)

class UClass* USaveCharacterCosmetic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SaveCharacterCosmetic_C");

	return Clss;
}


// SaveCharacterCosmetic_C SaveCharacterCosmetic.Default__SaveCharacterCosmetic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USaveCharacterCosmetic_C* USaveCharacterCosmetic_C::GetDefaultObj()
{
	static class USaveCharacterCosmetic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USaveCharacterCosmetic_C*>(USaveCharacterCosmetic_C::StaticClass()->DefaultObject);

	return Default;
}

}


