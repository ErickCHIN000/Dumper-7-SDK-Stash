#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_InstantAmbush_FireArrow.Action_InstantAmbush_FireArrow_C
// (None)

class UClass* UAction_InstantAmbush_FireArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_InstantAmbush_FireArrow_C");

	return Clss;
}


// Action_InstantAmbush_FireArrow_C Action_InstantAmbush_FireArrow.Default__Action_InstantAmbush_FireArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_InstantAmbush_FireArrow_C* UAction_InstantAmbush_FireArrow_C::GetDefaultObj()
{
	static class UAction_InstantAmbush_FireArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_InstantAmbush_FireArrow_C*>(UAction_InstantAmbush_FireArrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


