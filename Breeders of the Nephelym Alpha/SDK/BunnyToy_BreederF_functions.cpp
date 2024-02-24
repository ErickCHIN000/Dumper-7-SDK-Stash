#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BunnyToy_BreederF.BunnyToy_BreederF_C
// (None)

class UClass* UBunnyToy_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BunnyToy_BreederF_C");

	return Clss;
}


// BunnyToy_BreederF_C BunnyToy_BreederF.Default__BunnyToy_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBunnyToy_BreederF_C* UBunnyToy_BreederF_C::GetDefaultObj()
{
	static class UBunnyToy_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBunnyToy_BreederF_C*>(UBunnyToy_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


