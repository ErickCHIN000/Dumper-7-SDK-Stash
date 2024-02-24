#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyLN_G.DoggyLN_G_C
// (None)

class UClass* UDoggyLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyLN_G_C");

	return Clss;
}


// DoggyLN_G_C DoggyLN_G.Default__DoggyLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyLN_G_C* UDoggyLN_G_C::GetDefaultObj()
{
	static class UDoggyLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyLN_G_C*>(UDoggyLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


