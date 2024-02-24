#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_InventoryMenu.wid_InventoryMenu_C
// (None)

class UClass* UWid_InventoryMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_InventoryMenu_C");

	return Clss;
}


// wid_InventoryMenu_C wid_InventoryMenu.Default__wid_InventoryMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_InventoryMenu_C* UWid_InventoryMenu_C::GetDefaultObj()
{
	static class UWid_InventoryMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_InventoryMenu_C*>(UWid_InventoryMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_InventoryMenu.wid_InventoryMenu_C.BndEvt__QuickMenu_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::BndEvt__QuickMenu_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "BndEvt__QuickMenu_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.BndEvt__QuickMenu_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::BndEvt__QuickMenu_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "BndEvt__QuickMenu_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.BndEvt__Remove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::BndEvt__Remove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "BndEvt__Remove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.BndEvt__Use_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::BndEvt__Use_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "BndEvt__Use_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.BndEvt__Use_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::BndEvt__Use_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "BndEvt__Use_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.BndEvt__Remove_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::BndEvt__Remove_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "BndEvt__Remove_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.BndEvt__QuickMenu_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::BndEvt__QuickMenu_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "BndEvt__QuickMenu_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.OpenMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NameID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_InventoryMenu_C::OpenMenu(class FName NameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "OpenMenu");

	Params::UWid_InventoryMenu_C_OpenMenu_Params Parms{};

	Parms.NameID = NameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.BndEvt__Remove_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::BndEvt__Remove_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "BndEvt__Remove_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.BndEvt__Use_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::BndEvt__Use_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "BndEvt__Use_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_InventoryMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "PreConstruct");

	Params::UWid_InventoryMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.BndEvt__Split_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::BndEvt__Split_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "BndEvt__Split_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.BndEvt__Split_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::BndEvt__Split_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "BndEvt__Split_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.BndEvt__Split_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::BndEvt__Split_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "BndEvt__Split_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.SetupUseText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_InventoryMenu_C::SetupUseText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "SetupUseText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InventoryMenu.wid_InventoryMenu_C.ExecuteUbergraph_wid_InventoryMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_3                                         (ConstParm, ZeroConstructor, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (UObjectWrapper)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_ChangeApp_NewApp_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBePutToQuickMenu_Result                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBePutToQuickMenu_Result_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_3                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_1                  (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_ResourceTransfer_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanRemoveThisItem_CanBeRemoved                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItemInfo_IsValid_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue_1                               (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_4                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue_2                               (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ACGActiveItem>   K2Node_ClassDynamicCast_AsCGActive_Item                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_5                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue_3                               (None)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_2                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_3                  (HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ACGActiveItem>   K2Node_ClassDynamicCast_AsCGActive_Item_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGActiveItem*               CallFunc_FindActiveItemInInventory_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_InventoryMenu_C::ExecuteUbergraph_wid_InventoryMenu(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_3, int32 CallFunc_PostEvent_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput, bool CallFunc_CanBePutToQuickMenu_Result, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2, bool CallFunc_CanBePutToQuickMenu_Result_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class FName K2Node_CustomEvent_NameID, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_Count_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_3, bool K2Node_Event_IsDesignTime, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class UWid_ResourceTransfer_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_CanRemoveThisItem_CanBeRemoved, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetItemInfo_IsValid_1, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_4, bool CallFunc_GetItemInfo_IsValid_2, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_5, bool CallFunc_GetItemInfo_IsValid_3, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item_1, bool K2Node_ClassDynamicCast_bSuccess_1, class ACGActiveItem* CallFunc_FindActiveItemInInventory_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, int32 CallFunc_PostEvent_ReturnValue_2, class FText K2Node_Select_Default, class APawn* CallFunc_GetPlayerPawn_ReturnValue_3, int32 CallFunc_PostEvent_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InventoryMenu_C", "ExecuteUbergraph_wid_InventoryMenu");

	Params::UWid_InventoryMenu_C_ExecuteUbergraph_wid_InventoryMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_delegate_Variable_3 = Temp_delegate_Variable_3;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection = CallFunc_GetCurrentSelection_CurrentSelection;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_1 = CallFunc_GetCurrentSelection_CurrentSelection_1;
	Parms.CallFunc_ChangeApp_NewApp_CastInput = CallFunc_ChangeApp_NewApp_CastInput;
	Parms.CallFunc_CanBePutToQuickMenu_Result = CallFunc_CanBePutToQuickMenu_Result;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_2 = CallFunc_GetCurrentSelection_CurrentSelection_2;
	Parms.CallFunc_CanBePutToQuickMenu_Result_1 = CallFunc_CanBePutToQuickMenu_Result_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CustomEvent_NameID = K2Node_CustomEvent_NameID;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_3 = CallFunc_GetCurrentSelection_CurrentSelection_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_2 = CallFunc_NotEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_CanRemoveThisItem_CanBeRemoved = CallFunc_CanRemoveThisItem_CanBeRemoved;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetItemInfo_IsValid_1 = CallFunc_GetItemInfo_IsValid_1;
	Parms.CallFunc_GetItemInfo_ReturnValue_1 = CallFunc_GetItemInfo_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_4 = CallFunc_GetCurrentSelection_CurrentSelection_4;
	Parms.CallFunc_GetItemInfo_IsValid_2 = CallFunc_GetItemInfo_IsValid_2;
	Parms.CallFunc_GetItemInfo_ReturnValue_2 = CallFunc_GetItemInfo_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsCGActive_Item = K2Node_ClassDynamicCast_AsCGActive_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_3 = CallFunc_NotEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_5 = CallFunc_GetCurrentSelection_CurrentSelection_5;
	Parms.CallFunc_GetItemInfo_IsValid_3 = CallFunc_GetItemInfo_IsValid_3;
	Parms.CallFunc_GetItemInfo_ReturnValue_3 = CallFunc_GetItemInfo_ReturnValue_3;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_3 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.K2Node_ClassDynamicCast_AsCGActive_Item_1 = K2Node_ClassDynamicCast_AsCGActive_Item_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_FindActiveItemInInventory_ReturnValue = CallFunc_FindActiveItemInInventory_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_2 = CallFunc_GetPlayerPawn_ReturnValue_2;
	Parms.CallFunc_PostEvent_ReturnValue_2 = CallFunc_PostEvent_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_3 = CallFunc_GetPlayerPawn_ReturnValue_3;
	Parms.CallFunc_PostEvent_ReturnValue_3 = CallFunc_PostEvent_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


