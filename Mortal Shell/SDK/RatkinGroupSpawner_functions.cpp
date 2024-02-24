#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RatkinGroupSpawner.RatkinGroupSpawner_C
// (Actor)

class UClass* ARatkinGroupSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RatkinGroupSpawner_C");

	return Clss;
}


// RatkinGroupSpawner_C RatkinGroupSpawner.Default__RatkinGroupSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARatkinGroupSpawner_C* ARatkinGroupSpawner_C::GetDefaultObj()
{
	static class ARatkinGroupSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARatkinGroupSpawner_C*>(ARatkinGroupSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


