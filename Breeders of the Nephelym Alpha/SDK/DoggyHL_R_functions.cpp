#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyHL_R.DoggyHL_R_C
// (None)

class UClass* UDoggyHL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyHL_R_C");

	return Clss;
}


// DoggyHL_R_C DoggyHL_R.Default__DoggyHL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyHL_R_C* UDoggyHL_R_C::GetDefaultObj()
{
	static class UDoggyHL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyHL_R_C*>(UDoggyHL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


