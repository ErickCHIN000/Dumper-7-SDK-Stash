#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_AccoladePopup.UMG_AccoladePopup_C
// (None)

class UClass* UUMG_AccoladePopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_AccoladePopup_C");

	return Clss;
}


// UMG_AccoladePopup_C UMG_AccoladePopup.Default__UMG_AccoladePopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_AccoladePopup_C* UUMG_AccoladePopup_C::GetDefaultObj()
{
	static class UUMG_AccoladePopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_AccoladePopup_C*>(UUMG_AccoladePopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_AccoladePopup.UMG_AccoladePopup_C.PlayPopupSound
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladePopup_C::PlayPopupSound(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladePopup_C", "PlayPopupSound");

	Params::UUMG_AccoladePopup_C_PlayPopupSound_Params Parms{};

	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladePopup.UMG_AccoladePopup_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccoladesRowHandle         Accolade                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FAccoladeData               CallFunc_GetAccoladesStruct_Accolades                            (None)
// enum class EValid                  CallFunc_GetAccoladesStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladePopup_C::UpdateState(const struct FAccoladesRowHandle& Accolade, const struct FAccoladeData& CallFunc_GetAccoladesStruct_Accolades, enum class EValid CallFunc_GetAccoladesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladePopup_C", "UpdateState");

	Params::UUMG_AccoladePopup_C_UpdateState_Params Parms{};

	Parms.Accolade = Accolade;
	Parms.CallFunc_GetAccoladesStruct_Accolades = CallFunc_GetAccoladesStruct_Accolades;
	Parms.CallFunc_GetAccoladesStruct_Paths = CallFunc_GetAccoladesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_1 = CallFunc_EqualEqual_EnumEnum_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladePopup.UMG_AccoladePopup_C.Finished_A1C5DA234732A9E7D3855CA0319F1CEA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_AccoladePopup_C::Finished_A1C5DA234732A9E7D3855CA0319F1CEA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladePopup_C", "Finished_A1C5DA234732A9E7D3855CA0319F1CEA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AccoladePopup.UMG_AccoladePopup_C.Finished_3BB1A4E9422B43C9055CF99036EF0D9F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_AccoladePopup_C::Finished_3BB1A4E9422B43C9055CF99036EF0D9F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladePopup_C", "Finished_3BB1A4E9422B43C9055CF99036EF0D9F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AccoladePopup.UMG_AccoladePopup_C.OnAccoladeCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccoladeCompletedState     Accolade                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_AccoladePopup_C::OnAccoladeCompleted(const struct FAccoladeCompletedState& Accolade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladePopup_C", "OnAccoladeCompleted");

	Params::UUMG_AccoladePopup_C_OnAccoladeCompleted_Params Parms{};

	Parms.Accolade = Accolade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladePopup.UMG_AccoladePopup_C.UpdateAccolades
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_AccoladePopup_C::UpdateAccolades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladePopup_C", "UpdateAccolades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AccoladePopup.UMG_AccoladePopup_C.InitAccoladePopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_AccoladePopup_C::InitAccoladePopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladePopup_C", "InitAccoladePopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AccoladePopup.UMG_AccoladePopup_C.ExecuteUbergraph_UMG_AccoladePopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FAccoladeCompletedState     K2Node_CustomEvent_Accolade                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAccoladesRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAccoladeSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladePopup_C::ExecuteUbergraph_UMG_AccoladePopup(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FAccoladeCompletedState& K2Node_CustomEvent_Accolade, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FAccoladesRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool Temp_bool_IsClosed_Variable, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladePopup_C", "ExecuteUbergraph_UMG_AccoladePopup");

	Params::UUMG_AccoladePopup_C_ExecuteUbergraph_UMG_AccoladePopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Accolade = K2Node_CustomEvent_Accolade;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


