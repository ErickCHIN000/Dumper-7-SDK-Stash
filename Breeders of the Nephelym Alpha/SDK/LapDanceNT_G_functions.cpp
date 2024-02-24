#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceNT_G.LapDanceNT_G_C
// (None)

class UClass* ULapDanceNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceNT_G_C");

	return Clss;
}


// LapDanceNT_G_C LapDanceNT_G.Default__LapDanceNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceNT_G_C* ULapDanceNT_G_C::GetDefaultObj()
{
	static class ULapDanceNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceNT_G_C*>(ULapDanceNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


