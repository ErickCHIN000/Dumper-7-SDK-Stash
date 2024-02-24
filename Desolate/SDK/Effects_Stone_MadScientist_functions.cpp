#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Stone_MadScientist.Effects_Stone_MadScientist_C
// (Actor)

class UClass* AEffects_Stone_MadScientist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Stone_MadScientist_C");

	return Clss;
}


// Effects_Stone_MadScientist_C Effects_Stone_MadScientist.Default__Effects_Stone_MadScientist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Stone_MadScientist_C* AEffects_Stone_MadScientist_C::GetDefaultObj()
{
	static class AEffects_Stone_MadScientist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Stone_MadScientist_C*>(AEffects_Stone_MadScientist_C::StaticClass()->DefaultObject);

	return Default;
}

}


