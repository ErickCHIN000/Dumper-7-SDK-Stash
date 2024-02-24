#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryDialogue.EmissaryDialogue_C
// (None)

class UClass* UEmissaryDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryDialogue_C");

	return Clss;
}


// EmissaryDialogue_C EmissaryDialogue.Default__EmissaryDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryDialogue_C* UEmissaryDialogue_C::GetDefaultObj()
{
	static class UEmissaryDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryDialogue_C*>(UEmissaryDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


