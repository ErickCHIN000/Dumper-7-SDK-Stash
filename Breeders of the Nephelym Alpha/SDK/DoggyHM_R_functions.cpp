#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyHM_R.DoggyHM_R_C
// (None)

class UClass* UDoggyHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyHM_R_C");

	return Clss;
}


// DoggyHM_R_C DoggyHM_R.Default__DoggyHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyHM_R_C* UDoggyHM_R_C::GetDefaultObj()
{
	static class UDoggyHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyHM_R_C*>(UDoggyHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


