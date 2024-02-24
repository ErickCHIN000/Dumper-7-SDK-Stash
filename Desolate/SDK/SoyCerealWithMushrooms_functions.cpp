#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SoyCerealWithMushrooms.SoyCerealWithMushrooms_C
// (Actor)

class UClass* ASoyCerealWithMushrooms_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoyCerealWithMushrooms_C");

	return Clss;
}


// SoyCerealWithMushrooms_C SoyCerealWithMushrooms.Default__SoyCerealWithMushrooms_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASoyCerealWithMushrooms_C* ASoyCerealWithMushrooms_C::GetDefaultObj()
{
	static class ASoyCerealWithMushrooms_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASoyCerealWithMushrooms_C*>(ASoyCerealWithMushrooms_C::StaticClass()->DefaultObject);

	return Default;
}

}


