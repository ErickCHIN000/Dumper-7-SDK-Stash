#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AlisaDocs.AlisaDocs_C
// (Actor)

class UClass* AAlisaDocs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlisaDocs_C");

	return Clss;
}


// AlisaDocs_C AlisaDocs.Default__AlisaDocs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAlisaDocs_C* AAlisaDocs_C::GetDefaultObj()
{
	static class AAlisaDocs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAlisaDocs_C*>(AAlisaDocs_C::StaticClass()->DefaultObject);

	return Default;
}

}


