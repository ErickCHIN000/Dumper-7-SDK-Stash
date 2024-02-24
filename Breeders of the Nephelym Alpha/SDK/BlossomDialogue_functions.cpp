#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlossomDialogue.BlossomDialogue_C
// (None)

class UClass* UBlossomDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlossomDialogue_C");

	return Clss;
}


// BlossomDialogue_C BlossomDialogue.Default__BlossomDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlossomDialogue_C* UBlossomDialogue_C::GetDefaultObj()
{
	static class UBlossomDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlossomDialogue_C*>(UBlossomDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


