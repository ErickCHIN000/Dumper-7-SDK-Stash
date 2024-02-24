#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RoasterSpawner.RoasterSpawner_C
// (Actor)

class UClass* ARoasterSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RoasterSpawner_C");

	return Clss;
}


// RoasterSpawner_C RoasterSpawner.Default__RoasterSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARoasterSpawner_C* ARoasterSpawner_C::GetDefaultObj()
{
	static class ARoasterSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARoasterSpawner_C*>(ARoasterSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


