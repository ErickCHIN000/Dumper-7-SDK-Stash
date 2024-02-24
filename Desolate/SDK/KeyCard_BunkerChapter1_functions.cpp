#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KeyCard_BunkerChapter1.KeyCard_BunkerChapter1_C
// (Actor)

class UClass* AKeyCard_BunkerChapter1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyCard_BunkerChapter1_C");

	return Clss;
}


// KeyCard_BunkerChapter1_C KeyCard_BunkerChapter1.Default__KeyCard_BunkerChapter1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKeyCard_BunkerChapter1_C* AKeyCard_BunkerChapter1_C::GetDefaultObj()
{
	static class AKeyCard_BunkerChapter1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKeyCard_BunkerChapter1_C*>(AKeyCard_BunkerChapter1_C::StaticClass()->DefaultObject);

	return Default;
}

}


