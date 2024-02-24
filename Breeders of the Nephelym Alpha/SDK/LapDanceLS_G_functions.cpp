#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceLS_G.LapDanceLS_G_C
// (None)

class UClass* ULapDanceLS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceLS_G_C");

	return Clss;
}


// LapDanceLS_G_C LapDanceLS_G.Default__LapDanceLS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceLS_G_C* ULapDanceLS_G_C::GetDefaultObj()
{
	static class ULapDanceLS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceLS_G_C*>(ULapDanceLS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


