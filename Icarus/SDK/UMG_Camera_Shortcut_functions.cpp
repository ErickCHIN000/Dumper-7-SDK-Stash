#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Camera_Shortcut.UMG_Camera_Shortcut_C
// (None)

class UClass* UUMG_Camera_Shortcut_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Camera_Shortcut_C");

	return Clss;
}


// UMG_Camera_Shortcut_C UMG_Camera_Shortcut.Default__UMG_Camera_Shortcut_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Camera_Shortcut_C* UUMG_Camera_Shortcut_C::GetDefaultObj()
{
	static class UUMG_Camera_Shortcut_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Camera_Shortcut_C*>(UUMG_Camera_Shortcut_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Camera_Shortcut.UMG_Camera_Shortcut_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Camera_Shortcut_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Camera_Shortcut_C", "PreConstruct");

	Params::UUMG_Camera_Shortcut_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Camera_Shortcut.UMG_Camera_Shortcut_C.ExecuteUbergraph_UMG_Camera_Shortcut
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettingsSubsystem*  CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_wildcard_Variable                                           (HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayNameForKey_ReturnValue                        (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct FKeybindData                CallFunc_GetKeybindingsStruct_Keybindings                        (None)
// enum class EValid                  CallFunc_GetKeybindingsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKeybindData                CallFunc_GetKeybindingsStruct_Keybindings_1                      (None)
// enum class EValid                  CallFunc_GetKeybindingsStruct_Paths_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetCurrentActionMapping_Out                             (None)
// enum class EValid                  CallFunc_GetCurrentActionMapping_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputAxisKeyMapping        CallFunc_GetCurrentAxisMapping_Out                               (None)
// enum class EValid                  CallFunc_GetCurrentAxisMapping_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Camera_Shortcut_C::ExecuteUbergraph_UMG_Camera_Shortcut(int32 EntryPoint, class UGameUserSettingsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FKey& Temp_wildcard_Variable, class FText CallFunc_GetDisplayNameForKey_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings_1, enum class EValid CallFunc_GetKeybindingsStruct_Paths_1, const struct FInputActionKeyMapping& CallFunc_GetCurrentActionMapping_Out, enum class EValid CallFunc_GetCurrentActionMapping_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FInputAxisKeyMapping& CallFunc_GetCurrentAxisMapping_Out, enum class EValid CallFunc_GetCurrentAxisMapping_Paths, bool K2Node_SwitchEnum_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Camera_Shortcut_C", "ExecuteUbergraph_UMG_Camera_Shortcut");

	Params::UUMG_Camera_Shortcut_C_ExecuteUbergraph_UMG_Camera_Shortcut_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetDisplayNameForKey_ReturnValue = CallFunc_GetDisplayNameForKey_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetKeybindingsStruct_Keybindings = CallFunc_GetKeybindingsStruct_Keybindings;
	Parms.CallFunc_GetKeybindingsStruct_Paths = CallFunc_GetKeybindingsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetKeybindingsStruct_Keybindings_1 = CallFunc_GetKeybindingsStruct_Keybindings_1;
	Parms.CallFunc_GetKeybindingsStruct_Paths_1 = CallFunc_GetKeybindingsStruct_Paths_1;
	Parms.CallFunc_GetCurrentActionMapping_Out = CallFunc_GetCurrentActionMapping_Out;
	Parms.CallFunc_GetCurrentActionMapping_Paths = CallFunc_GetCurrentActionMapping_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetCurrentAxisMapping_Out = CallFunc_GetCurrentAxisMapping_Out;
	Parms.CallFunc_GetCurrentAxisMapping_Paths = CallFunc_GetCurrentAxisMapping_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


