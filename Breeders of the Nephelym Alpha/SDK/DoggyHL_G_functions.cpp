#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyHL_G.DoggyHL_G_C
// (None)

class UClass* UDoggyHL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyHL_G_C");

	return Clss;
}


// DoggyHL_G_C DoggyHL_G.Default__DoggyHL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyHL_G_C* UDoggyHL_G_C::GetDefaultObj()
{
	static class UDoggyHL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyHL_G_C*>(UDoggyHL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


