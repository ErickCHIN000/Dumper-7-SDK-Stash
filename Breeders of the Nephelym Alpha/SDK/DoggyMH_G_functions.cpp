#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyMH_G.DoggyMH_G_C
// (None)

class UClass* UDoggyMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyMH_G_C");

	return Clss;
}


// DoggyMH_G_C DoggyMH_G.Default__DoggyMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyMH_G_C* UDoggyMH_G_C::GetDefaultObj()
{
	static class UDoggyMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyMH_G_C*>(UDoggyMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


