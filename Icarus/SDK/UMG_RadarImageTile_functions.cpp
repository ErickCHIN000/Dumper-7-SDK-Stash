#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RadarImageTile.UMG_RadarImageTile_C
// (None)

class UClass* UUMG_RadarImageTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RadarImageTile_C");

	return Clss;
}


// UMG_RadarImageTile_C UMG_RadarImageTile.Default__UMG_RadarImageTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RadarImageTile_C* UUMG_RadarImageTile_C::GetDefaultObj()
{
	static class UUMG_RadarImageTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RadarImageTile_C*>(UUMG_RadarImageTile_C::StaticClass()->DefaultObject);

	return Default;
}

}


