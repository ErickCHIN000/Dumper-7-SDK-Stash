#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Storage_Main.wid_Storage_Main_C
// (None)

class UClass* UWid_Storage_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Storage_Main_C");

	return Clss;
}


// wid_Storage_Main_C wid_Storage_Main.Default__wid_Storage_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Storage_Main_C* UWid_Storage_Main_C::GetDefaultObj()
{
	static class UWid_Storage_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Storage_Main_C*>(UWid_Storage_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Storage_Main.wid_Storage_Main_C.SelectNewGrid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Main                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Storage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Mini                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Main_C::SelectNewGrid(bool Main, bool Storage, bool Mini, FDelegateProperty_ Temp_delegate_Variable, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "SelectNewGrid");

	Params::UWid_Storage_Main_C_SelectNewGrid_Params Parms{};

	Parms.Main = Main;
	Parms.Storage = Storage;
	Parms.Mini = Mini;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection = CallFunc_GetCurrentSelection_CurrentSelection;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_1 = CallFunc_GetCurrentSelection_CurrentSelection_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Main.wid_Storage_Main_C.MoveAllResourcesToStorage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentItemAmount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// TArray<enum class EResourceType>   K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class EResourceType           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetNameByResource_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           CallFunc_GetResourceByName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Remove_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Main_C::MoveAllResourcesToStorage(float CurrentItemAmount, FDelegateProperty_ Temp_delegate_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, TArray<enum class EResourceType>& K2Node_MakeArray_Array, enum class EResourceType CallFunc_Array_Get_Item, class FName CallFunc_GetNameByResource_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class EResourceType CallFunc_GetResourceByName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, float CallFunc_Remove_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, float CallFunc_Count_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "MoveAllResourcesToStorage");

	Params::UWid_Storage_Main_C_MoveAllResourcesToStorage_Params Parms{};

	Parms.CurrentItemAmount = CurrentItemAmount;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetNameByResource_ReturnValue = CallFunc_GetNameByResource_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetResourceByName_ReturnValue = CallFunc_GetResourceByName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_Remove_ReturnValue = CallFunc_Remove_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Main.wid_Storage_Main_C.ChangeApp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IWid_IInventoryApp_C>NewApp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Main_C::ChangeApp(TScriptInterface<class IWid_IInventoryApp_C> NewApp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "ChangeApp");

	Params::UWid_Storage_Main_C_ChangeApp_Params Parms{};

	Parms.NewApp = NewApp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Main.wid_Storage_Main_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Main_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "PreConstruct");

	Params::UWid_Storage_Main_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InventoryUpdatedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InventoryUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InventoryUpdatedDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputFaceDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.DPadUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.DPadRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.DPadDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.DPadLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputFaceRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputFaceUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputFaceLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputFaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputFaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.GoBackGridMain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::GoBackGridMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "GoBackGridMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputR2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputR2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputR2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputL2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputL2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputL2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputRightStick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputRightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputRightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.StorageUpdatedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::StorageUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "StorageUpdatedDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.UpdateButtonsStorage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoInfo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_Storage_Main_C::UpdateButtonsStorage(const struct FStruct_Inventory_ButtonModifyInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "UpdateButtonsStorage");

	Params::UWid_Storage_Main_C_UpdateButtonsStorage_Params Parms{};

	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputLeftStick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputLeftStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputLeftStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoInfo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_Storage_Main_C::CustomEvent_0(const struct FStruct_Inventory_ButtonModifyInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "CustomEvent_0");

	Params::UWid_Storage_Main_C_CustomEvent_0_Params Parms{};

	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Main.wid_Storage_Main_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoInfo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_Storage_Main_C::CustomEvent_1(const struct FStruct_Inventory_ButtonModifyInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "CustomEvent_1");

	Params::UWid_Storage_Main_C_CustomEvent_1_Params Parms{};

	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputLeftReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputLeftReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputLeftReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputRightReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputRightReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputRightReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.InputSplit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Main_C::InputSplit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "InputSplit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Main.wid_Storage_Main_C.NewSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromKeyboard                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Main_C::NewSelection(class FName Name, bool FromKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "NewSelection");

	Params::UWid_Storage_Main_C_NewSelection_Params Parms{};

	Parms.Name = Name;
	Parms.FromKeyboard = FromKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Main.wid_Storage_Main_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Main_C::CustomEvent_2(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "CustomEvent_2");

	Params::UWid_Storage_Main_C_CustomEvent_2_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Main.wid_Storage_Main_C.ExecuteUbergraph_wid_Storage_Main
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Name                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_1                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_2                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_3                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_4                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_5                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_6                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_7                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_8                  (HasGetValueTypeHash)
// class UWid_InventoryMenu_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_1                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_9                  (HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_ChangeApp_NewApp_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_ChangeApp_NewApp_CastInput_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_2                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_10                 (HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_11                 (HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_3                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_4                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_5                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_6                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_7                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_ChangeApp_NewApp_CastInput_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_3                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_8                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_9                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_10                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_11                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_12                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_13                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_14                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_4                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_3                                         (ConstParm, ZeroConstructor, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_15                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_5                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_4                                         (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_4                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCanBeDropped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_12                 (HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_5                                         (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCanBeDropped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_13                 (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_5                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCanBeDropped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_14                 (HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_ChangeApp_NewApp_CastInput_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_15                 (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1            (HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CloseInventory_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_Start_self_CastInput                                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_16                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_17                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_18                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_ChangeApp_NewApp_CastInput_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_ChangeApp_NewApp_CastInput_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_Start_self_CastInput_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_CustomEvent_Info_2                                        (HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_19                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_20                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_21                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_22                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_23                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_6                                         (ConstParm, ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanNAND_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanNAND_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Subtract_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_24                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Percent_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Add_ByteByte_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Percent_ByteByte_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_6                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_7                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_7                                           (ConstParm, ReferenceParm)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_25                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_CustomEvent_Info_1                                        (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_CustomEvent_Info                                          (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_16                 (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_26                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_27                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_17                 (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_2            (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_6                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable_8                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_8                                           (ConstParm, ReferenceParm)
// class FName                        K2Node_CustomEvent_Name_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_FromKeyboard                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Main_C::ExecuteUbergraph_wid_Storage_Main(int32 EntryPoint, class FName K2Node_CustomEvent_Name, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_4, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_5, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_6, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_7, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_8, class UWid_InventoryMenu_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin, bool CallFunc_NotEqual_NameName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_9, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_10, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_11, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_3, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_4, bool CallFunc_Not_PreBool_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_5, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_2, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_6, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_1, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput_2, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_3, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_8, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_9, FDelegateProperty_ Temp_delegate_Variable, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_10, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_11, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_12, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_13, FDelegateProperty_ Temp_delegate_Variable_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_14, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_6, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_4, bool CallFunc_BooleanAND_ReturnValue_6, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_6, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_3, int32 CallFunc_PostEvent_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_7, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, int32 CallFunc_PostEvent_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_7, int32 CallFunc_PostEvent_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_8, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_15, bool CallFunc_BooleanAND_ReturnValue_8, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, bool CallFunc_NotEqual_NameName_ReturnValue_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_5, FDelegateProperty_ Temp_delegate_Variable_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_4, int32 CallFunc_PostEvent_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_GetCanBeDropped_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_12, FDelegateProperty_ Temp_delegate_Variable_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool CallFunc_GetCanBeDropped_ReturnValue_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_13, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_5, int32 CallFunc_PostEvent_ReturnValue_5, bool CallFunc_GetCanBeDropped_ReturnValue_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_14, bool K2Node_Event_IsDesignTime, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_15, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, bool CallFunc_CloseInventory_ReturnValue, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_Start_self_CastInput, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_16, bool CallFunc_NotEqual_NameName_ReturnValue_2, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_17, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_18, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput_4, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput_5, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_Start_self_CastInput_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_CustomEvent_Info_2, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_19, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_3, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_20, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_21, bool CallFunc_NotEqual_NameName_ReturnValue_4, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_22, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_23, FDelegateProperty_ Temp_delegate_Variable_6, bool CallFunc_Not_PreBool_ReturnValue_9, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_10, bool CallFunc_BooleanNAND_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_11, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanNAND_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_5, uint8 CallFunc_Subtract_ByteByte_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_24, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_Percent_ByteByte_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Percent_ByteByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_6, int32 CallFunc_PostEvent_ReturnValue_6, FDelegateProperty_ Temp_delegate_Variable_7, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_7, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_25, int32 CallFunc_PostEvent_ReturnValue_7, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_CustomEvent_Info_1, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_CustomEvent_Info, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_16, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_LastInputWasFromGamepad_Gamepad, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_3, bool CallFunc_LastInputWasFromGamepad_Gamepad_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_26, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_27, bool CallFunc_NotEqual_ObjectObject_ReturnValue_4, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_17, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_9, FDelegateProperty_ Temp_delegate_Variable_8, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_8, class FName K2Node_CustomEvent_Name_1, bool K2Node_CustomEvent_FromKeyboard, int32 CallFunc_PostEvent_ReturnValue_8, bool CallFunc_NotEqual_NameName_ReturnValue_6, bool CallFunc_LastInputWasFromGamepad_Gamepad_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Main_C", "ExecuteUbergraph_wid_Storage_Main");

	Params::UWid_Storage_Main_C_ExecuteUbergraph_wid_Storage_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_3 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_4 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_4;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_5 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_5;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_6 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_6;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_7 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_7;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_8 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_8;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetAt_OutputPin = CallFunc_GetAt_OutputPin;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAt_OutputPin_1 = CallFunc_GetAt_OutputPin_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_9 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_9;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection = CallFunc_GetCurrentSelection_CurrentSelection;
	Parms.CallFunc_ChangeApp_NewApp_CastInput = CallFunc_ChangeApp_NewApp_CastInput;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_ChangeApp_NewApp_CastInput_1 = CallFunc_ChangeApp_NewApp_CastInput_1;
	Parms.CallFunc_GetAt_OutputPin_2 = CallFunc_GetAt_OutputPin_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_10 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_10;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_1 = CallFunc_GetCurrentSelection_CurrentSelection_1;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_2 = CallFunc_GetCurrentSelection_CurrentSelection_2;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_11 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_11;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_3 = CallFunc_GetCurrentSelection_CurrentSelection_3;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_4 = CallFunc_GetCurrentSelection_CurrentSelection_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_2 = CallFunc_GetPlayerPawn_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_5 = CallFunc_GetCurrentSelection_CurrentSelection_5;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_2 = CallFunc_EqualEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_6 = CallFunc_GetCurrentSelection_CurrentSelection_6;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_7 = CallFunc_GetCurrentSelection_CurrentSelection_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_3 = CallFunc_GetPlayerPawn_ReturnValue_3;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_4 = CallFunc_GetPlayerPawn_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_ChangeApp_NewApp_CastInput_2 = CallFunc_ChangeApp_NewApp_CastInput_2;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_GetAt_OutputPin_3 = CallFunc_GetAt_OutputPin_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_5 = CallFunc_GetPlayerPawn_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_8 = CallFunc_GetCurrentSelection_CurrentSelection_8;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_9 = CallFunc_GetCurrentSelection_CurrentSelection_9;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_10 = CallFunc_GetCurrentSelection_CurrentSelection_10;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_11 = CallFunc_GetCurrentSelection_CurrentSelection_11;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_12 = CallFunc_GetCurrentSelection_CurrentSelection_12;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_13 = CallFunc_GetCurrentSelection_CurrentSelection_13;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_14 = CallFunc_GetCurrentSelection_CurrentSelection_14;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_GetAt_OutputPin_4 = CallFunc_GetAt_OutputPin_4;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_6 = CallFunc_GetPlayerPawn_ReturnValue_6;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_delegate_Variable_3 = Temp_delegate_Variable_3;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_7 = CallFunc_GetPlayerPawn_ReturnValue_7;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_PostEvent_ReturnValue_2 = CallFunc_PostEvent_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_8 = CallFunc_GetPlayerPawn_ReturnValue_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_PostEvent_ReturnValue_3 = CallFunc_PostEvent_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_15 = CallFunc_GetCurrentSelection_CurrentSelection_15;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_3 = CallFunc_EqualEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetAt_OutputPin_5 = CallFunc_GetAt_OutputPin_5;
	Parms.Temp_delegate_Variable_4 = Temp_delegate_Variable_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.CallFunc_PostEvent_ReturnValue_4 = CallFunc_PostEvent_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCanBeDropped_ReturnValue = CallFunc_GetCanBeDropped_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_12 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_12;
	Parms.Temp_delegate_Variable_5 = Temp_delegate_Variable_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCanBeDropped_ReturnValue_1 = CallFunc_GetCanBeDropped_ReturnValue_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_13 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_13;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_PostEvent_ReturnValue_5 = CallFunc_PostEvent_ReturnValue_5;
	Parms.CallFunc_GetCanBeDropped_ReturnValue_2 = CallFunc_GetCanBeDropped_ReturnValue_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_14 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_14;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_ChangeApp_NewApp_CastInput_3 = CallFunc_ChangeApp_NewApp_CastInput_3;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_15 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_15;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_CloseInventory_ReturnValue = CallFunc_CloseInventory_ReturnValue;
	Parms.CallFunc_Start_self_CastInput = CallFunc_Start_self_CastInput;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_16 = CallFunc_GetCurrentSelection_CurrentSelection_16;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_17 = CallFunc_GetCurrentSelection_CurrentSelection_17;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_18 = CallFunc_GetCurrentSelection_CurrentSelection_18;
	Parms.CallFunc_ChangeApp_NewApp_CastInput_4 = CallFunc_ChangeApp_NewApp_CastInput_4;
	Parms.CallFunc_ChangeApp_NewApp_CastInput_5 = CallFunc_ChangeApp_NewApp_CastInput_5;
	Parms.CallFunc_GetDesiredSize_ReturnValue_1 = CallFunc_GetDesiredSize_ReturnValue_1;
	Parms.CallFunc_Start_self_CastInput_1 = CallFunc_Start_self_CastInput_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.K2Node_CustomEvent_Info_2 = K2Node_CustomEvent_Info_2;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_19 = CallFunc_GetCurrentSelection_CurrentSelection_19;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_3 = CallFunc_NotEqual_NameName_ReturnValue_3;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_20 = CallFunc_GetCurrentSelection_CurrentSelection_20;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_21 = CallFunc_GetCurrentSelection_CurrentSelection_21;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_4 = CallFunc_NotEqual_NameName_ReturnValue_4;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_22 = CallFunc_GetCurrentSelection_CurrentSelection_22;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_23 = CallFunc_GetCurrentSelection_CurrentSelection_23;
	Parms.Temp_delegate_Variable_6 = Temp_delegate_Variable_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.CallFunc_BooleanNAND_ReturnValue = CallFunc_BooleanNAND_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue_1 = CallFunc_Conv_InterfaceToObject_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_11 = CallFunc_Not_PreBool_ReturnValue_11;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanNAND_ReturnValue_1 = CallFunc_BooleanNAND_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_5 = CallFunc_NotEqual_NameName_ReturnValue_5;
	Parms.CallFunc_Subtract_ByteByte_ReturnValue = CallFunc_Subtract_ByteByte_ReturnValue;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_24 = CallFunc_GetCurrentSelection_CurrentSelection_24;
	Parms.CallFunc_Add_ByteByte_ReturnValue = CallFunc_Add_ByteByte_ReturnValue;
	Parms.CallFunc_Percent_ByteByte_ReturnValue = CallFunc_Percent_ByteByte_ReturnValue;
	Parms.CallFunc_Add_ByteByte_ReturnValue_1 = CallFunc_Add_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Percent_ByteByte_ReturnValue_1 = CallFunc_Percent_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.CallFunc_PostEvent_ReturnValue_6 = CallFunc_PostEvent_ReturnValue_6;
	Parms.Temp_delegate_Variable_7 = Temp_delegate_Variable_7;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_25 = CallFunc_GetCurrentSelection_CurrentSelection_25;
	Parms.CallFunc_PostEvent_ReturnValue_7 = CallFunc_PostEvent_ReturnValue_7;
	Parms.K2Node_CustomEvent_Info_1 = K2Node_CustomEvent_Info_1;
	Parms.K2Node_CustomEvent_Info = K2Node_CustomEvent_Info;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_16 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_16;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad = CallFunc_LastInputWasFromGamepad_Gamepad;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_2 = CallFunc_NotEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_3 = CallFunc_NotEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad_1 = CallFunc_LastInputWasFromGamepad_Gamepad_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_26 = CallFunc_GetCurrentSelection_CurrentSelection_26;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection_27 = CallFunc_GetCurrentSelection_CurrentSelection_27;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_4 = CallFunc_NotEqual_ObjectObject_ReturnValue_4;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_17 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_17;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_4 = CallFunc_MakeVector2D_ReturnValue_4;
	Parms.CallFunc_GetAt_OutputPin_6 = CallFunc_GetAt_OutputPin_6;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.Temp_delegate_Variable_8 = Temp_delegate_Variable_8;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.K2Node_CustomEvent_Name_1 = K2Node_CustomEvent_Name_1;
	Parms.K2Node_CustomEvent_FromKeyboard = K2Node_CustomEvent_FromKeyboard;
	Parms.CallFunc_PostEvent_ReturnValue_8 = CallFunc_PostEvent_ReturnValue_8;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_6 = CallFunc_NotEqual_NameName_ReturnValue_6;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad_2 = CallFunc_LastInputWasFromGamepad_Gamepad_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;

	UObject::ProcessEvent(Func, &Parms);

}

}


