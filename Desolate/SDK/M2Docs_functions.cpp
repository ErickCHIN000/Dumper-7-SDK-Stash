#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass M2Docs.M2Docs_C
// (Actor)

class UClass* AM2Docs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M2Docs_C");

	return Clss;
}


// M2Docs_C M2Docs.Default__M2Docs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AM2Docs_C* AM2Docs_C::GetDefaultObj()
{
	static class AM2Docs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AM2Docs_C*>(AM2Docs_C::StaticClass()->DefaultObject);

	return Default;
}

}


