#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SoyCereal.SoyCereal_C
// (Actor)

class UClass* ASoyCereal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoyCereal_C");

	return Clss;
}


// SoyCereal_C SoyCereal.Default__SoyCereal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASoyCereal_C* ASoyCereal_C::GetDefaultObj()
{
	static class ASoyCereal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASoyCereal_C*>(ASoyCereal_C::StaticClass()->DefaultObject);

	return Default;
}

}


