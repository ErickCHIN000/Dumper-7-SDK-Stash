#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BunnyToyT.BunnyToyT_C
// (None)

class UClass* UBunnyToyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BunnyToyT_C");

	return Clss;
}


// BunnyToyT_C BunnyToyT.Default__BunnyToyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBunnyToyT_C* UBunnyToyT_C::GetDefaultObj()
{
	static class UBunnyToyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBunnyToyT_C*>(UBunnyToyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


