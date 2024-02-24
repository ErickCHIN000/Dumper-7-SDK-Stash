#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernDialogueP3.FernDialogueP3_C
// (None)

class UClass* UFernDialogueP3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernDialogueP3_C");

	return Clss;
}


// FernDialogueP3_C FernDialogueP3.Default__FernDialogueP3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernDialogueP3_C* UFernDialogueP3_C::GetDefaultObj()
{
	static class UFernDialogueP3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernDialogueP3_C*>(UFernDialogueP3_C::StaticClass()->DefaultObject);

	return Default;
}

}


