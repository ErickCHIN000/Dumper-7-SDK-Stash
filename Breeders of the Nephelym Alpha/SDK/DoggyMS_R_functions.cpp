#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyMS_R.DoggyMS_R_C
// (None)

class UClass* UDoggyMS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyMS_R_C");

	return Clss;
}


// DoggyMS_R_C DoggyMS_R.Default__DoggyMS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyMS_R_C* UDoggyMS_R_C::GetDefaultObj()
{
	static class UDoggyMS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyMS_R_C*>(UDoggyMS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


