#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScoutFP_ShakeRun.ScoutFP_ShakeRun_C
// (None)

class UClass* UScoutFP_ShakeRun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScoutFP_ShakeRun_C");

	return Clss;
}


// ScoutFP_ShakeRun_C ScoutFP_ShakeRun.Default__ScoutFP_ShakeRun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScoutFP_ShakeRun_C* UScoutFP_ShakeRun_C::GetDefaultObj()
{
	static class UScoutFP_ShakeRun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoutFP_ShakeRun_C*>(UScoutFP_ShakeRun_C::StaticClass()->DefaultObject);

	return Default;
}

}


