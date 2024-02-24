#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass CHA_3RD_MAL_01_Backpack_CtrlRig.CHA_3RD_MAL_01_Backpack_CtrlRig_C
// (None)

class UClass* UCHA_3RD_MAL_01_Backpack_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CHA_3RD_MAL_01_Backpack_CtrlRig_C");

	return Clss;
}


// CHA_3RD_MAL_01_Backpack_CtrlRig_C CHA_3RD_MAL_01_Backpack_CtrlRig.Default__CHA_3RD_MAL_01_Backpack_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCHA_3RD_MAL_01_Backpack_CtrlRig_C* UCHA_3RD_MAL_01_Backpack_CtrlRig_C::GetDefaultObj()
{
	static class UCHA_3RD_MAL_01_Backpack_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCHA_3RD_MAL_01_Backpack_CtrlRig_C*>(UCHA_3RD_MAL_01_Backpack_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


