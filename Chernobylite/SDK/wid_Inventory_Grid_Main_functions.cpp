#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C
// (None)

class UClass* UWid_Inventory_Grid_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Inventory_Grid_Main_C");

	return Clss;
}


// wid_Inventory_Grid_Main_C wid_Inventory_Grid_Main.Default__wid_Inventory_Grid_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Inventory_Grid_Main_C* UWid_Inventory_Grid_Main_C::GetDefaultObj()
{
	static class UWid_Inventory_Grid_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Inventory_Grid_Main_C*>(UWid_Inventory_Grid_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.IsQuickUseOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_QuickMenu_C*  K2Node_DynamicCast_AsWid_Inventory_Quick_Menu                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_Grid_Main_C::IsQuickUseOpen(bool* Result, class UWid_Inventory_QuickMenu_C* K2Node_DynamicCast_AsWid_Inventory_Quick_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "IsQuickUseOpen");

	Params::UWid_Inventory_Grid_Main_C_IsQuickUseOpen_Params Parms{};

	Parms.K2Node_DynamicCast_AsWid_Inventory_Quick_Menu = K2Node_DynamicCast_AsWid_Inventory_Quick_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.QuickMenuInUse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_Inventory_Grid_Main_C::QuickMenuInUse(bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "QuickMenuInUse");

	Params::UWid_Inventory_Grid_Main_C_QuickMenuInUse_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.UpdateButtonsInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               CallFunc_IsQuickUseOpen_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsItemGrabActive_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSplitItem_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSplitItem_Result_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsItemGrabActive_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsItemGrabActive_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCheckItem_Item                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBePutToQuickMenu_Result                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanRemoveThisItem_CanBeRemoved                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_1                  (HasGetValueTypeHash)
// bool                               CallFunc_CanBeRemoved_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeGrabbed_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_2                  (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUseIndicator_Text                                    (None)
// bool                               CallFunc_GetUseIndicator_Update                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_3                  (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_CanBeUsed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_4                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (HasGetValueTypeHash)

void UWid_Inventory_Grid_Main_C::UpdateButtonsInfo(bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, bool CallFunc_IsQuickUseOpen_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsItemGrabActive_ReturnValue, bool CallFunc_CanSplitItem_Result, bool CallFunc_CanSplitItem_Result_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsItemGrabActive_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsItemGrabActive_ReturnValue_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCheckItem_Item, bool CallFunc_CanBePutToQuickMenu_Result, bool CallFunc_CanRemoveThisItem_CanBeRemoved, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, bool CallFunc_CanBeRemoved_Result, bool CallFunc_CanBeGrabbed_Result, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, bool CallFunc_BooleanAND_ReturnValue_4, class FText CallFunc_GetUseIndicator_Text, bool CallFunc_GetUseIndicator_Update, bool CallFunc_BooleanAND_ReturnValue_5, class FText K2Node_Select_Default, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, class FText K2Node_Select_Default_1, bool CallFunc_CanBeUsed_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_4, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "UpdateButtonsInfo");

	Params::UWid_Inventory_Grid_Main_C_UpdateButtonsInfo_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_IsQuickUseOpen_Result = CallFunc_IsQuickUseOpen_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsItemGrabActive_ReturnValue = CallFunc_IsItemGrabActive_ReturnValue;
	Parms.CallFunc_CanSplitItem_Result = CallFunc_CanSplitItem_Result;
	Parms.CallFunc_CanSplitItem_Result_1 = CallFunc_CanSplitItem_Result_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsItemGrabActive_ReturnValue_1 = CallFunc_IsItemGrabActive_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsItemGrabActive_ReturnValue_2 = CallFunc_IsItemGrabActive_ReturnValue_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.CallFunc_GetCheckItem_Item = CallFunc_GetCheckItem_Item;
	Parms.CallFunc_CanBePutToQuickMenu_Result = CallFunc_CanBePutToQuickMenu_Result;
	Parms.CallFunc_CanRemoveThisItem_CanBeRemoved = CallFunc_CanRemoveThisItem_CanBeRemoved;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;
	Parms.CallFunc_CanBeRemoved_Result = CallFunc_CanBeRemoved_Result;
	Parms.CallFunc_CanBeGrabbed_Result = CallFunc_CanBeGrabbed_Result;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_GetUseIndicator_Text = CallFunc_GetUseIndicator_Text;
	Parms.CallFunc_GetUseIndicator_Update = CallFunc_GetUseIndicator_Update;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_3 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_CanBeUsed_ReturnValue = CallFunc_CanBeUsed_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_4 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_4;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.IsItemGrabActive
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_Inventory_Grid_Main_C::IsItemGrabActive(bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "IsItemGrabActive");

	Params::UWid_Inventory_Grid_Main_C_IsItemGrabActive_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.ChangeApp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IWid_IInventoryGridApp_C>NextApp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_Grid_Main_C::ChangeApp(TScriptInterface<class IWid_IInventoryGridApp_C> NextApp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "ChangeApp");

	Params::UWid_Inventory_Grid_Main_C_ChangeApp_Params Parms{};

	Parms.NextApp = NextApp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.GetCurrentSelection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWid_Inventory_Grid_Entry_C* CurrentSelection                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Grid_Main_C::GetCurrentSelection(class UWid_Inventory_Grid_Entry_C** CurrentSelection, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "GetCurrentSelection");

	Params::UWid_Inventory_Grid_Main_C_GetCurrentSelection_Params Parms{};

	Parms.CallFunc_GetCurrentSelection_CurrentSelection = CallFunc_GetCurrentSelection_CurrentSelection;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentSelection != nullptr)
		*CurrentSelection = Parms.CurrentSelection;

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInStorage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsInStorageInventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IgnoreSelection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_Grid_Main_C::Update(const struct FVector2D& Size, bool IsInStorage, bool IsInStorageInventory, bool IgnoreSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "Update");

	Params::UWid_Inventory_Grid_Main_C_Update_Params Parms{};

	Parms.Size = Size;
	Parms.IsInStorage = IsInStorage;
	Parms.IsInStorageInventory = IsInStorageInventory;
	Parms.IgnoreSelection = IgnoreSelection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.QuickUse1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::QuickUse1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "QuickUse1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.QuickUse2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::QuickUse2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "QuickUse2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.QuickUse3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::QuickUse3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "QuickUse3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.QuickUse4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::QuickUse4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "QuickUse4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.QuickUse5
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::QuickUse5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "QuickUse5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.QuickUse6
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::QuickUse6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "QuickUse6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.QuickUse7
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::QuickUse7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "QuickUse7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.QuickUse8
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::QuickUse8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "QuickUse8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.Assign
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::Assign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "Assign");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.Back
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.FaceRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::FaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "FaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.FaceUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::FaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "FaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.GoBackGrid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::GoBackGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "GoBackGrid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.GrabItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Grid_Main_C::GrabItem(const struct FVector2D& Index, class FName ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "GrabItem");

	Params::UWid_Inventory_Grid_Main_C_GrabItem_Params Parms{};

	Parms.Index = Index;
	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.GoBackGrabPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::GoBackGrabPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "GoBackGrabPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.FaceDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::FaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "FaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.NewSelectionGrid
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromKeyboard                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_Grid_Main_C::NewSelectionGrid(const struct FVector2D& Index, bool FromKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "NewSelectionGrid");

	Params::UWid_Inventory_Grid_Main_C_NewSelectionGrid_Params Parms{};

	Parms.Index = Index;
	Parms.FromKeyboard = FromKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.OnMovedGrabPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Grid_Main_C::OnMovedGrabPanel(const struct FVector2D& Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "OnMovedGrabPanel");

	Params::UWid_Inventory_Grid_Main_C_OnMovedGrabPanel_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.L2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::L2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "L2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.r2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::R2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "r2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.RightStick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::RightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "RightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.SwapEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::SwapEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "SwapEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.DPadUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.DPadRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.DPadDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.DPadLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.SelectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Idx                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Grid_Main_C::SelectItem(const struct FVector2D& Idx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "SelectItem");

	Params::UWid_Inventory_Grid_Main_C_SelectItem_Params Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.ReleaseButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::ReleaseButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "ReleaseButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.MovedForced
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Grid_Main_C::MovedForced(const struct FVector2D& Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "MovedForced");

	Params::UWid_Inventory_Grid_Main_C_MovedForced_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.FaceLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::FaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "FaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.SplitItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Grid_Main_C::SplitItem(const struct FVector2D& Index, class FName ItemId, float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "SplitItem");

	Params::UWid_Inventory_Grid_Main_C_SplitItem_Params Parms{};

	Parms.Index = Index;
	Parms.ItemId = ItemId;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.FaceUpReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::FaceUpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "FaceUpReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.GrabItemFromButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::GrabItemFromButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "GrabItemFromButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.SplitItemFromButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::SplitItemFromButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "SplitItemFromButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.ExecuteUbergraph_wid_Inventory_Grid_Main
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (HasGetValueTypeHash)
// class UWid_Inventory_Grid_C*       K2Node_DynamicCast_AsWid_Inventory_Grid                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_1                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_2                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_3                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_4                  (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_Start_self_CastInput                                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_Index_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ItemID_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// struct FVector2D                   CallFunc_GetTileSize_TileSize                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Index_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_FromKeyboard                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_Index_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_5                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_6                  (HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Event_Idx                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_Index_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_End_self_CastInput                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ItemID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_7                  (HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetTileSize_TileSize_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_C*       K2Node_DynamicCast_AsWid_Inventory_Grid_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_GrabPanel_C*K2Node_DynamicCast_AsWid_Inventory_Grid_Grab_Panel               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_FaceUp_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSplitItem_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSplitItem_Result_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_8                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_9                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1            (HasGetValueTypeHash)

