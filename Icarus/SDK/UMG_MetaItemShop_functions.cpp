#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MetaItemShop.UMG_MetaItemShop_C
// (None)

class UClass* UUMG_MetaItemShop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MetaItemShop_C");

	return Clss;
}


// UMG_MetaItemShop_C UMG_MetaItemShop.Default__UMG_MetaItemShop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MetaItemShop_C* UUMG_MetaItemShop_C::GetDefaultObj()
{
	static class UUMG_MetaItemShop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MetaItemShop_C*>(UUMG_MetaItemShop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MetaItemShop.UMG_MetaItemShop_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWorkshopPack>       K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FWorkshopPack               CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ShopItem_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MetaItemShop_C::Update(int32 Temp_int_Array_Index_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FWorkshopPack>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FWorkshopPack& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UUMG_ShopItem_C* CallFunc_Create_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaItemShop_C", "Update");

	Params::UUMG_MetaItemShop_C_Update_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MetaItemShop.UMG_MetaItemShop_C.PurchaseMetaItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MetaItemShop_C::PurchaseMetaItem(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaItemShop_C", "PurchaseMetaItem");

	Params::UUMG_MetaItemShop_C_PurchaseMetaItem_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MetaItemShop.UMG_MetaItemShop_C.PurchaseItemConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MetaItemShop_C::PurchaseItemConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaItemShop_C", "PurchaseItemConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MetaItemShop.UMG_MetaItemShop_C.PurchaseItemFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MetaItemShop_C::PurchaseItemFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaItemShop_C", "PurchaseItemFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MetaItemShop.UMG_MetaItemShop_C.Opened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MetaItemShop_C::Opened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaItemShop_C", "Opened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MetaItemShop.UMG_MetaItemShop_C.PurchaseOutcome
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MetaItemShop_C::PurchaseOutcome(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaItemShop_C", "PurchaseOutcome");

	Params::UUMG_MetaItemShop_C_PurchaseOutcome_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MetaItemShop.UMG_MetaItemShop_C.ShopUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MetaItemShop_C::ShopUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaItemShop_C", "ShopUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MetaItemShop.UMG_MetaItemShop_C.ExecuteUbergraph_UMG_MetaItemShop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// TArray<struct FWorkshopPack>       K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FWorkshopPack               CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        Temp_wildcard_Variable                                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacterSpace* K2Node_DynamicCast_AsIcarus_Player_Character_Space               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWorkshopPack>       K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWorkshopPack               CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMetaResource               CallFunc_Array_Get_Item_2                                        (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent_1        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MetaItemShop_C::ExecuteUbergraph_UMG_MetaItemShop(int32 EntryPoint, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText Temp_text_Variable, TArray<struct FWorkshopPack>& K2Node_MakeArray_Array, const struct FWorkshopPack& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText Temp_wildcard_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AIcarusPlayerCharacterSpace* K2Node_DynamicCast_AsIcarus_Player_Character_Space, bool K2Node_DynamicCast_bSuccess, class FText Temp_text_Variable_1, class UInventory* CallFunc_GetInventory_ReturnValue, int32 K2Node_CustomEvent_Index, TArray<struct FWorkshopPack>& K2Node_MakeArray_Array_2, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FWorkshopPack& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FMetaResource& CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_1, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool K2Node_CustomEvent_Success, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class FText K2Node_Select_Default, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool Temp_bool_IsClosed_Variable, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_2, bool K2Node_DynamicCast_bSuccess_3, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_3, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_4, bool K2Node_DynamicCast_bSuccess_5, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_3, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_4, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent_1, bool CallFunc_GetBackendProxyComponent_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_5, bool K2Node_DynamicCast_bSuccess_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_5, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaItemShop_C", "ExecuteUbergraph_UMG_MetaItemShop");

	Params::UUMG_MetaItemShop_C_ExecuteUbergraph_UMG_MetaItemShop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Space = K2Node_DynamicCast_AsIcarus_Player_Character_Space;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUIController_Interface_1 = K2Node_DynamicCast_AsUIController_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUserInterface_UserInterface_1 = CallFunc_GetUserInterface_UserInterface_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_DynamicCast_AsUIController_Interface_2 = K2Node_DynamicCast_AsUIController_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetUserInterface_UserInterface_2 = CallFunc_GetUserInterface_UserInterface_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsUIController_Interface_3 = K2Node_DynamicCast_AsUIController_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsUIController_Interface_4 = K2Node_DynamicCast_AsUIController_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetUserInterface_UserInterface_3 = CallFunc_GetUserInterface_UserInterface_3;
	Parms.CallFunc_GetUserInterface_UserInterface_4 = CallFunc_GetUserInterface_UserInterface_4;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent_1 = CallFunc_GetBackendProxyComponent_BackendProxyComponent_1;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess_1 = CallFunc_GetBackendProxyComponent_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsUIController_Interface_5 = K2Node_DynamicCast_AsUIController_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetUserInterface_UserInterface_5 = CallFunc_GetUserInterface_UserInterface_5;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


