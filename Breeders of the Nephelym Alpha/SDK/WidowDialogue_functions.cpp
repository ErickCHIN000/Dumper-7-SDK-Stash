#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowDialogue.WidowDialogue_C
// (None)

class UClass* UWidowDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowDialogue_C");

	return Clss;
}


// WidowDialogue_C WidowDialogue.Default__WidowDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowDialogue_C* UWidowDialogue_C::GetDefaultObj()
{
	static class UWidowDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowDialogue_C*>(UWidowDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


