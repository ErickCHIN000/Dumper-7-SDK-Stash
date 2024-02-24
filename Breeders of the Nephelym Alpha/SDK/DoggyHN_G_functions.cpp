#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyHN_G.DoggyHN_G_C
// (None)

class UClass* UDoggyHN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyHN_G_C");

	return Clss;
}


// DoggyHN_G_C DoggyHN_G.Default__DoggyHN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyHN_G_C* UDoggyHN_G_C::GetDefaultObj()
{
	static class UDoggyHN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyHN_G_C*>(UDoggyHN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


