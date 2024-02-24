#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyTH_R.DoggyTH_R_C
// (None)

class UClass* UDoggyTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyTH_R_C");

	return Clss;
}


// DoggyTH_R_C DoggyTH_R.Default__DoggyTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyTH_R_C* UDoggyTH_R_C::GetDefaultObj()
{
	static class UDoggyTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyTH_R_C*>(UDoggyTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


