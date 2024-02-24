#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernDialogue.FernDialogue_C
// (None)

class UClass* UFernDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernDialogue_C");

	return Clss;
}


// FernDialogue_C FernDialogue.Default__FernDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernDialogue_C* UFernDialogue_C::GetDefaultObj()
{
	static class UFernDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernDialogue_C*>(UFernDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


