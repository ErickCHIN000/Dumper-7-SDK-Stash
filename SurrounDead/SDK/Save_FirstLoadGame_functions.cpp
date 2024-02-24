#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Save_FirstLoadGame.Save_FirstLoadGame_C
// (None)

class UClass* USave_FirstLoadGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Save_FirstLoadGame_C");

	return Clss;
}


// Save_FirstLoadGame_C Save_FirstLoadGame.Default__Save_FirstLoadGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USave_FirstLoadGame_C* USave_FirstLoadGame_C::GetDefaultObj()
{
	static class USave_FirstLoadGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USave_FirstLoadGame_C*>(USave_FirstLoadGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


