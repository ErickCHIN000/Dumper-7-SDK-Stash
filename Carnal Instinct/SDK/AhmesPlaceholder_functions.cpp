#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AhmesPlaceholder.AhmesPlaceholder_C
// (Actor)

class UClass* AAhmesPlaceholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AhmesPlaceholder_C");

	return Clss;
}


// AhmesPlaceholder_C AhmesPlaceholder.Default__AhmesPlaceholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAhmesPlaceholder_C* AAhmesPlaceholder_C::GetDefaultObj()
{
	static class AAhmesPlaceholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAhmesPlaceholder_C*>(AAhmesPlaceholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


