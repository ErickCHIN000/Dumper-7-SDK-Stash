#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyNT_G.DoggyNT_G_C
// (None)

class UClass* UDoggyNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyNT_G_C");

	return Clss;
}


// DoggyNT_G_C DoggyNT_G.Default__DoggyNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyNT_G_C* UDoggyNT_G_C::GetDefaultObj()
{
	static class UDoggyNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyNT_G_C*>(UDoggyNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


