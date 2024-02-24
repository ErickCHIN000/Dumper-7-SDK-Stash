#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Structure_Rename.WBP_Structure_Rename_C
// (None)

class UClass* UWBP_Structure_Rename_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Structure_Rename_C");

	return Clss;
}


// WBP_Structure_Rename_C WBP_Structure_Rename.Default__WBP_Structure_Rename_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Structure_Rename_C* UWBP_Structure_Rename_C::GetDefaultObj()
{
	static class UWBP_Structure_Rename_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Structure_Rename_C*>(UWBP_Structure_Rename_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Structure_Rename.WBP_Structure_Rename_C.OnInputCancel
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_Structure_Rename_C::OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Structure_Rename_C", "OnInputCancel");

	Params::UWBP_Structure_Rename_C_OnInputCancel_Params Parms{};

	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Structure_Rename.WBP_Structure_Rename_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Structure_Rename_C::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Structure_Rename_C", "GetDefaultFocusWidget");

	Params::UWBP_Structure_Rename_C_GetDefaultFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Structure_Rename.WBP_Structure_Rename_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Structure_Rename_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Structure_Rename_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Structure_Rename.WBP_Structure_Rename_C.BndEvt__WBP_Structure_Rename_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Structure_Rename_C::BndEvt__WBP_Structure_Rename_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Structure_Rename_C", "BndEvt__WBP_Structure_Rename_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Structure_Rename.WBP_Structure_Rename_C.BndEvt__WBP_Structure_Rename_WBP_button_base_54_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Structure_Rename_C::BndEvt__WBP_Structure_Rename_WBP_button_base_54_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Structure_Rename_C", "BndEvt__WBP_Structure_Rename_WBP_button_base_54_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Structure_Rename.WBP_Structure_Rename_C.ExecuteUbergraph_WBP_Structure_Rename
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCustomizedPlayerName_OutName                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IControllerInteractionInterface>CallFunc_GetLastNearbyInteractableObject_self_CastInput          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetLastNearbyInteractableObject_ReturnValue             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueId_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)

void UWBP_Structure_Rename_C::ExecuteUbergraph_WBP_Structure_Rename(int32 EntryPoint, class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetCustomizedPlayerName_OutName, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed_1, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastNearbyInteractableObject_self_CastInput, class UObject* CallFunc_GetLastNearbyInteractableObject_ReturnValue, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Structure_Rename_C", "ExecuteUbergraph_WBP_Structure_Rename");

	Params::UWBP_Structure_Rename_C_ExecuteUbergraph_WBP_Structure_Rename_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBP_Structure_Constructed = K2Node_DynamicCast_AsBP_Structure_Constructed;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCustomizedPlayerName_OutName = CallFunc_GetCustomizedPlayerName_OutName;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Constructed_1 = K2Node_DynamicCast_AsBP_Structure_Constructed_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetLastNearbyInteractableObject_self_CastInput = CallFunc_GetLastNearbyInteractableObject_self_CastInput;
	Parms.CallFunc_GetLastNearbyInteractableObject_ReturnValue = CallFunc_GetLastNearbyInteractableObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetPersistentUniqueId_ReturnValue = CallFunc_GetPersistentUniqueId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


