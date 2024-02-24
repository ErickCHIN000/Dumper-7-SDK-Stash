#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OgninDocs.OgninDocs_C
// (Actor)

class UClass* AOgninDocs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OgninDocs_C");

	return Clss;
}


// OgninDocs_C OgninDocs.Default__OgninDocs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOgninDocs_C* AOgninDocs_C::GetDefaultObj()
{
	static class AOgninDocs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOgninDocs_C*>(AOgninDocs_C::StaticClass()->DefaultObject);

	return Default;
}

}


