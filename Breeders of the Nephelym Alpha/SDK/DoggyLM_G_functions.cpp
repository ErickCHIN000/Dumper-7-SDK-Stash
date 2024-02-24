#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyLM_G.DoggyLM_G_C
// (None)

class UClass* UDoggyLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyLM_G_C");

	return Clss;
}


// DoggyLM_G_C DoggyLM_G.Default__DoggyLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyLM_G_C* UDoggyLM_G_C::GetDefaultObj()
{
	static class UDoggyLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyLM_G_C*>(UDoggyLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


