#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiDialogue.ParvatiDialogue_C
// (None)

class UClass* UParvatiDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiDialogue_C");

	return Clss;
}


// ParvatiDialogue_C ParvatiDialogue.Default__ParvatiDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiDialogue_C* UParvatiDialogue_C::GetDefaultObj()
{
	static class UParvatiDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiDialogue_C*>(UParvatiDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


