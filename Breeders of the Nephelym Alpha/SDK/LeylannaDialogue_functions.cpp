#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDialogue.LeylannaDialogue_C
// (None)

class UClass* ULeylannaDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDialogue_C");

	return Clss;
}


// LeylannaDialogue_C LeylannaDialogue.Default__LeylannaDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDialogue_C* ULeylannaDialogue_C::GetDefaultObj()
{
	static class ULeylannaDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDialogue_C*>(ULeylannaDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


