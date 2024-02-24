#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneDialogue.FaleneDialogue_C
// (None)

class UClass* UFaleneDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneDialogue_C");

	return Clss;
}


// FaleneDialogue_C FaleneDialogue.Default__FaleneDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneDialogue_C* UFaleneDialogue_C::GetDefaultObj()
{
	static class UFaleneDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneDialogue_C*>(UFaleneDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


