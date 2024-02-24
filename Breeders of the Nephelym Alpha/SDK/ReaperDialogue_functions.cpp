#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReaperDialogue.ReaperDialogue_C
// (None)

class UClass* UReaperDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReaperDialogue_C");

	return Clss;
}


// ReaperDialogue_C ReaperDialogue.Default__ReaperDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReaperDialogue_C* UReaperDialogue_C::GetDefaultObj()
{
	static class UReaperDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReaperDialogue_C*>(UReaperDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


