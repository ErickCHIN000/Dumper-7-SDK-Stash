#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiDialogue.FesssiDialogue_C
// (None)

class UClass* UFesssiDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiDialogue_C");

	return Clss;
}


// FesssiDialogue_C FesssiDialogue.Default__FesssiDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiDialogue_C* UFesssiDialogue_C::GetDefaultObj()
{
	static class UFesssiDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiDialogue_C*>(UFesssiDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


