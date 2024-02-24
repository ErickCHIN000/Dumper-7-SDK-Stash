#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallTN_G.BaseWaterfallTN_G_C
// (None)

class UClass* UBaseWaterfallTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallTN_G_C");

	return Clss;
}


// BaseWaterfallTN_G_C BaseWaterfallTN_G.Default__BaseWaterfallTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallTN_G_C* UBaseWaterfallTN_G_C::GetDefaultObj()
{
	static class UBaseWaterfallTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallTN_G_C*>(UBaseWaterfallTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


