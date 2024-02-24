#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UndergroundDocs.UndergroundDocs_C
// (Actor)

class UClass* AUndergroundDocs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UndergroundDocs_C");

	return Clss;
}


// UndergroundDocs_C UndergroundDocs.Default__UndergroundDocs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUndergroundDocs_C* AUndergroundDocs_C::GetDefaultObj()
{
	static class AUndergroundDocs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUndergroundDocs_C*>(AUndergroundDocs_C::StaticClass()->DefaultObject);

	return Default;
}

}


