#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceST_G.LapDanceST_G_C
// (None)

class UClass* ULapDanceST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceST_G_C");

	return Clss;
}


// LapDanceST_G_C LapDanceST_G.Default__LapDanceST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceST_G_C* ULapDanceST_G_C::GetDefaultObj()
{
	static class ULapDanceST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceST_G_C*>(ULapDanceST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


