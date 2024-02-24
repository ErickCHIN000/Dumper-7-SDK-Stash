#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyNN_R.DoggyNN_R_C
// (None)

class UClass* UDoggyNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyNN_R_C");

	return Clss;
}


// DoggyNN_R_C DoggyNN_R.Default__DoggyNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyNN_R_C* UDoggyNN_R_C::GetDefaultObj()
{
	static class UDoggyNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyNN_R_C*>(UDoggyNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


