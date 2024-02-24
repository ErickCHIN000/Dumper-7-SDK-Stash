#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaDialogue.NeelaDialogue_C
// (None)

class UClass* UNeelaDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaDialogue_C");

	return Clss;
}


// NeelaDialogue_C NeelaDialogue.Default__NeelaDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaDialogue_C* UNeelaDialogue_C::GetDefaultObj()
{
	static class UNeelaDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaDialogue_C*>(UNeelaDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


