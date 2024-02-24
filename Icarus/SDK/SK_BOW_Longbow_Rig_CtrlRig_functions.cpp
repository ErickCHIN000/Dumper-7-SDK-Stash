#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass SK_BOW_Longbow_Rig_CtrlRig.SK_BOW_Longbow_Rig_CtrlRig_C
// (None)

class UClass* USK_BOW_Longbow_Rig_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_BOW_Longbow_Rig_CtrlRig_C");

	return Clss;
}


// SK_BOW_Longbow_Rig_CtrlRig_C SK_BOW_Longbow_Rig_CtrlRig.Default__SK_BOW_Longbow_Rig_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_BOW_Longbow_Rig_CtrlRig_C* USK_BOW_Longbow_Rig_CtrlRig_C::GetDefaultObj()
{
	static class USK_BOW_Longbow_Rig_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_BOW_Longbow_Rig_CtrlRig_C*>(USK_BOW_Longbow_Rig_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


