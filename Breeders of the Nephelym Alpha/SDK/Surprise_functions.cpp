#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Surprise.Surprise_C
// (None)

class UClass* USurprise_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Surprise_C");

	return Clss;
}


// Surprise_C Surprise.Default__Surprise_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USurprise_C* USurprise_C::GetDefaultObj()
{
	static class USurprise_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USurprise_C*>(USurprise_C::StaticClass()->DefaultObject);

	return Default;
}

}


