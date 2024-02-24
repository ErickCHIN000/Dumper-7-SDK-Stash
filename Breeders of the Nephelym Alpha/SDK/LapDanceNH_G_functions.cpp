#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceNH_G.LapDanceNH_G_C
// (None)

class UClass* ULapDanceNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceNH_G_C");

	return Clss;
}


// LapDanceNH_G_C LapDanceNH_G.Default__LapDanceNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceNH_G_C* ULapDanceNH_G_C::GetDefaultObj()
{
	static class ULapDanceNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceNH_G_C*>(ULapDanceNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


