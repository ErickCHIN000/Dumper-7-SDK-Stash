#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CameraSetting_DetachFromPlayer.UMG_CameraSetting_DetachFromPlayer_C
// (None)

class UClass* UUMG_CameraSetting_DetachFromPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CameraSetting_DetachFromPlayer_C");

	return Clss;
}


// UMG_CameraSetting_DetachFromPlayer_C UMG_CameraSetting_DetachFromPlayer.Default__UMG_CameraSetting_DetachFromPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CameraSetting_DetachFromPlayer_C* UUMG_CameraSetting_DetachFromPlayer_C::GetDefaultObj()
{
	static class UUMG_CameraSetting_DetachFromPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CameraSetting_DetachFromPlayer_C*>(UUMG_CameraSetting_DetachFromPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CameraSetting_DetachFromPlayer.UMG_CameraSetting_DetachFromPlayer_C.UpdatePostProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_GetCheckboxState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PhotoCamera_C*           CallFunc_GetPhotoCameraPawn_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CameraSetting_DetachFromPlayer_C::UpdatePostProcess(struct FPostProcessSettings& Settings, bool CallFunc_GetCheckboxState_ReturnValue, class ABP_PhotoCamera_C* CallFunc_GetPhotoCameraPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CameraSetting_DetachFromPlayer_C", "UpdatePostProcess");

	Params::UUMG_CameraSetting_DetachFromPlayer_C_UpdatePostProcess_Params Parms{};

	Parms.Settings = Settings;
	Parms.CallFunc_GetCheckboxState_ReturnValue = CallFunc_GetCheckboxState_ReturnValue;
	Parms.CallFunc_GetPhotoCameraPawn_ReturnValue = CallFunc_GetPhotoCameraPawn_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


