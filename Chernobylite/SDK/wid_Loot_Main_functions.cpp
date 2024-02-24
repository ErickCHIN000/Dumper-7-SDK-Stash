#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Loot_Main.wid_Loot_Main_C
// (None)

class UClass* UWid_Loot_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Loot_Main_C");

	return Clss;
}


// wid_Loot_Main_C wid_Loot_Main.Default__wid_Loot_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Loot_Main_C* UWid_Loot_Main_C::GetDefaultObj()
{
	static class UWid_Loot_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Loot_Main_C*>(UWid_Loot_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Loot_Main.wid_Loot_Main_C.Get_LootableName_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWid_Loot_Main_C::Get_LootableName_Text_0(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "Get_LootableName_Text_0");

	Params::UWid_Loot_Main_C_Get_LootableName_Text_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_Loot_Main.wid_Loot_Main_C.GetTileByItemID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             NewLocalVar_0                                                    (Edit, BlueprintVisible)
// int32                              ID                                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetItems_ReturnValue                                    (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_SelectItem_self_CastInput                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_Array_Get_Item_1                                        (None)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item_2                                        (None)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             K2Node_Select_Default_2                                          (ConstParm)

void UWid_Loot_Main_C::GetTileByItemID(bool Direction, struct FVector2D* Index, const struct FInventoryEntry& NewLocalVar_0, int32 ID, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_SelectItem_self_CastInput, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, int32 K2Node_Select_Default_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Percent_IntInt_ReturnValue_1, const struct FInventoryEntry& CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1, const struct FInventoryEntry& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "GetTileByItemID");

	Params::UWid_Loot_Main_C_GetTileByItemID_Params Parms{};

	Parms.Direction = Direction;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.ID = ID;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetItems_ReturnValue = CallFunc_GetItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_SelectItem_self_CastInput = CallFunc_SelectItem_self_CastInput;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1 = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = std::move(Parms.Index);

}


// Function wid_Loot_Main.wid_Loot_Main_C.ChangeApp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IWid_IInventoryApp_C>NewApp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Loot_Main_C::ChangeApp(TScriptInterface<class IWid_IInventoryApp_C> NewApp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "ChangeApp");

	Params::UWid_Loot_Main_C_ChangeApp_Params Parms{};

	Parms.NewApp = NewApp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loot_Main.wid_Loot_Main_C.DPadUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.DPadRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.DPadDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.DPadLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.InputFaceRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.InputFaceUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.InputFaceLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::InputFaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "InputFaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.InputR2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::InputR2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "InputR2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.InputL2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::InputL2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "InputL2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.StorageUpdatedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::StorageUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "StorageUpdatedDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.InputDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.InputUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.InputRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.InputFaceDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Loot_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Main.wid_Loot_Main_C.NewSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Loot_Main_C::NewSelection(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "NewSelection");

	Params::UWid_Loot_Main_C_NewSelection_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loot_Main.wid_Loot_Main_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Loot_Main_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "PreConstruct");

	Params::UWid_Loot_Main_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loot_Main.wid_Loot_Main_C.ExecuteUbergraph_wid_Loot_Main
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanNAND_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_Start_self_CastInput                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Name                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Loot_Main_C::ExecuteUbergraph_wid_Loot_Main(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ Temp_delegate_Variable, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, bool CallFunc_NotEqual_NameName_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanNAND_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_Start_self_CastInput, class FName K2Node_CustomEvent_Name, bool K2Node_Event_IsDesignTime, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Main_C", "ExecuteUbergraph_wid_Loot_Main");

	Params::UWid_Loot_Main_C_ExecuteUbergraph_wid_Loot_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection = CallFunc_GetCurrentSelection_CurrentSelection;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_1 = CallFunc_GetCurrentSelection_CurrentSelection_1;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanNAND_ReturnValue = CallFunc_BooleanNAND_ReturnValue;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_2 = CallFunc_GetCurrentSelection_CurrentSelection_2;
	Parms.CallFunc_Start_self_CastInput = CallFunc_Start_self_CastInput;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetSize_ReturnValue_1 = CallFunc_GetSize_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


