#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyMT_G.DoggyMT_G_C
// (None)

class UClass* UDoggyMT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyMT_G_C");

	return Clss;
}


// DoggyMT_G_C DoggyMT_G.Default__DoggyMT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyMT_G_C* UDoggyMT_G_C::GetDefaultObj()
{
	static class UDoggyMT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyMT_G_C*>(UDoggyMT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


