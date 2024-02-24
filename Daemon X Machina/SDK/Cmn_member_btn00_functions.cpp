#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cmn_member_btn00.Cmn_member_btn00_C
// (None)

class UClass* UCmn_member_btn00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cmn_member_btn00_C");

	return Clss;
}


// Cmn_member_btn00_C Cmn_member_btn00.Default__Cmn_member_btn00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCmn_member_btn00_C* UCmn_member_btn00_C::GetDefaultObj()
{
	static class UCmn_member_btn00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCmn_member_btn00_C*>(UCmn_member_btn00_C::StaticClass()->DefaultObject);

	return Default;
}

}


