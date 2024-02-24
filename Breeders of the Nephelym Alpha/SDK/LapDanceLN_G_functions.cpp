#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceLN_G.LapDanceLN_G_C
// (None)

class UClass* ULapDanceLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceLN_G_C");

	return Clss;
}


// LapDanceLN_G_C LapDanceLN_G.Default__LapDanceLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceLN_G_C* ULapDanceLN_G_C::GetDefaultObj()
{
	static class ULapDanceLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceLN_G_C*>(ULapDanceLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


