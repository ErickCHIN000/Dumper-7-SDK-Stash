#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyLN_R.DoggyLN_R_C
// (None)

class UClass* UDoggyLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyLN_R_C");

	return Clss;
}


// DoggyLN_R_C DoggyLN_R.Default__DoggyLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyLN_R_C* UDoggyLN_R_C::GetDefaultObj()
{
	static class UDoggyLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyLN_R_C*>(UDoggyLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


