#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeDialogue.AmberMaeDialogue_C
// (None)

class UClass* UAmberMaeDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeDialogue_C");

	return Clss;
}


// AmberMaeDialogue_C AmberMaeDialogue.Default__AmberMaeDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeDialogue_C* UAmberMaeDialogue_C::GetDefaultObj()
{
	static class UAmberMaeDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeDialogue_C*>(UAmberMaeDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


