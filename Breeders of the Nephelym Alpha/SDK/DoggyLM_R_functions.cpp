#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyLM_R.DoggyLM_R_C
// (None)

class UClass* UDoggyLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyLM_R_C");

	return Clss;
}


// DoggyLM_R_C DoggyLM_R.Default__DoggyLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyLM_R_C* UDoggyLM_R_C::GetDefaultObj()
{
	static class UDoggyLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyLM_R_C*>(UDoggyLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


