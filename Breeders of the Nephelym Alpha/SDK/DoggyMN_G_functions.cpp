#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyMN_G.DoggyMN_G_C
// (None)

class UClass* UDoggyMN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyMN_G_C");

	return Clss;
}


// DoggyMN_G_C DoggyMN_G.Default__DoggyMN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyMN_G_C* UDoggyMN_G_C::GetDefaultObj()
{
	static class UDoggyMN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyMN_G_C*>(UDoggyMN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


