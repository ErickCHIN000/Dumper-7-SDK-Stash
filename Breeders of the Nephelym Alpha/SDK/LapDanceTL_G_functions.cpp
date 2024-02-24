#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceTL_G.LapDanceTL_G_C
// (None)

class UClass* ULapDanceTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceTL_G_C");

	return Clss;
}


// LapDanceTL_G_C LapDanceTL_G.Default__LapDanceTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceTL_G_C* ULapDanceTL_G_C::GetDefaultObj()
{
	static class ULapDanceTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceTL_G_C*>(ULapDanceTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


