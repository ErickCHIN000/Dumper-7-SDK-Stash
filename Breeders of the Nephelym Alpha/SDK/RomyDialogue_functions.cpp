#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyDialogue.RomyDialogue_C
// (None)

class UClass* URomyDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyDialogue_C");

	return Clss;
}


// RomyDialogue_C RomyDialogue.Default__RomyDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyDialogue_C* URomyDialogue_C::GetDefaultObj()
{
	static class URomyDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyDialogue_C*>(URomyDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


