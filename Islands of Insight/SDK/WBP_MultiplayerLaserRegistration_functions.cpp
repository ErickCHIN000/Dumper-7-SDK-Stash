#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MultiplayerLaserRegistration.WBP_MultiplayerLaserRegistration_C
// (None)

class UClass* UWBP_MultiplayerLaserRegistration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MultiplayerLaserRegistration_C");

	return Clss;
}


// WBP_MultiplayerLaserRegistration_C WBP_MultiplayerLaserRegistration.Default__WBP_MultiplayerLaserRegistration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MultiplayerLaserRegistration_C* UWBP_MultiplayerLaserRegistration_C::GetDefaultObj()
{
	static class UWBP_MultiplayerLaserRegistration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MultiplayerLaserRegistration_C*>(UWBP_MultiplayerLaserRegistration_C::StaticClass()->DefaultObject);

	return Default;
}

}


