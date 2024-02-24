#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyTN_R.DoggyTN_R_C
// (None)

class UClass* UDoggyTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyTN_R_C");

	return Clss;
}


// DoggyTN_R_C DoggyTN_R.Default__DoggyTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyTN_R_C* UDoggyTN_R_C::GetDefaultObj()
{
	static class UDoggyTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyTN_R_C*>(UDoggyTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


