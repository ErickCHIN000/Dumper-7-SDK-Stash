#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyLH_R.DoggyLH_R_C
// (None)

class UClass* UDoggyLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyLH_R_C");

	return Clss;
}


// DoggyLH_R_C DoggyLH_R.Default__DoggyLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyLH_R_C* UDoggyLH_R_C::GetDefaultObj()
{
	static class UDoggyLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyLH_R_C*>(UDoggyLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


