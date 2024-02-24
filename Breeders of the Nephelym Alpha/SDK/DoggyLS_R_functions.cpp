#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyLS_R.DoggyLS_R_C
// (None)

class UClass* UDoggyLS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyLS_R_C");

	return Clss;
}


// DoggyLS_R_C DoggyLS_R.Default__DoggyLS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyLS_R_C* UDoggyLS_R_C::GetDefaultObj()
{
	static class UDoggyLS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyLS_R_C*>(UDoggyLS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


