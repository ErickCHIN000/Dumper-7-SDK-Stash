#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C
// (None)

class UClass* UUMG_DropshipEditor_Dropship_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DropshipEditor_Dropship_C");

	return Clss;
}


// UMG_DropshipEditor_Dropship_C UMG_DropshipEditor_Dropship.Default__UMG_DropshipEditor_Dropship_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DropshipEditor_Dropship_C* UUMG_DropshipEditor_Dropship_C::GetDefaultObj()
{
	static class UUMG_DropshipEditor_Dropship_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DropshipEditor_Dropship_C*>(UUMG_DropshipEditor_Dropship_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.RemovePart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDropshipPartType       Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDropshipModification       NewLocalVar_0                                                    (Edit, BlueprintVisible)
// TArray<struct FDropshipPartModification>Parts                                                            (Edit, BlueprintVisible)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDropshipPartModification   K2Node_MakeStruct_DropshipPartModification                       (None)
// TArray<struct FDropshipPartModification>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FDropshipModification       K2Node_MakeStruct_DropshipModification                           (None)

void UUMG_DropshipEditor_Dropship_C::RemovePart(enum class EDropshipPartType Type, const struct FDropshipModification& NewLocalVar_0, const TArray<struct FDropshipPartModification>& Parts, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FDropshipPartModification& K2Node_MakeStruct_DropshipPartModification, TArray<struct FDropshipPartModification>& K2Node_MakeArray_Array, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FDropshipModification& K2Node_MakeStruct_DropshipModification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEditor_Dropship_C", "RemovePart");

	Params::UUMG_DropshipEditor_Dropship_C_RemovePart_Params Parms{};

	Parms.Type = Type;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Parts = Parts;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_DropshipPartModification = K2Node_MakeStruct_DropshipPartModification;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_DropshipModification = K2Node_MakeStruct_DropshipModification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.ModifyDropship
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDropshipPartType       Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDropshipModification       NewLocalVar_0                                                    (Edit, BlueprintVisible)
// TArray<struct FDropshipPartModification>Parts                                                            (Edit, BlueprintVisible)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetItemID_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// struct FDropshipPartModification   K2Node_MakeStruct_DropshipPartModification                       (None)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDropshipPartModification>K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FDropshipModification       K2Node_MakeStruct_DropshipModification                           (None)

void UUMG_DropshipEditor_Dropship_C::ModifyDropship(class UInventory* Inventory, int32 Slot, enum class EDropshipPartType Type, const struct FDropshipModification& NewLocalVar_0, const TArray<struct FDropshipPartModification>& Parts, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetItemID_ReturnValue, const struct FDropshipPartModification& K2Node_MakeStruct_DropshipPartModification, enum class EDataValid CallFunc_ItemDataValid_Paths, TArray<struct FDropshipPartModification>& K2Node_MakeArray_Array, bool K2Node_SwitchEnum_CmpSuccess, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FDropshipModification& K2Node_MakeStruct_DropshipModification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEditor_Dropship_C", "ModifyDropship");

	Params::UUMG_DropshipEditor_Dropship_C_ModifyDropship_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Slot = Slot;
	Parms.Type = Type;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Parts = Parts;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemID_ReturnValue = CallFunc_GetItemID_ReturnValue;
	Parms.K2Node_MakeStruct_DropshipPartModification = K2Node_MakeStruct_DropshipPartModification;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_DropshipModification = K2Node_MakeStruct_DropshipModification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FItemData                   CallFunc_ConvertToItem_ReturnValue                               (ContainsInstancedReference)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct FItemData                   CallFunc_ConvertToItem_ReturnValue_1                             (ContainsInstancedReference)
// struct FItemData                   CallFunc_ConvertToItem_ReturnValue_2                             (ContainsInstancedReference)

void UUMG_DropshipEditor_Dropship_C::Refresh(class FText CallFunc_Conv_StringToText_ReturnValue, const struct FItemData& CallFunc_ConvertToItem_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FItemData& CallFunc_ConvertToItem_ReturnValue_1, const struct FItemData& CallFunc_ConvertToItem_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEditor_Dropship_C", "Refresh");

	Params::UUMG_DropshipEditor_Dropship_C_Refresh_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_ConvertToItem_ReturnValue = CallFunc_ConvertToItem_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_ConvertToItem_ReturnValue_1 = CallFunc_ConvertToItem_ReturnValue_1;
	Parms.CallFunc_ConvertToItem_ReturnValue_2 = CallFunc_ConvertToItem_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.UpdateDropship
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDropship                   Dropship                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_DropshipEditor_Dropship_C::UpdateDropship(const struct FDropship& Dropship)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEditor_Dropship_C", "UpdateDropship");

	Params::UUMG_DropshipEditor_Dropship_C_UpdateDropship_Params Parms{};

	Parms.Dropship = Dropship;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_DropshipEditor_Dropship_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEditor_Dropship_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropshipEditor_Dropship_C::BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEditor_Dropship_C", "BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_DropshipEditor_Dropship_C_BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropshipEditor_Dropship_C::BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEditor_Dropship_C", "BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_DropshipEditor_Dropship_C_BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.ExecuteUbergraph_UMG_DropshipEditor_Dropship
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropshipEditor_Dropship_C::ExecuteUbergraph_UMG_DropshipEditor_Dropship(int32 EntryPoint, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEditor_Dropship_C", "ExecuteUbergraph_UMG_DropshipEditor_Dropship");

	Params::UUMG_DropshipEditor_Dropship_C_ExecuteUbergraph_UMG_DropshipEditor_Dropship_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;

	UObject::ProcessEvent(Func, &Parms);

}

}


