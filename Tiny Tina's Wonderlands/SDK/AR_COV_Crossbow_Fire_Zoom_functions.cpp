#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AR_COV_Crossbow_Fire_Zoom.AR_COV_Crossbow_Fire_Zoom_C
// (None)

class UClass* UAR_COV_Crossbow_Fire_Zoom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AR_COV_Crossbow_Fire_Zoom_C");

	return Clss;
}


// AR_COV_Crossbow_Fire_Zoom_C AR_COV_Crossbow_Fire_Zoom.Default__AR_COV_Crossbow_Fire_Zoom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAR_COV_Crossbow_Fire_Zoom_C* UAR_COV_Crossbow_Fire_Zoom_C::GetDefaultObj()
{
	static class UAR_COV_Crossbow_Fire_Zoom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAR_COV_Crossbow_Fire_Zoom_C*>(UAR_COV_Crossbow_Fire_Zoom_C::StaticClass()->DefaultObject);

	return Default;
}

}


