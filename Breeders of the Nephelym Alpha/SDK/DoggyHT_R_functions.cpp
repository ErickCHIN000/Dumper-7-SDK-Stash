#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyHT_R.DoggyHT_R_C
// (None)

class UClass* UDoggyHT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyHT_R_C");

	return Clss;
}


// DoggyHT_R_C DoggyHT_R.Default__DoggyHT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyHT_R_C* UDoggyHT_R_C::GetDefaultObj()
{
	static class UDoggyHT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyHT_R_C*>(UDoggyHT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


