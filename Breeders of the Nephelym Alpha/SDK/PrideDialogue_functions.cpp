#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDialogue.PrideDialogue_C
// (None)

class UClass* UPrideDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDialogue_C");

	return Clss;
}


// PrideDialogue_C PrideDialogue.Default__PrideDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDialogue_C* UPrideDialogue_C::GetDefaultObj()
{
	static class UPrideDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDialogue_C*>(UPrideDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


