#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyHN_R.DoggyHN_R_C
// (None)

class UClass* UDoggyHN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyHN_R_C");

	return Clss;
}


// DoggyHN_R_C DoggyHN_R.Default__DoggyHN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyHN_R_C* UDoggyHN_R_C::GetDefaultObj()
{
	static class UDoggyHN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyHN_R_C*>(UDoggyHN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


