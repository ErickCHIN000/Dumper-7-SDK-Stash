#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyNS_G.DoggyNS_G_C
// (None)

class UClass* UDoggyNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyNS_G_C");

	return Clss;
}


// DoggyNS_G_C DoggyNS_G.Default__DoggyNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyNS_G_C* UDoggyNS_G_C::GetDefaultObj()
{
	static class UDoggyNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyNS_G_C*>(UDoggyNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


