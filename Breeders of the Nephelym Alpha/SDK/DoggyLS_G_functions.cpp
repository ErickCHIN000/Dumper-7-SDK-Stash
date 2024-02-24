#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyLS_G.DoggyLS_G_C
// (None)

class UClass* UDoggyLS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyLS_G_C");

	return Clss;
}


// DoggyLS_G_C DoggyLS_G.Default__DoggyLS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyLS_G_C* UDoggyLS_G_C::GetDefaultObj()
{
	static class UDoggyLS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyLS_G_C*>(UDoggyLS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


