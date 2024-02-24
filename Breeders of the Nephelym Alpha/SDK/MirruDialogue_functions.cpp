#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDialogue.MirruDialogue_C
// (None)

class UClass* UMirruDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDialogue_C");

	return Clss;
}


// MirruDialogue_C MirruDialogue.Default__MirruDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDialogue_C* UMirruDialogue_C::GetDefaultObj()
{
	static class UMirruDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDialogue_C*>(UMirruDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


