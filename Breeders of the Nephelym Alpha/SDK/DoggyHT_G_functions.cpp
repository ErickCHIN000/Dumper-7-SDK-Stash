#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyHT_G.DoggyHT_G_C
// (None)

class UClass* UDoggyHT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyHT_G_C");

	return Clss;
}


// DoggyHT_G_C DoggyHT_G.Default__DoggyHT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyHT_G_C* UDoggyHT_G_C::GetDefaultObj()
{
	static class UDoggyHT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyHT_G_C*>(UDoggyHT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


