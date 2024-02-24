#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BunkerDocs_Chapter1.BunkerDocs_Chapter1_C
// (Actor)

class UClass* ABunkerDocs_Chapter1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BunkerDocs_Chapter1_C");

	return Clss;
}


// BunkerDocs_Chapter1_C BunkerDocs_Chapter1.Default__BunkerDocs_Chapter1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABunkerDocs_Chapter1_C* ABunkerDocs_Chapter1_C::GetDefaultObj()
{
	static class ABunkerDocs_Chapter1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABunkerDocs_Chapter1_C*>(ABunkerDocs_Chapter1_C::StaticClass()->DefaultObject);

	return Default;
}

}


