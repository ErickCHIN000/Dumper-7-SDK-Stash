#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BunnyToyF.BunnyToyF_C
// (None)

class UClass* UBunnyToyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BunnyToyF_C");

	return Clss;
}


// BunnyToyF_C BunnyToyF.Default__BunnyToyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBunnyToyF_C* UBunnyToyF_C::GetDefaultObj()
{
	static class UBunnyToyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBunnyToyF_C*>(UBunnyToyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


