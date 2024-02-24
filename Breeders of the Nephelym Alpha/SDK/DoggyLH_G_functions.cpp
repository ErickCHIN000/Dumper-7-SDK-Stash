#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyLH_G.DoggyLH_G_C
// (None)

class UClass* UDoggyLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyLH_G_C");

	return Clss;
}


// DoggyLH_G_C DoggyLH_G.Default__DoggyLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyLH_G_C* UDoggyLH_G_C::GetDefaultObj()
{
	static class UDoggyLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyLH_G_C*>(UDoggyLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


