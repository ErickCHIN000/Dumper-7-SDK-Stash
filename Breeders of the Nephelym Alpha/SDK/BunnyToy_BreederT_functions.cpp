#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BunnyToy_BreederT.BunnyToy_BreederT_C
// (None)

class UClass* UBunnyToy_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BunnyToy_BreederT_C");

	return Clss;
}


// BunnyToy_BreederT_C BunnyToy_BreederT.Default__BunnyToy_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBunnyToy_BreederT_C* UBunnyToy_BreederT_C::GetDefaultObj()
{
	static class UBunnyToy_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBunnyToy_BreederT_C*>(UBunnyToy_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


