#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyMT_R.DoggyMT_R_C
// (None)

class UClass* UDoggyMT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyMT_R_C");

	return Clss;
}


// DoggyMT_R_C DoggyMT_R.Default__DoggyMT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyMT_R_C* UDoggyMT_R_C::GetDefaultObj()
{
	static class UDoggyMT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyMT_R_C*>(UDoggyMT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


