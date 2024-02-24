#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyTS_G.DoggyTS_G_C
// (None)

class UClass* UDoggyTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyTS_G_C");

	return Clss;
}


// DoggyTS_G_C DoggyTS_G.Default__DoggyTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyTS_G_C* UDoggyTS_G_C::GetDefaultObj()
{
	static class UDoggyTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyTS_G_C*>(UDoggyTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


