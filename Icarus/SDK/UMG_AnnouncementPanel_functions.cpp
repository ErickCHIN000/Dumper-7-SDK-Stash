#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_AnnouncementPanel.UMG_AnnouncementPanel_C
// (None)

class UClass* UUMG_AnnouncementPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_AnnouncementPanel_C");

	return Clss;
}


// UMG_AnnouncementPanel_C UMG_AnnouncementPanel.Default__UMG_AnnouncementPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_AnnouncementPanel_C* UUMG_AnnouncementPanel_C::GetDefaultObj()
{
	static class UUMG_AnnouncementPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_AnnouncementPanel_C*>(UUMG_AnnouncementPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