void UWid_Inventory_Grid_Main_C::ExecuteUbergraph_wid_Inventory_Grid_Main(int32 EntryPoint, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, class UWid_Inventory_Grid_C* K2Node_DynamicCast_AsWid_Inventory_Grid, bool K2Node_DynamicCast_bSuccess, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_4, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanOR_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_Start_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FVector2D& K2Node_CustomEvent_Index_4, class FName K2Node_CustomEvent_ItemID_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FVector2D& CallFunc_GetTileSize_TileSize, const struct FVector2D& K2Node_CustomEvent_Index_3, bool K2Node_CustomEvent_FromKeyboard, const struct FVector2D& K2Node_CustomEvent_Index_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_5, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_6, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_2, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, const struct FVector2D& K2Node_Event_Idx, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, const struct FVector2D& K2Node_CustomEvent_Index_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue_3, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_End_self_CastInput, const struct FVector2D& K2Node_CustomEvent_Index, class FName K2Node_CustomEvent_ItemID, float K2Node_CustomEvent_Amount, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_4, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_7, const struct FVector2D& CallFunc_GetTileSize_TileSize_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_4, class UWid_Inventory_Grid_C* K2Node_DynamicCast_AsWid_Inventory_Grid_1, bool K2Node_DynamicCast_bSuccess_1, class UWid_Inventory_Grid_GrabPanel_C* K2Node_DynamicCast_AsWid_Inventory_Grid_Grab_Panel, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_FaceUp_self_CastInput, bool CallFunc_CanSplitItem_Result, bool CallFunc_CanSplitItem_Result_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_8, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_9, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "ExecuteUbergraph_wid_Inventory_Grid_Main");

	Params::UWid_Inventory_Grid_Main_C_ExecuteUbergraph_wid_Inventory_Grid_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.K2Node_DynamicCast_AsWid_Inventory_Grid = K2Node_DynamicCast_AsWid_Inventory_Grid;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_3 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_4 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_Start_self_CastInput = CallFunc_Start_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Index_4 = K2Node_CustomEvent_Index_4;
	Parms.K2Node_CustomEvent_ItemID_1 = K2Node_CustomEvent_ItemID_1;
	Parms.CallFunc_ChangeApp_NextApp_CastInput = CallFunc_ChangeApp_NextApp_CastInput;
	Parms.CallFunc_ChangeApp_NextApp_CastInput_1 = CallFunc_ChangeApp_NextApp_CastInput_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetTileSize_TileSize = CallFunc_GetTileSize_TileSize;
	Parms.K2Node_CustomEvent_Index_3 = K2Node_CustomEvent_Index_3;
	Parms.K2Node_CustomEvent_FromKeyboard = K2Node_CustomEvent_FromKeyboard;
	Parms.K2Node_CustomEvent_Index_2 = K2Node_CustomEvent_Index_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_5 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_5;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_6 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_6;
	Parms.CallFunc_ChangeApp_NextApp_CastInput_2 = CallFunc_ChangeApp_NextApp_CastInput_2;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection = CallFunc_GetCurrentSelection_CurrentSelection;
	Parms.K2Node_Event_Idx = K2Node_Event_Idx;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_2 = CallFunc_NotEqual_ObjectObject_ReturnValue_2;
	Parms.K2Node_CustomEvent_Index_1 = K2Node_CustomEvent_Index_1;
	Parms.CallFunc_GetAt_OutputPin = CallFunc_GetAt_OutputPin;
	Parms.CallFunc_ChangeApp_NextApp_CastInput_3 = CallFunc_ChangeApp_NextApp_CastInput_3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_3 = CallFunc_NotEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_1 = CallFunc_GetCurrentSelection_CurrentSelection_1;
	Parms.CallFunc_End_self_CastInput = CallFunc_End_self_CastInput;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_ItemID = K2Node_CustomEvent_ItemID;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_ChangeApp_NextApp_CastInput_4 = CallFunc_ChangeApp_NextApp_CastInput_4;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_7 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_7;
	Parms.CallFunc_GetTileSize_TileSize_1 = CallFunc_GetTileSize_TileSize_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_4 = CallFunc_NotEqual_ObjectObject_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsWid_Inventory_Grid_1 = K2Node_DynamicCast_AsWid_Inventory_Grid_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsWid_Inventory_Grid_Grab_Panel = K2Node_DynamicCast_AsWid_Inventory_Grid_Grab_Panel;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_FaceUp_self_CastInput = CallFunc_FaceUp_self_CastInput;
	Parms.CallFunc_CanSplitItem_Result = CallFunc_CanSplitItem_Result;
	Parms.CallFunc_CanSplitItem_Result_1 = CallFunc_CanSplitItem_Result_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_8 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_8;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_9 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_9;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.UpdateButtons__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoInfo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_Inventory_Grid_Main_C::UpdateButtons__DelegateSignature(const struct FStruct_Inventory_ButtonModifyInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "UpdateButtons__DelegateSignature");

	Params::UWid_Inventory_Grid_Main_C_UpdateButtons__DelegateSignature_Params Parms{};

	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.NewSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromKeyboard                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_Grid_Main_C::NewSelection__DelegateSignature(class FName Name, bool FromKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "NewSelection__DelegateSignature");

	Params::UWid_Inventory_Grid_Main_C_NewSelection__DelegateSignature_Params Parms{};

	Parms.Name = Name;
	Parms.FromKeyboard = FromKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C.GoBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Main_C::GoBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Main_C", "GoBack__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


