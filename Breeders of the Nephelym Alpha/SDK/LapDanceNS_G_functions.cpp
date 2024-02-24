#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceNS_G.LapDanceNS_G_C
// (None)

class UClass* ULapDanceNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceNS_G_C");

	return Clss;
}


// LapDanceNS_G_C LapDanceNS_G.Default__LapDanceNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceNS_G_C* ULapDanceNS_G_C::GetDefaultObj()
{
	static class ULapDanceNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceNS_G_C*>(ULapDanceNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


