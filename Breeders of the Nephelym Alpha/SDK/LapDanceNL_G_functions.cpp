#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceNL_G.LapDanceNL_G_C
// (None)

class UClass* ULapDanceNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceNL_G_C");

	return Clss;
}


// LapDanceNL_G_C LapDanceNL_G.Default__LapDanceNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceNL_G_C* ULapDanceNL_G_C::GetDefaultObj()
{
	static class ULapDanceNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceNL_G_C*>(ULapDanceNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}

