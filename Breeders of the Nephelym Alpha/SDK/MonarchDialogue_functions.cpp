#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchDialogue.MonarchDialogue_C
// (None)

class UClass* UMonarchDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchDialogue_C");

	return Clss;
}


// MonarchDialogue_C MonarchDialogue.Default__MonarchDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchDialogue_C* UMonarchDialogue_C::GetDefaultObj()
{
	static class UMonarchDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchDialogue_C*>(UMonarchDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


