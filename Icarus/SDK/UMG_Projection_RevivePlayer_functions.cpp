#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Projection_RevivePlayer.UMG_Projection_RevivePlayer_C
// (None)

class UClass* UUMG_Projection_RevivePlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Projection_RevivePlayer_C");

	return Clss;
}


// UMG_Projection_RevivePlayer_C UMG_Projection_RevivePlayer.Default__UMG_Projection_RevivePlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Projection_RevivePlayer_C* UUMG_Projection_RevivePlayer_C::GetDefaultObj()
{
	static class UUMG_Projection_RevivePlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Projection_RevivePlayer_C*>(UUMG_Projection_RevivePlayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


