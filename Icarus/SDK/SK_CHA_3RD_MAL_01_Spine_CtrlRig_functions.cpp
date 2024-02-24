#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass SK_CHA_3RD_MAL_01_Spine_CtrlRig.SK_CHA_3RD_MAL_01_Spine_CtrlRig_C
// (None)

class UClass* USK_CHA_3RD_MAL_01_Spine_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_CHA_3RD_MAL_01_Spine_CtrlRig_C");

	return Clss;
}


// SK_CHA_3RD_MAL_01_Spine_CtrlRig_C SK_CHA_3RD_MAL_01_Spine_CtrlRig.Default__SK_CHA_3RD_MAL_01_Spine_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_CHA_3RD_MAL_01_Spine_CtrlRig_C* USK_CHA_3RD_MAL_01_Spine_CtrlRig_C::GetDefaultObj()
{
	static class USK_CHA_3RD_MAL_01_Spine_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_CHA_3RD_MAL_01_Spine_CtrlRig_C*>(USK_CHA_3RD_MAL_01_Spine_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


