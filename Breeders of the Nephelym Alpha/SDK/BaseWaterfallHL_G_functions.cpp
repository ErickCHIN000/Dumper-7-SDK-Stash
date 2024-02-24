#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallHL_G.BaseWaterfallHL_G_C
// (None)

class UClass* UBaseWaterfallHL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallHL_G_C");

	return Clss;
}


// BaseWaterfallHL_G_C BaseWaterfallHL_G.Default__BaseWaterfallHL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallHL_G_C* UBaseWaterfallHL_G_C::GetDefaultObj()
{
	static class UBaseWaterfallHL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallHL_G_C*>(UBaseWaterfallHL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


