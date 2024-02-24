#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Storage_Grid_Main.wid_Storage_Grid_Main_C
// (None)

class UClass* UWid_Storage_Grid_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Storage_Grid_Main_C");

	return Clss;
}


// wid_Storage_Grid_Main_C wid_Storage_Grid_Main.Default__wid_Storage_Grid_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Storage_Grid_Main_C* UWid_Storage_Grid_Main_C::GetDefaultObj()
{
	static class UWid_Storage_Grid_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Storage_Grid_Main_C*>(UWid_Storage_Grid_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.ChangeApp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IWid_IInventoryGridApp_C>NextApp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Grid_Main_C::ChangeApp(TScriptInterface<class IWid_IInventoryGridApp_C> NextApp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "ChangeApp");

	Params::UWid_Storage_Grid_Main_C_ChangeApp_Params Parms{};

	Parms.NextApp = NextApp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.GetCurrentSelection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWid_Inventory_Grid_Entry_C* CurrentSelection                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_Main_C::GetCurrentSelection(class UWid_Inventory_Grid_Entry_C** CurrentSelection, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "GetCurrentSelection");

	Params::UWid_Storage_Grid_Main_C_GetCurrentSelection_Params Parms{};

	Parms.CallFunc_GetCurrentSelection_CurrentSelection = CallFunc_GetCurrentSelection_CurrentSelection;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentSelection != nullptr)
		*CurrentSelection = Parms.CurrentSelection;

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IgnoreSelection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsInEnemyInventory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Grid_Main_C::Update(const struct FVector2D& Size, bool IgnoreSelection, bool IsInEnemyInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "Update");

	Params::UWid_Storage_Grid_Main_C_Update_Params Parms{};

	Parms.Size = Size;
	Parms.IgnoreSelection = IgnoreSelection;
	Parms.IsInEnemyInventory = IsInEnemyInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.FaceLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::FaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "FaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.QuickUse1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::QuickUse1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "QuickUse1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.QuickUse2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::QuickUse2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "QuickUse2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.QuickUse3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::QuickUse3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "QuickUse3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.QuickUse4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::QuickUse4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "QuickUse4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.SelectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Idx                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_Main_C::SelectItem(const struct FVector2D& Idx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "SelectItem");

	Params::UWid_Storage_Grid_Main_C_SelectItem_Params Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.QuickUse5
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::QuickUse5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "QuickUse5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.QuickUse6
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::QuickUse6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "QuickUse6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.QuickUse7
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::QuickUse7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "QuickUse7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.QuickUse8
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::QuickUse8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "QuickUse8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.Assign
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::Assign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "Assign");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.Back
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.FaceUpReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::FaceUpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "FaceUpReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.FaceRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::FaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "FaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.FaceUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::FaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "FaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.GoBackGrid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::GoBackGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "GoBackGrid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.GrabItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_Main_C::GrabItem(const struct FVector2D& Index, class FName ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "GrabItem");

	Params::UWid_Storage_Grid_Main_C_GrabItem_Params Parms{};

	Parms.Index = Index;
	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.InputOpenPDA
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::InputOpenPDA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "InputOpenPDA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.GoBackGrabPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::GoBackGrabPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "GoBackGrabPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.FaceDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::FaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "FaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.NewSelectionGrid
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_Main_C::NewSelectionGrid(const struct FVector2D& Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "NewSelectionGrid");

	Params::UWid_Storage_Grid_Main_C_NewSelectionGrid_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.OnMovedGrabPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_Main_C::OnMovedGrabPanel(const struct FVector2D& Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "OnMovedGrabPanel");

	Params::UWid_Storage_Grid_Main_C_OnMovedGrabPanel_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.L2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::L2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "L2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.r2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::R2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "r2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.RightStick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::RightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "RightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.SwapEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::SwapEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "SwapEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.InputActivateTutorial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::InputActivateTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "InputActivateTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.DPadUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.DPadRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.DPadDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.DPadLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.ReleaseButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::ReleaseButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "ReleaseButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.ForceDropMOved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_Main_C::ForceDropMOved(const struct FVector2D& Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "ForceDropMOved");

	Params::UWid_Storage_Grid_Main_C_ForceDropMOved_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.ExecuteUbergraph_wid_Storage_Grid_Main
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_1                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_2                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_3                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FVector2D                   K2Node_Event_Idx                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Index_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ItemID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_Index_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Index_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// struct FVector2D                   CallFunc_GetTileSize_TileSize                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeRemoved_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeGrabbed_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_4                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_5                  (HasGetValueTypeHash)
// bool                               CallFunc_CanBeUsed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBePutToQuickMenu_Result                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_6                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_7                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1            (HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_Start_self_CastInput                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Grid_Main_C::ExecuteUbergraph_wid_Storage_Grid_Main(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FVector2D& K2Node_Event_Idx, const struct FVector2D& K2Node_CustomEvent_Index_3, class FName K2Node_CustomEvent_ItemID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FVector2D& K2Node_CustomEvent_Index_2, const struct FVector2D& K2Node_CustomEvent_Index_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FVector2D& CallFunc_GetTileSize_TileSize, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, bool CallFunc_CanBeRemoved_Result, bool CallFunc_CanBeGrabbed_Result, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_4, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_5, bool CallFunc_CanBeUsed_ReturnValue, bool CallFunc_CanBePutToQuickMenu_Result, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_6, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_7, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_Start_self_CastInput, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_2, const struct FVector2D& K2Node_CustomEvent_Index, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "ExecuteUbergraph_wid_Storage_Grid_Main");

	Params::UWid_Storage_Grid_Main_C_ExecuteUbergraph_wid_Storage_Grid_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_3 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_Idx = K2Node_Event_Idx;
	Parms.K2Node_CustomEvent_Index_3 = K2Node_CustomEvent_Index_3;
	Parms.K2Node_CustomEvent_ItemID = K2Node_CustomEvent_ItemID;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Index_2 = K2Node_CustomEvent_Index_2;
	Parms.K2Node_CustomEvent_Index_1 = K2Node_CustomEvent_Index_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetTileSize_TileSize = CallFunc_GetTileSize_TileSize;
	Parms.CallFunc_ChangeApp_NextApp_CastInput = CallFunc_ChangeApp_NextApp_CastInput;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection = CallFunc_GetCurrentSelection_CurrentSelection;
	Parms.CallFunc_CanBeRemoved_Result = CallFunc_CanBeRemoved_Result;
	Parms.CallFunc_CanBeGrabbed_Result = CallFunc_CanBeGrabbed_Result;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_4 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_4;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_5 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_5;
	Parms.CallFunc_CanBeUsed_ReturnValue = CallFunc_CanBeUsed_ReturnValue;
	Parms.CallFunc_CanBePutToQuickMenu_Result = CallFunc_CanBePutToQuickMenu_Result;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_6 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_6;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_7 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_7;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1;
	Parms.CallFunc_ChangeApp_NextApp_CastInput_1 = CallFunc_ChangeApp_NextApp_CastInput_1;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_1 = CallFunc_GetCurrentSelection_CurrentSelection_1;
	Parms.CallFunc_Start_self_CastInput = CallFunc_Start_self_CastInput;
	Parms.CallFunc_ChangeApp_NextApp_CastInput_2 = CallFunc_ChangeApp_NextApp_CastInput_2;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_2 = CallFunc_GetCurrentSelection_CurrentSelection_2;
	Parms.CallFunc_GetAt_OutputPin = CallFunc_GetAt_OutputPin;
	Parms.CallFunc_ChangeApp_NextApp_CastInput_3 = CallFunc_ChangeApp_NextApp_CastInput_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.MoveForced__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::MoveForced__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "MoveForced__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.UpdateButtons__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoInfo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_Storage_Grid_Main_C::UpdateButtons__DelegateSignature(const struct FStruct_Inventory_ButtonModifyInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "UpdateButtons__DelegateSignature");

	Params::UWid_Storage_Grid_Main_C_UpdateButtons__DelegateSignature_Params Parms{};

	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.NewSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_Main_C::NewSelection__DelegateSignature(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "NewSelection__DelegateSignature");

	Params::UWid_Storage_Grid_Main_C_NewSelection__DelegateSignature_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_Main.wid_Storage_Grid_Main_C.GoBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_Main_C::GoBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_Main_C", "GoBack__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


