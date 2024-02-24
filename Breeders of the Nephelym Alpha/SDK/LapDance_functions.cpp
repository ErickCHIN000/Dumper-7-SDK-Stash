#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDance.LapDance_C
// (None)

class UClass* ULapDance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDance_C");

	return Clss;
}


// LapDance_C LapDance.Default__LapDance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDance_C* ULapDance_C::GetDefaultObj()
{
	static class ULapDance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDance_C*>(ULapDance_C::StaticClass()->DefaultObject);

	return Default;
}

}


