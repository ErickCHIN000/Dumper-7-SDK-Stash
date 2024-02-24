#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C
// (None)

class UClass* UUMG_ContextMenu_List_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ContextMenu_List_Item_C");

	return Clss;
}


// UMG_ContextMenu_List_Item_C UMG_ContextMenu_List_Item.Default__UMG_ContextMenu_List_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ContextMenu_List_Item_C* UUMG_ContextMenu_List_Item_C::GetDefaultObj()
{
	static class UUMG_ContextMenu_List_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ContextMenu_List_Item_C*>(UUMG_ContextMenu_List_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C.GetDeployUsableName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FUsesRowHandle              CallFunc_MakeLiteralUses_ReturnValue                             (NoDestructor, HasGetValueTypeHash)
// struct FUses                       CallFunc_GetUsesStruct_Uses                                      (None)
// enum class EValid                  CallFunc_GetUsesStruct_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UUMG_ContextMenu_List_Item_C::GetDeployUsableName(const struct FUsesRowHandle& CallFunc_MakeLiteralUses_ReturnValue, const struct FUses& CallFunc_GetUsesStruct_Uses, enum class EValid CallFunc_GetUsesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_List_Item_C", "GetDeployUsableName");

	Params::UUMG_ContextMenu_List_Item_C_GetDeployUsableName_Params Parms{};

	Parms.CallFunc_MakeLiteralUses_ReturnValue = CallFunc_MakeLiteralUses_ReturnValue;
	Parms.CallFunc_GetUsesStruct_Uses = CallFunc_GetUsesStruct_Uses;
	Parms.CallFunc_GetUsesStruct_Paths = CallFunc_GetUsesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C.SetItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuItemData        ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UUMG_ContextMenu_List_Item_C::SetItemData(int32 ItemIndex, const struct FContextMenuItemData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_List_Item_C", "SetItemData");

	Params::UUMG_ContextMenu_List_Item_C_SetItemData_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C.BndEvt__ListButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ContextMenu_List_Item_C::BndEvt__ListButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_List_Item_C", "BndEvt__ListButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_ContextMenu_List_Item_C_BndEvt__ListButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C.ExecuteUbergraph_UMG_ContextMenu_List_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDeployUsableName_ReturnValue                         (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ItemIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuItemData        K2Node_CustomEvent_ItemData                                      (ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFeatureLevelData           CallFunc_GetFeatureLevelsStruct_FeatureLevels                    (None)
// enum class EValid                  CallFunc_GetFeatureLevelsStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default                                            (None)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ContextMenu_List_Item_C::ExecuteUbergraph_UMG_ContextMenu_List_Item(int32 EntryPoint, class FText CallFunc_GetDeployUsableName_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable, int32 K2Node_CustomEvent_ItemIndex, const struct FContextMenuItemData& K2Node_CustomEvent_ItemData, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle_ReturnValue, bool CallFunc_EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle_ReturnValue_1, const struct FFeatureLevelData& CallFunc_GetFeatureLevelsStruct_FeatureLevels, enum class EValid CallFunc_GetFeatureLevelsStruct_Paths, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_EqualEqual_TextText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_List_Item_C", "ExecuteUbergraph_UMG_ContextMenu_List_Item");

	Params::UUMG_ContextMenu_List_Item_C_ExecuteUbergraph_UMG_ContextMenu_List_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDeployUsableName_ReturnValue = CallFunc_GetDeployUsableName_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CustomEvent_ItemIndex = K2Node_CustomEvent_ItemIndex;
	Parms.K2Node_CustomEvent_ItemData = K2Node_CustomEvent_ItemData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle_ReturnValue = CallFunc_EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle_ReturnValue_1 = CallFunc_EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle_ReturnValue_1;
	Parms.CallFunc_GetFeatureLevelsStruct_FeatureLevels = CallFunc_GetFeatureLevelsStruct_FeatureLevels;
	Parms.CallFunc_GetFeatureLevelsStruct_Paths = CallFunc_GetFeatureLevelsStruct_Paths;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Identifier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ContextMenu_List_Item_C::OnItemSelected__DelegateSignature(class FName Identifier, int32 Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_List_Item_C", "OnItemSelected__DelegateSignature");

	Params::UUMG_ContextMenu_List_Item_C_OnItemSelected__DelegateSignature_Params Parms{};

	Parms.Identifier = Identifier;
	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C.OnWidgetSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ContextMenu_List_Item_C*ItemClicked                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ContextMenu_List_Item_C::OnWidgetSelected__DelegateSignature(class UUMG_ContextMenu_List_Item_C* ItemClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_List_Item_C", "OnWidgetSelected__DelegateSignature");

	Params::UUMG_ContextMenu_List_Item_C_OnWidgetSelected__DelegateSignature_Params Parms{};

	Parms.ItemClicked = ItemClicked;

	UObject::ProcessEvent(Func, &Parms);

}

}


