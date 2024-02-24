#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C
// (None)

class UClass* UWid_Storage_v2_Grid_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Storage_v2_Grid_Main_C");

	return Clss;
}


// wid_Storage_v2_Grid_Main_C wid_Storage_v2_Grid_Main.Default__wid_Storage_v2_Grid_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Storage_v2_Grid_Main_C* UWid_Storage_v2_Grid_Main_C::GetDefaultObj()
{
	static class UWid_Storage_v2_Grid_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Storage_v2_Grid_Main_C*>(UWid_Storage_v2_Grid_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.ChangeApp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IWid_IInventoryGridApp_C>NextApp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_v2_Grid_Main_C::ChangeApp(TScriptInterface<class IWid_IInventoryGridApp_C> NextApp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "ChangeApp");

	Params::UWid_Storage_v2_Grid_Main_C_ChangeApp_Params Parms{};

	Parms.NextApp = NextApp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.GetCurrentSelection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWid_Inventory_Grid_Entry_C* CurrentSelection                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_v2_Grid_Main_C::GetCurrentSelection(class UWid_Inventory_Grid_Entry_C** CurrentSelection, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "GetCurrentSelection");

	Params::UWid_Storage_v2_Grid_Main_C_GetCurrentSelection_Params Parms{};

	Parms.CallFunc_GetCurrentSelection_CurrentSelection = CallFunc_GetCurrentSelection_CurrentSelection;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentSelection != nullptr)
		*CurrentSelection = Parms.CurrentSelection;

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInStorage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsInStorageInventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IgnoreSelection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PerformFullClear                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_v2_Grid_Main_C::Update(const struct FVector2D& Size, bool IsInStorage, bool IsInStorageInventory, bool IgnoreSelection, bool PerformFullClear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "Update");

	Params::UWid_Storage_v2_Grid_Main_C_Update_Params Parms{};

	Parms.Size = Size;
	Parms.IsInStorage = IsInStorage;
	Parms.IsInStorageInventory = IsInStorageInventory;
	Parms.IgnoreSelection = IgnoreSelection;
	Parms.PerformFullClear = PerformFullClear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.QuickUse1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::QuickUse1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "QuickUse1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.QuickUse2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::QuickUse2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "QuickUse2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.QuickUse3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::QuickUse3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "QuickUse3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.QuickUse4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::QuickUse4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "QuickUse4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.QuickUse5
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::QuickUse5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "QuickUse5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.QuickUse6
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::QuickUse6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "QuickUse6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.QuickUse7
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::QuickUse7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "QuickUse7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.QuickUse8
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::QuickUse8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "QuickUse8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.Assign
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::Assign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "Assign");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.Back
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.FaceRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::FaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "FaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.FaceUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::FaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "FaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.GoBackGrid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::GoBackGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "GoBackGrid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.GrabItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_v2_Grid_Main_C::GrabItem(const struct FVector2D& Index, class FName ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "GrabItem");

	Params::UWid_Storage_v2_Grid_Main_C_GrabItem_Params Parms{};

	Parms.Index = Index;
	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.GoBackGrabPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::GoBackGrabPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "GoBackGrabPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.FaceDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::FaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "FaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.NewSelectionGrid
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromKeyboard                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_v2_Grid_Main_C::NewSelectionGrid(const struct FVector2D& Index, bool FromKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "NewSelectionGrid");

	Params::UWid_Storage_v2_Grid_Main_C_NewSelectionGrid_Params Parms{};

	Parms.Index = Index;
	Parms.FromKeyboard = FromKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.OnMovedGrabPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_v2_Grid_Main_C::OnMovedGrabPanel(const struct FVector2D& Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "OnMovedGrabPanel");

	Params::UWid_Storage_v2_Grid_Main_C_OnMovedGrabPanel_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.L2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::L2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "L2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.r2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::R2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "r2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.RightStick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::RightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "RightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.SwapEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::SwapEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "SwapEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.DPadUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.DPadRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.DPadDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.DPadLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.SelectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Idx                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_v2_Grid_Main_C::SelectItem(const struct FVector2D& Idx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "SelectItem");

	Params::UWid_Storage_v2_Grid_Main_C_SelectItem_Params Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.ReleaseButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::ReleaseButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "ReleaseButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.MovedForced
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_v2_Grid_Main_C::MovedForced(const struct FVector2D& Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "MovedForced");

	Params::UWid_Storage_v2_Grid_Main_C_MovedForced_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.FaceLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::FaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "FaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.SplitItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_v2_Grid_Main_C::SplitItem(const struct FVector2D& Index, class FName ItemId, float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "SplitItem");

	Params::UWid_Storage_v2_Grid_Main_C_SplitItem_Params Parms{};

	Parms.Index = Index;
	Parms.ItemId = ItemId;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.FaceUpReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::FaceUpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "FaceUpReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.ExecuteUbergraph_wid_Storage_v2_Grid_Main
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_1                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_2                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_3                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_4                  (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_5                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_6                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_7                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_8                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_9                  (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_10                 (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_11                 (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_12                 (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_13                 (HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// bool                               CallFunc_GetCanBeDropped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGActiveItem>   K2Node_ClassDynamicCast_AsCGActive_Item                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GetItemInfo_IsValid_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue_1                               (None)
// bool                               CallFunc_GetCanBeDropped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGActiveItem>   K2Node_ClassDynamicCast_AsCGActive_Item_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCanBeDropped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_14                 (HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue_2                               (None)
// bool                               CallFunc_GetCanBeDropped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ACGActiveItem>   K2Node_ClassDynamicCast_AsCGActive_Item_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_15                 (HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Index_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ItemID_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItemInfo_IsValid_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue_3                               (None)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_3            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ACGActiveItem>   K2Node_ClassDynamicCast_AsCGActive_Item_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_16                 (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_Index_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_FromKeyboard                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_Index_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Event_Idx                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_Index_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeRemoved_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeGrabbed_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_17                 (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_18                 (HasGetValueTypeHash)
// bool                               CallFunc_CanBeUsed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBePutToQuickMenu_Result                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_19                 (HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetTileSize_TileSize                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetMaxSize_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetMaxSize_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ItemID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetTileSize_TileSize_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSplitItem_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_20                 (HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetMaxSize_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSplitItem_Result_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_21                 (HasGetValueTypeHash)
// bool                               CallFunc_CanSplitItem_Result_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1            (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_22                 (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_2            (HasGetValueTypeHash)
// bool                               CallFunc_CanSplitItem_Result_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_23                 (HasGetValueTypeHash)
// bool                               CallFunc_CanSplitItem_Result_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_3            (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_24                 (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_4            (HasGetValueTypeHash)

void UWid_Storage_v2_Grid_Main_C::ExecuteUbergraph_wid_Storage_v2_Grid_Main(int32 EntryPoint, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_5, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_6, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_7, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_8, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_10, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_11, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_12, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_13, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, bool CallFunc_GetCanBeDropped_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_GetItemInfo_IsValid_1, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue_1, bool CallFunc_GetCanBeDropped_ReturnValue_1, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item_1, bool K2Node_ClassDynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_GetCanBeDropped_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, bool CallFunc_GetItemInfo_IsValid_2, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue_2, bool CallFunc_GetCanBeDropped_ReturnValue_3, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item_2, bool K2Node_ClassDynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_5, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_15, const struct FVector2D& K2Node_CustomEvent_Index_4, class FName K2Node_CustomEvent_ItemID_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput, bool CallFunc_GetItemInfo_IsValid_3, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue_3, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_3, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item_3, bool K2Node_ClassDynamicCast_bSuccess_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_7, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FVector2D& K2Node_CustomEvent_Index_3, bool K2Node_CustomEvent_FromKeyboard, const struct FVector2D& K2Node_CustomEvent_Index_2, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& K2Node_Event_Idx, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, const struct FVector2D& K2Node_CustomEvent_Index_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, bool CallFunc_CanBeRemoved_Result, bool CallFunc_CanBeGrabbed_Result, bool CallFunc_BooleanAND_ReturnValue_8, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_17, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_18, bool CallFunc_CanBeUsed_ReturnValue, bool CallFunc_CanBePutToQuickMenu_Result, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_19, const struct FVector2D& CallFunc_GetTileSize_TileSize, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, const struct FVector2D& CallFunc_GetMaxSize_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetMaxSize_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_4, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, bool CallFunc_Greater_FloatFloat_ReturnValue_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_2, const struct FVector2D& K2Node_CustomEvent_Index, class FName K2Node_CustomEvent_ItemID, float K2Node_CustomEvent_Amount, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_3, const struct FVector2D& CallFunc_GetTileSize_TileSize_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, bool CallFunc_CanSplitItem_Result, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_20, const struct FVector2D& CallFunc_GetMaxSize_ReturnValue_2, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_NotEqual_ObjectObject_ReturnValue_3, bool CallFunc_CanSplitItem_Result_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_21, bool CallFunc_CanSplitItem_Result_2, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_22, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_2, bool CallFunc_CanSplitItem_Result_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_23, bool CallFunc_CanSplitItem_Result_4, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_24, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "ExecuteUbergraph_wid_Storage_v2_Grid_Main");

	Params::UWid_Storage_v2_Grid_Main_C_ExecuteUbergraph_wid_Storage_v2_Grid_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_3 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_4 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_5 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_5;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_6 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_6;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_7 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_7;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_8 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_8;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_9 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_10 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_10;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_11 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_11;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_12 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_12;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_13 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_13;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.CallFunc_GetCanBeDropped_ReturnValue = CallFunc_GetCanBeDropped_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.K2Node_ClassDynamicCast_AsCGActive_Item = K2Node_ClassDynamicCast_AsCGActive_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetItemInfo_IsValid_1 = CallFunc_GetItemInfo_IsValid_1;
	Parms.CallFunc_GetItemInfo_ReturnValue_1 = CallFunc_GetItemInfo_ReturnValue_1;
	Parms.CallFunc_GetCanBeDropped_ReturnValue_1 = CallFunc_GetCanBeDropped_ReturnValue_1;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1 = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.K2Node_ClassDynamicCast_AsCGActive_Item_1 = K2Node_ClassDynamicCast_AsCGActive_Item_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_GetCanBeDropped_ReturnValue_2 = CallFunc_GetCanBeDropped_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_14 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_14;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_GetItemInfo_IsValid_2 = CallFunc_GetItemInfo_IsValid_2;
	Parms.CallFunc_GetItemInfo_ReturnValue_2 = CallFunc_GetItemInfo_ReturnValue_2;
	Parms.CallFunc_GetCanBeDropped_ReturnValue_3 = CallFunc_GetCanBeDropped_ReturnValue_3;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2 = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2;
	Parms.K2Node_ClassDynamicCast_AsCGActive_Item_2 = K2Node_ClassDynamicCast_AsCGActive_Item_2;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_15 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_15;
	Parms.K2Node_CustomEvent_Index_4 = K2Node_CustomEvent_Index_4;
	Parms.K2Node_CustomEvent_ItemID_1 = K2Node_CustomEvent_ItemID_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.CallFunc_ChangeApp_NextApp_CastInput = CallFunc_ChangeApp_NextApp_CastInput;
	Parms.CallFunc_GetItemInfo_IsValid_3 = CallFunc_GetItemInfo_IsValid_3;
	Parms.CallFunc_GetItemInfo_ReturnValue_3 = CallFunc_GetItemInfo_ReturnValue_3;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_3 = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_3;
	Parms.K2Node_ClassDynamicCast_AsCGActive_Item_3 = K2Node_ClassDynamicCast_AsCGActive_Item_3;
	Parms.K2Node_ClassDynamicCast_bSuccess_3 = K2Node_ClassDynamicCast_bSuccess_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_16 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_Index_3 = K2Node_CustomEvent_Index_3;
	Parms.K2Node_CustomEvent_FromKeyboard = K2Node_CustomEvent_FromKeyboard;
	Parms.K2Node_CustomEvent_Index_2 = K2Node_CustomEvent_Index_2;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.K2Node_Event_Idx = K2Node_Event_Idx;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_CustomEvent_Index_1 = K2Node_CustomEvent_Index_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_2 = CallFunc_NotEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_GetAt_OutputPin = CallFunc_GetAt_OutputPin;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection = CallFunc_GetCurrentSelection_CurrentSelection;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_1 = CallFunc_GetCurrentSelection_CurrentSelection_1;
	Parms.CallFunc_CanBeRemoved_Result = CallFunc_CanBeRemoved_Result;
	Parms.CallFunc_CanBeGrabbed_Result = CallFunc_CanBeGrabbed_Result;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_17 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_17;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_18 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_18;
	Parms.CallFunc_CanBeUsed_ReturnValue = CallFunc_CanBeUsed_ReturnValue;
	Parms.CallFunc_CanBePutToQuickMenu_Result = CallFunc_CanBePutToQuickMenu_Result;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_19 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_19;
	Parms.CallFunc_GetTileSize_TileSize = CallFunc_GetTileSize_TileSize;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.CallFunc_GetMaxSize_ReturnValue = CallFunc_GetMaxSize_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMaxSize_ReturnValue_1 = CallFunc_GetMaxSize_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_ChangeApp_NextApp_CastInput_1 = CallFunc_ChangeApp_NextApp_CastInput_1;
	Parms.CallFunc_ChangeApp_NextApp_CastInput_2 = CallFunc_ChangeApp_NextApp_CastInput_2;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_ItemID = K2Node_CustomEvent_ItemID;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_ChangeApp_NextApp_CastInput_3 = CallFunc_ChangeApp_NextApp_CastInput_3;
	Parms.CallFunc_GetTileSize_TileSize_1 = CallFunc_GetTileSize_TileSize_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_CanSplitItem_Result = CallFunc_CanSplitItem_Result;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_20 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_20;
	Parms.CallFunc_GetMaxSize_ReturnValue_2 = CallFunc_GetMaxSize_ReturnValue_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_3 = CallFunc_NotEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_CanSplitItem_Result_1 = CallFunc_CanSplitItem_Result_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_21 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_21;
	Parms.CallFunc_CanSplitItem_Result_2 = CallFunc_CanSplitItem_Result_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_22 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_22;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_2;
	Parms.CallFunc_CanSplitItem_Result_3 = CallFunc_CanSplitItem_Result_3;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_23 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_23;
	Parms.CallFunc_CanSplitItem_Result_4 = CallFunc_CanSplitItem_Result_4;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_3 = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_3;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_24 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_24;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_4 = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.UpdateButtons__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoInfo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_Storage_v2_Grid_Main_C::UpdateButtons__DelegateSignature(const struct FStruct_Inventory_ButtonModifyInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "UpdateButtons__DelegateSignature");

	Params::UWid_Storage_v2_Grid_Main_C_UpdateButtons__DelegateSignature_Params Parms{};

	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.NewSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromKeyboard                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_v2_Grid_Main_C::NewSelection__DelegateSignature(class FName Name, bool FromKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "NewSelection__DelegateSignature");

	Params::UWid_Storage_v2_Grid_Main_C_NewSelection__DelegateSignature_Params Parms{};

	Parms.Name = Name;
	Parms.FromKeyboard = FromKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.GoBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Grid_Main_C::GoBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Grid_Main_C", "GoBack__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


