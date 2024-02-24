#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyLT_R.DoggyLT_R_C
// (None)

class UClass* UDoggyLT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyLT_R_C");

	return Clss;
}


// DoggyLT_R_C DoggyLT_R.Default__DoggyLT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyLT_R_C* UDoggyLT_R_C::GetDefaultObj()
{
	static class UDoggyLT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyLT_R_C*>(UDoggyLT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


