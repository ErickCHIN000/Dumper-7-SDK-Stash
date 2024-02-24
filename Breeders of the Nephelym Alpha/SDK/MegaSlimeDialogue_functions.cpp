#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeDialogue.MegaSlimeDialogue_C
// (None)

class UClass* UMegaSlimeDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeDialogue_C");

	return Clss;
}


// MegaSlimeDialogue_C MegaSlimeDialogue.Default__MegaSlimeDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeDialogue_C* UMegaSlimeDialogue_C::GetDefaultObj()
{
	static class UMegaSlimeDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeDialogue_C*>(UMegaSlimeDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


