#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyTL_R.DoggyTL_R_C
// (None)

class UClass* UDoggyTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyTL_R_C");

	return Clss;
}


// DoggyTL_R_C DoggyTL_R.Default__DoggyTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyTL_R_C* UDoggyTL_R_C::GetDefaultObj()
{
	static class UDoggyTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyTL_R_C*>(UDoggyTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


