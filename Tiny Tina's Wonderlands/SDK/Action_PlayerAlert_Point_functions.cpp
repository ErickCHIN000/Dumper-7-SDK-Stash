#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PlayerAlert_Point.Action_PlayerAlert_Point_C
// (None)

class UClass* UAction_PlayerAlert_Point_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PlayerAlert_Point_C");

	return Clss;
}


// Action_PlayerAlert_Point_C Action_PlayerAlert_Point.Default__Action_PlayerAlert_Point_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PlayerAlert_Point_C* UAction_PlayerAlert_Point_C::GetDefaultObj()
{
	static class UAction_PlayerAlert_Point_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PlayerAlert_Point_C*>(UAction_PlayerAlert_Point_C::StaticClass()->DefaultObject);

	return Default;
}

}


