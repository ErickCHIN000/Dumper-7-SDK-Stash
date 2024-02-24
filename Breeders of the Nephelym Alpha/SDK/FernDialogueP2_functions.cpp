#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernDialogueP2.FernDialogueP2_C
// (None)

class UClass* UFernDialogueP2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernDialogueP2_C");

	return Clss;
}


// FernDialogueP2_C FernDialogueP2.Default__FernDialogueP2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernDialogueP2_C* UFernDialogueP2_C::GetDefaultObj()
{
	static class UFernDialogueP2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernDialogueP2_C*>(UFernDialogueP2_C::StaticClass()->DefaultObject);

	return Default;
}

}


