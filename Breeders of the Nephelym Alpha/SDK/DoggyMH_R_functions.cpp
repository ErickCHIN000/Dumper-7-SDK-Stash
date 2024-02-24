#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyMH_R.DoggyMH_R_C
// (None)

class UClass* UDoggyMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyMH_R_C");

	return Clss;
}


// DoggyMH_R_C DoggyMH_R.Default__DoggyMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyMH_R_C* UDoggyMH_R_C::GetDefaultObj()
{
	static class UDoggyMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyMH_R_C*>(UDoggyMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


