#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass SK_Wood_Bow_CtrlRig_String_Aim.SK_Wood_Bow_CtrlRig_String_Aim_C
// (None)

class UClass* USK_Wood_Bow_CtrlRig_String_Aim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Wood_Bow_CtrlRig_String_Aim_C");

	return Clss;
}


// SK_Wood_Bow_CtrlRig_String_Aim_C SK_Wood_Bow_CtrlRig_String_Aim.Default__SK_Wood_Bow_CtrlRig_String_Aim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Wood_Bow_CtrlRig_String_Aim_C* USK_Wood_Bow_CtrlRig_String_Aim_C::GetDefaultObj()
{
	static class USK_Wood_Bow_CtrlRig_String_Aim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Wood_Bow_CtrlRig_String_Aim_C*>(USK_Wood_Bow_CtrlRig_String_Aim_C::StaticClass()->DefaultObject);

	return Default;
}

}


