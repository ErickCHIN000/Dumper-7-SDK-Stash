#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Waterfall.Waterfall_C
// (None)

class UClass* UWaterfall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Waterfall_C");

	return Clss;
}


// Waterfall_C Waterfall.Default__Waterfall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfall_C* UWaterfall_C::GetDefaultObj()
{
	static class UWaterfall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfall_C*>(UWaterfall_C::StaticClass()->DefaultObject);

	return Default;
}

}


