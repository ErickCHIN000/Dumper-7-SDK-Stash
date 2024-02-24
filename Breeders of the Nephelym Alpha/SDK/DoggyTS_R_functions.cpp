#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyTS_R.DoggyTS_R_C
// (None)

class UClass* UDoggyTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyTS_R_C");

	return Clss;
}


// DoggyTS_R_C DoggyTS_R.Default__DoggyTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyTS_R_C* UDoggyTS_R_C::GetDefaultObj()
{
	static class UDoggyTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyTS_R_C*>(UDoggyTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


