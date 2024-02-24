#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyHS_R.DoggyHS_R_C
// (None)

class UClass* UDoggyHS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyHS_R_C");

	return Clss;
}


// DoggyHS_R_C DoggyHS_R.Default__DoggyHS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyHS_R_C* UDoggyHS_R_C::GetDefaultObj()
{
	static class UDoggyHS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyHS_R_C*>(UDoggyHS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


