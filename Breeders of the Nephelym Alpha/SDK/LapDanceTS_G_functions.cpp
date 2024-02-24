#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceTS_G.LapDanceTS_G_C
// (None)

class UClass* ULapDanceTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceTS_G_C");

	return Clss;
}


// LapDanceTS_G_C LapDanceTS_G.Default__LapDanceTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceTS_G_C* ULapDanceTS_G_C::GetDefaultObj()
{
	static class ULapDanceTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceTS_G_C*>(ULapDanceTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


