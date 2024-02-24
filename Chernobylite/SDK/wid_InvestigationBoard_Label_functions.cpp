#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_InvestigationBoard_Label.wid_InvestigationBoard_Label_C
// (None)

class UClass* UWid_InvestigationBoard_Label_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_InvestigationBoard_Label_C");

	return Clss;
}


// wid_InvestigationBoard_Label_C wid_InvestigationBoard_Label.Default__wid_InvestigationBoard_Label_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_InvestigationBoard_Label_C* UWid_InvestigationBoard_Label_C::GetDefaultObj()
{
	static class UWid_InvestigationBoard_Label_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_InvestigationBoard_Label_C*>(UWid_InvestigationBoard_Label_C::StaticClass()->DefaultObject);

	return Default;
}

}


