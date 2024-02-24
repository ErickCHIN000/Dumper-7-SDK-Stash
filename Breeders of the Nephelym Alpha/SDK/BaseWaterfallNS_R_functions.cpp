#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallNS_R.BaseWaterfallNS_R_C
// (None)

class UClass* UBaseWaterfallNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallNS_R_C");

	return Clss;
}


// BaseWaterfallNS_R_C BaseWaterfallNS_R.Default__BaseWaterfallNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallNS_R_C* UBaseWaterfallNS_R_C::GetDefaultObj()
{
	static class UBaseWaterfallNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallNS_R_C*>(UBaseWaterfallNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


