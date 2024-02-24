#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyMN_R.DoggyMN_R_C
// (None)

class UClass* UDoggyMN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyMN_R_C");

	return Clss;
}


// DoggyMN_R_C DoggyMN_R.Default__DoggyMN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyMN_R_C* UDoggyMN_R_C::GetDefaultObj()
{
	static class UDoggyMN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyMN_R_C*>(UDoggyMN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


