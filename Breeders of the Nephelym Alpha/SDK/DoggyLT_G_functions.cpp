#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyLT_G.DoggyLT_G_C
// (None)

class UClass* UDoggyLT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyLT_G_C");

	return Clss;
}


// DoggyLT_G_C DoggyLT_G.Default__DoggyLT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyLT_G_C* UDoggyLT_G_C::GetDefaultObj()
{
	static class UDoggyLT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyLT_G_C*>(UDoggyLT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


