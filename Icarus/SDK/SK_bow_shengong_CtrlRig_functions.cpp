#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass SK_bow_shengong_CtrlRig.SK_bow_shengong_CtrlRig_C
// (None)

class UClass* USK_bow_shengong_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_bow_shengong_CtrlRig_C");

	return Clss;
}


// SK_bow_shengong_CtrlRig_C SK_bow_shengong_CtrlRig.Default__SK_bow_shengong_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_bow_shengong_CtrlRig_C* USK_bow_shengong_CtrlRig_C::GetDefaultObj()
{
	static class USK_bow_shengong_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_bow_shengong_CtrlRig_C*>(USK_bow_shengong_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


