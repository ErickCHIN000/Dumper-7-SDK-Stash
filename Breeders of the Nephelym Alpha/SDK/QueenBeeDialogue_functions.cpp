#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QueenBeeDialogue.QueenBeeDialogue_C
// (None)

class UClass* UQueenBeeDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QueenBeeDialogue_C");

	return Clss;
}


// QueenBeeDialogue_C QueenBeeDialogue.Default__QueenBeeDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQueenBeeDialogue_C* UQueenBeeDialogue_C::GetDefaultObj()
{
	static class UQueenBeeDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQueenBeeDialogue_C*>(UQueenBeeDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


