#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PetraDialogue.PetraDialogue_C
// (None)

class UClass* UPetraDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetraDialogue_C");

	return Clss;
}


// PetraDialogue_C PetraDialogue.Default__PetraDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPetraDialogue_C* UPetraDialogue_C::GetDefaultObj()
{
	static class UPetraDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPetraDialogue_C*>(UPetraDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


