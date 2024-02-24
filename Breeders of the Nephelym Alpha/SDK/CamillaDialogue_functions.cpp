#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaDialogue.CamillaDialogue_C
// (None)

class UClass* UCamillaDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaDialogue_C");

	return Clss;
}


// CamillaDialogue_C CamillaDialogue.Default__CamillaDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaDialogue_C* UCamillaDialogue_C::GetDefaultObj()
{
	static class UCamillaDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaDialogue_C*>(UCamillaDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


