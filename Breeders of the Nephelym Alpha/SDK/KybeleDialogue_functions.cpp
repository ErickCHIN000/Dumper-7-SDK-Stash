#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleDialogue.KybeleDialogue_C
// (None)

class UClass* UKybeleDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleDialogue_C");

	return Clss;
}


// KybeleDialogue_C KybeleDialogue.Default__KybeleDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleDialogue_C* UKybeleDialogue_C::GetDefaultObj()
{
	static class UKybeleDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleDialogue_C*>(UKybeleDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


