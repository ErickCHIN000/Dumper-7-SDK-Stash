#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyTH_G.DoggyTH_G_C
// (None)

class UClass* UDoggyTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyTH_G_C");

	return Clss;
}


// DoggyTH_G_C DoggyTH_G.Default__DoggyTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyTH_G_C* UDoggyTH_G_C::GetDefaultObj()
{
	static class UDoggyTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyTH_G_C*>(UDoggyTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


