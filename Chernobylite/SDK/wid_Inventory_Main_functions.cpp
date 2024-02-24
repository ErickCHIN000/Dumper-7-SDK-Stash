#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Inventory_Main.wid_Inventory_Main_C
// (None)

class UClass* UWid_Inventory_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Inventory_Main_C");

	return Clss;
}


// wid_Inventory_Main_C wid_Inventory_Main.Default__wid_Inventory_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Inventory_Main_C* UWid_Inventory_Main_C::GetDefaultObj()
{
	static class UWid_Inventory_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Inventory_Main_C*>(UWid_Inventory_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Inventory_Main.wid_Inventory_Main_C.ShowTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Main_C::ShowTutorial(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "ShowTutorial");

	Params::UWid_Inventory_Main_C_ShowTutorial_Params Parms{};

	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.ChangeApp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IWid_IInventoryApp_C>NewApp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_Main_C::ChangeApp(TScriptInterface<class IWid_IInventoryApp_C> NewApp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "ChangeApp");

	Params::UWid_Inventory_Main_C_ChangeApp_Params Parms{};

	Parms.NewApp = NewApp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputFaceDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.QuickMenuUpdatedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::QuickMenuUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "QuickMenuUpdatedDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InventoryUpdatedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InventoryUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InventoryUpdatedDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.DPadUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.DPadRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.DPadDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.DPadLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputLeftStick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputLeftStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputLeftStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputFaceRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.GoBackQuickMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::GoBackQuickMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "GoBackQuickMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputFaceUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputFaceLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputFaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputFaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.GoBackGridMain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::GoBackGridMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "GoBackGridMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.NewSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromKeyboard                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_Main_C::NewSelection(class FName Name, bool FromKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "NewSelection");

	Params::UWid_Inventory_Main_C_NewSelection_Params Parms{};

	Parms.Name = Name;
	Parms.FromKeyboard = FromKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_Main_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "PreConstruct");

	Params::UWid_Inventory_Main_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputR2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputR2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputR2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputL2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputL2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputL2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputRightStick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputRightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputRightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.QuickUse1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::QuickUse1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "QuickUse1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.QuickUse2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::QuickUse2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "QuickUse2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.QuickUse3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::QuickUse3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "QuickUse3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.QuickUse4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::QuickUse4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "QuickUse4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputFaceLeftReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputFaceLeftReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputFaceLeftReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.UpdateButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoInfo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_Inventory_Main_C::UpdateButtons(const struct FStruct_Inventory_ButtonModifyInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "UpdateButtons");

	Params::UWid_Inventory_Main_C_UpdateButtons_Params Parms{};

	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.QuickUse5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::QuickUse5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "QuickUse5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.QuickUse6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::QuickUse6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "QuickUse6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.QuickUse7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::QuickUse7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "QuickUse7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.QuickUse8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::QuickUse8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "QuickUse8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputAssign
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputAssign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputAssign");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.AppClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::AppClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "AppClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.UnbindInventoryUpdatedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::UnbindInventoryUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "UnbindInventoryUpdatedDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.Sort Inventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::Sort_Inventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "Sort Inventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.BackClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::BackClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "BackClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.InputFaceUpReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::InputFaceUpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "InputFaceUpReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.GrabItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::GrabItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "GrabItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.AppOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::AppOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "AppOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.OnQuickMenuStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_Main_C::OnQuickMenuStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "OnQuickMenuStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Main.wid_Inventory_Main_C.ExecuteUbergraph_wid_Inventory_Main
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_QuickMenuInUse_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_1                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_2                  (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_ChangeApp_NewApp_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_CloseInventory_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_ChangeApp_NewApp_CastInput_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_Start_self_CastInput                                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCheckItem_Item                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBePutToQuickMenu_Result                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Name                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_FromKeyboard                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_CustomEvent_Info                                          (HasGetValueTypeHash)
// bool                               CallFunc_SortBySize_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_QuickMenuInUse_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class UWid_Inventory_QuickMenu_C*  K2Node_DynamicCast_AsWid_Inventory_Quick_Menu                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class UWid_Inventory_QuickMenu_C*  K2Node_DynamicCast_AsWid_Inventory_Quick_Menu_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_3                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (HasGetValueTypeHash)

void UWid_Inventory_Main_C::ExecuteUbergraph_wid_Inventory_Main(int32 EntryPoint, bool CallFunc_QuickMenuInUse_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_CloseInventory_ReturnValue, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput_1, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_Start_self_CastInput, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCheckItem_Item, bool CallFunc_CanBePutToQuickMenu_Result, class FName K2Node_CustomEvent_Name, bool K2Node_CustomEvent_FromKeyboard, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_CustomEvent_Info, bool CallFunc_SortBySize_ReturnValue, bool CallFunc_LastInputWasFromGamepad_Gamepad, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_QuickMenuInUse_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UWid_Inventory_QuickMenu_C* K2Node_DynamicCast_AsWid_Inventory_Quick_Menu, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UWid_Inventory_QuickMenu_C* K2Node_DynamicCast_AsWid_Inventory_Quick_Menu_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Main_C", "ExecuteUbergraph_wid_Inventory_Main");

	Params::UWid_Inventory_Main_C_ExecuteUbergraph_wid_Inventory_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_QuickMenuInUse_ReturnValue = CallFunc_QuickMenuInUse_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_ChangeApp_NewApp_CastInput = CallFunc_ChangeApp_NewApp_CastInput;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_CloseInventory_ReturnValue = CallFunc_CloseInventory_ReturnValue;
	Parms.CallFunc_ChangeApp_NewApp_CastInput_1 = CallFunc_ChangeApp_NewApp_CastInput_1;
	Parms.CallFunc_Start_self_CastInput = CallFunc_Start_self_CastInput;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_GetCheckItem_Item = CallFunc_GetCheckItem_Item;
	Parms.CallFunc_CanBePutToQuickMenu_Result = CallFunc_CanBePutToQuickMenu_Result;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_FromKeyboard = K2Node_CustomEvent_FromKeyboard;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.K2Node_CustomEvent_Info = K2Node_CustomEvent_Info;
	Parms.CallFunc_SortBySize_ReturnValue = CallFunc_SortBySize_ReturnValue;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad = CallFunc_LastInputWasFromGamepad_Gamepad;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_QuickMenuInUse_ReturnValue_1 = CallFunc_QuickMenuInUse_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_DynamicCast_AsWid_Inventory_Quick_Menu = K2Node_DynamicCast_AsWid_Inventory_Quick_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_DynamicCast_AsWid_Inventory_Quick_Menu_1 = K2Node_DynamicCast_AsWid_Inventory_Quick_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetMousePosition_LocationX = CallFunc_GetMousePosition_LocationX;
	Parms.CallFunc_GetMousePosition_LocationY = CallFunc_GetMousePosition_LocationY;
	Parms.CallFunc_GetMousePosition_ReturnValue = CallFunc_GetMousePosition_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_3 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


