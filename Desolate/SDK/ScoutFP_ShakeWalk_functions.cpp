#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScoutFP_ShakeWalk.ScoutFP_ShakeWalk_C
// (None)

class UClass* UScoutFP_ShakeWalk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScoutFP_ShakeWalk_C");

	return Clss;
}


// ScoutFP_ShakeWalk_C ScoutFP_ShakeWalk.Default__ScoutFP_ShakeWalk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScoutFP_ShakeWalk_C* UScoutFP_ShakeWalk_C::GetDefaultObj()
{
	static class UScoutFP_ShakeWalk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoutFP_ShakeWalk_C*>(UScoutFP_ShakeWalk_C::StaticClass()->DefaultObject);

	return Default;
}

}


