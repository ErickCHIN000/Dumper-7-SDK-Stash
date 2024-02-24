#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Inv_Permissions.WBP_Inv_Permissions_C
// (None)

class UClass* UWBP_Inv_Permissions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Inv_Permissions_C");

	return Clss;
}


// WBP_Inv_Permissions_C WBP_Inv_Permissions.Default__WBP_Inv_Permissions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Inv_Permissions_C* UWBP_Inv_Permissions_C::GetDefaultObj()
{
	static class UWBP_Inv_Permissions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Inv_Permissions_C*>(UWBP_Inv_Permissions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Inv_Permissions.WBP_Inv_Permissions_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_Inv_Permissions_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_Permissions_C", "OnFocusReceived");

	Params::UWBP_Inv_Permissions_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inv_Permissions.WBP_Inv_Permissions_C.UpdateContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_Permissions_C::UpdateContainer(class UObject* Structure, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_Permissions_C", "UpdateContainer");

	Params::UWBP_Inv_Permissions_C_UpdateContainer_Params Parms{};

	Parms.Structure = Structure;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_Permissions.WBP_Inv_Permissions_C.On NPCPermission Clicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPermissionOptions      NPCPermission                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_Permissions_C::On_NPCPermission_Clicked(enum class EPermissionOptions NPCPermission, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_Permissions_C", "On NPCPermission Clicked");

	Params::UWBP_Inv_Permissions_C_On_NPCPermission_Clicked_Params Parms{};

	Parms.NPCPermission = NPCPermission;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_Permissions.WBP_Inv_Permissions_C.UnbindEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlayerOwnershipInterface>K2Node_DynamicCast_AsPlayer_Ownership_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_Permissions_C::UnbindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IPlayerOwnershipInterface> K2Node_DynamicCast_AsPlayer_Ownership_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_Permissions_C", "UnbindEvents");

	Params::UWBP_Inv_Permissions_C_UnbindEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsPlayer_Ownership_Interface = K2Node_DynamicCast_AsPlayer_Ownership_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_Permissions.WBP_Inv_Permissions_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inv_Permissions_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_Permissions_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_Permissions.WBP_Inv_Permissions_C.OnPermissionsUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlayerOwnershipInterface>K2Node_DynamicCast_AsPlayer_Ownership_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPermissionActive_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_Permissions_C::OnPermissionsUpdated(class AActor* Actor, bool Temp_bool_Variable, TScriptInterface<class IPlayerOwnershipInterface> K2Node_DynamicCast_AsPlayer_Ownership_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPermissionActive_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_Permissions_C", "OnPermissionsUpdated");

	Params::UWBP_Inv_Permissions_C_OnPermissionsUpdated_Params Parms{};

	Parms.Actor = Actor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsPlayer_Ownership_Interface = K2Node_DynamicCast_AsPlayer_Ownership_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsPermissionActive_ReturnValue = CallFunc_IsPermissionActive_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_Permissions.WBP_Inv_Permissions_C.BindEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlayerOwnershipInterface>K2Node_DynamicCast_AsPlayer_Ownership_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_Permissions_C::BindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IPlayerOwnershipInterface> K2Node_DynamicCast_AsPlayer_Ownership_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_Permissions_C", "BindEvents");

	Params::UWBP_Inv_Permissions_C_BindEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsPlayer_Ownership_Interface = K2Node_DynamicCast_AsPlayer_Ownership_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_Permissions.WBP_Inv_Permissions_C.Refresh
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inv_Permissions_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_Permissions_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_Permissions.WBP_Inv_Permissions_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Inv_Permissions_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_Permissions_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_Permissions.WBP_Inv_Permissions_C.BndEvt__WBP_Inv_Permissions_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_Permissions_C::BndEvt__WBP_Inv_Permissions_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_Permissions_C", "BndEvt__WBP_Inv_Permissions_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Inv_Permissions_C_BndEvt__WBP_Inv_Permissions_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_Permissions.WBP_Inv_Permissions_C.ExecuteUbergraph_WBP_Inv_Permissions
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_Permissions_C::ExecuteUbergraph_WBP_Inv_Permissions(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_Permissions_C", "ExecuteUbergraph_WBP_Inv_Permissions");

	Params::UWBP_Inv_Permissions_C_ExecuteUbergraph_WBP_Inv_Permissions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


