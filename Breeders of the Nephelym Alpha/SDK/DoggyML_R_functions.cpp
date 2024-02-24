#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyML_R.DoggyML_R_C
// (None)

class UClass* UDoggyML_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyML_R_C");

	return Clss;
}


// DoggyML_R_C DoggyML_R.Default__DoggyML_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyML_R_C* UDoggyML_R_C::GetDefaultObj()
{
	static class UDoggyML_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyML_R_C*>(UDoggyML_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


