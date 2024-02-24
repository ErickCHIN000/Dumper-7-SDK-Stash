#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceNN_G.LapDanceNN_G_C
// (None)

class UClass* ULapDanceNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceNN_G_C");

	return Clss;
}


// LapDanceNN_G_C LapDanceNN_G.Default__LapDanceNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceNN_G_C* ULapDanceNN_G_C::GetDefaultObj()
{
	static class ULapDanceNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceNN_G_C*>(ULapDanceNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


