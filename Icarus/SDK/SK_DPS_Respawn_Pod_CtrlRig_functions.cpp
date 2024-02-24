#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass SK_DPS_Respawn_Pod_CtrlRig.SK_DPS_Respawn_Pod_CtrlRig_C
// (None)

class UClass* USK_DPS_Respawn_Pod_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_DPS_Respawn_Pod_CtrlRig_C");

	return Clss;
}


// SK_DPS_Respawn_Pod_CtrlRig_C SK_DPS_Respawn_Pod_CtrlRig.Default__SK_DPS_Respawn_Pod_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_DPS_Respawn_Pod_CtrlRig_C* USK_DPS_Respawn_Pod_CtrlRig_C::GetDefaultObj()
{
	static class USK_DPS_Respawn_Pod_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_DPS_Respawn_Pod_CtrlRig_C*>(USK_DPS_Respawn_Pod_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


