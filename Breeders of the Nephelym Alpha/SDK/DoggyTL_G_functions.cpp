#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyTL_G.DoggyTL_G_C
// (None)

class UClass* UDoggyTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyTL_G_C");

	return Clss;
}


// DoggyTL_G_C DoggyTL_G.Default__DoggyTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyTL_G_C* UDoggyTL_G_C::GetDefaultObj()
{
	static class UDoggyTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyTL_G_C*>(UDoggyTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


