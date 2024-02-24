#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MultiplayerLaser.WBP_MultiplayerLaser_C
// (None)

class UClass* UWBP_MultiplayerLaser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MultiplayerLaser_C");

	return Clss;
}


// WBP_MultiplayerLaser_C WBP_MultiplayerLaser.Default__WBP_MultiplayerLaser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MultiplayerLaser_C* UWBP_MultiplayerLaser_C::GetDefaultObj()
{
	static class UWBP_MultiplayerLaser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MultiplayerLaser_C*>(UWBP_MultiplayerLaser_C::StaticClass()->DefaultObject);

	return Default;
}

}


