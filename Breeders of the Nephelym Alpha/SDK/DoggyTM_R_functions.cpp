#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyTM_R.DoggyTM_R_C
// (None)

class UClass* UDoggyTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyTM_R_C");

	return Clss;
}


// DoggyTM_R_C DoggyTM_R.Default__DoggyTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyTM_R_C* UDoggyTM_R_C::GetDefaultObj()
{
	static class UDoggyTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyTM_R_C*>(UDoggyTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


