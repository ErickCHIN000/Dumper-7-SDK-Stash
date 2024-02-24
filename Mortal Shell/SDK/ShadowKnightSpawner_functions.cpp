#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShadowKnightSpawner.ShadowKnightSpawner_C
// (Actor)

class UClass* AShadowKnightSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShadowKnightSpawner_C");

	return Clss;
}


// ShadowKnightSpawner_C ShadowKnightSpawner.Default__ShadowKnightSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShadowKnightSpawner_C* AShadowKnightSpawner_C::GetDefaultObj()
{
	static class AShadowKnightSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShadowKnightSpawner_C*>(AShadowKnightSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


