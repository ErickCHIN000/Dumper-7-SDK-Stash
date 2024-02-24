#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Storage_V2_Menu.wid_Storage_V2_Menu_C
// (None)

class UClass* UWid_Storage_V2_Menu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Storage_V2_Menu_C");

	return Clss;
}


// wid_Storage_V2_Menu_C wid_Storage_V2_Menu.Default__wid_Storage_V2_Menu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Storage_V2_Menu_C* UWid_Storage_V2_Menu_C::GetDefaultObj()
{
	static class UWid_Storage_V2_Menu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Storage_V2_Menu_C*>(UWid_Storage_V2_Menu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.BndEvt__Split_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::BndEvt__Split_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "BndEvt__Split_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.BndEvt__Split_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::BndEvt__Split_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "BndEvt__Split_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.BndEvt__Split_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::BndEvt__Split_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "BndEvt__Split_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.OpenMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NameID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_V2_Menu_C::OpenMenu(class FName NameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "OpenMenu");

	Params::UWid_Storage_V2_Menu_C_OpenMenu_Params Parms{};

	Parms.NameID = NameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_V2_Menu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "PreConstruct");

	Params::UWid_Storage_V2_Menu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.BndEvt__Use_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::BndEvt__Use_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "BndEvt__Use_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.BndEvt__Remove_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::BndEvt__Remove_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "BndEvt__Remove_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.BndEvt__QuickMenu_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::BndEvt__QuickMenu_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "BndEvt__QuickMenu_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.BndEvt__QuickMenu_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::BndEvt__QuickMenu_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "BndEvt__QuickMenu_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.BndEvt__Remove_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::BndEvt__Remove_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "BndEvt__Remove_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.BndEvt__Use_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::BndEvt__Use_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "BndEvt__Use_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.BndEvt__Use_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::BndEvt__Use_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "BndEvt__Use_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.BndEvt__Remove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::BndEvt__Remove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "BndEvt__Remove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.BndEvt__QuickMenu_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Menu_C::BndEvt__QuickMenu_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "BndEvt__QuickMenu_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.ExecuteUbergraph_wid_Storage_V2_Menu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_1                  (UObjectWrapper, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_2                  (HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_3                                         (ConstParm, ZeroConstructor, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_3                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_ChangeApp_NewApp_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBePutToQuickMenu_Result                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_ResourceTransfer_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (UObjectWrapper)
// bool                               CallFunc_CanSplitItem_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_V2_Menu_C::ExecuteUbergraph_wid_Storage_V2_Menu(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_3, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class FName K2Node_CustomEvent_NameID, float CallFunc_Count_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_FMin_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput, bool CallFunc_CanBePutToQuickMenu_Result, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2, class UWid_ResourceTransfer_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, bool CallFunc_CanSplitItem_Result, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, int32 CallFunc_PostEvent_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_3, int32 CallFunc_PostEvent_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Menu_C", "ExecuteUbergraph_wid_Storage_V2_Menu");

	Params::UWid_Storage_V2_Menu_C_ExecuteUbergraph_wid_Storage_V2_Menu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_delegate_Variable_3 = Temp_delegate_Variable_3;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection = CallFunc_GetCurrentSelection_CurrentSelection;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_3 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.K2Node_CustomEvent_NameID = K2Node_CustomEvent_NameID;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_1 = CallFunc_GetCurrentSelection_CurrentSelection_1;
	Parms.CallFunc_ChangeApp_NewApp_CastInput = CallFunc_ChangeApp_NewApp_CastInput;
	Parms.CallFunc_CanBePutToQuickMenu_Result = CallFunc_CanBePutToQuickMenu_Result;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_2 = CallFunc_GetCurrentSelection_CurrentSelection_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.CallFunc_CanSplitItem_Result = CallFunc_CanSplitItem_Result;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_2 = CallFunc_GetPlayerPawn_ReturnValue_2;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_PostEvent_ReturnValue_2 = CallFunc_PostEvent_ReturnValue_2;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_3 = CallFunc_GetPlayerPawn_ReturnValue_3;
	Parms.CallFunc_PostEvent_ReturnValue_3 = CallFunc_PostEvent_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


