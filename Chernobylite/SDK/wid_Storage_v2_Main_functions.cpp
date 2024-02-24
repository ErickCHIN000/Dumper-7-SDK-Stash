#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Storage_v2_Main.wid_Storage_v2_Main_C
// (None)

class UClass* UWid_Storage_v2_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Storage_v2_Main_C");

	return Clss;
}


// wid_Storage_v2_Main_C wid_Storage_v2_Main.Default__wid_Storage_v2_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Storage_v2_Main_C* UWid_Storage_v2_Main_C::GetDefaultObj()
{
	static class UWid_Storage_v2_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Storage_v2_Main_C*>(UWid_Storage_v2_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.ChangeApp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IWid_IInventoryApp_C>NewApp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_v2_Main_C::ChangeApp(TScriptInterface<class IWid_IInventoryApp_C> NewApp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "ChangeApp");

	Params::UWid_Storage_v2_Main_C_ChangeApp_Params Parms{};

	Parms.NewApp = NewApp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InventoryUpdatedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InventoryUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InventoryUpdatedDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputFaceDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.DPadUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.DPadRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.DPadDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.DPadLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputLeftStick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputLeftStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputLeftStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputFaceRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputFaceUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputFaceLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputFaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputFaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.GoBackGridMain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::GoBackGridMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "GoBackGridMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.NewSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromKeyboard                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_v2_Main_C::NewSelection(class FName Name, bool FromKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "NewSelection");

	Params::UWid_Storage_v2_Main_C_NewSelection_Params Parms{};

	Parms.Name = Name;
	Parms.FromKeyboard = FromKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputR2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputR2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputR2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputL2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputL2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputL2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputRightStick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputRightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputRightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.QuickUse1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::QuickUse1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "QuickUse1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.QuickUse2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::QuickUse2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "QuickUse2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.QuickUse3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::QuickUse3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "QuickUse3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.QuickUse4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::QuickUse4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "QuickUse4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputFaceLeftReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputFaceLeftReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputFaceLeftReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.UpdateButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoInfo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_Storage_v2_Main_C::UpdateButtons(const struct FStruct_Inventory_ButtonModifyInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "UpdateButtons");

	Params::UWid_Storage_v2_Main_C_UpdateButtons_Params Parms{};

	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.QuickUse5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::QuickUse5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "QuickUse5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.QuickUse6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::QuickUse6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "QuickUse6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.QuickUse7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::QuickUse7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "QuickUse7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.QuickUse8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::QuickUse8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "QuickUse8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.UnbindInventoryUpdatedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::UnbindInventoryUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "UnbindInventoryUpdatedDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.BackButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::BackButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "BackButtonClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputFaceUpReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputFaceUpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputFaceUpReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.InputAssign
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_v2_Main_C::InputAssign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "InputAssign");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.ExecuteUbergraph_wid_Storage_v2_Main
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_6                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CloseInventory_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryApp_C>CallFunc_Start_self_CastInput                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBePutToQuickMenu_Result                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Name                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_FromKeyboard                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_CustomEvent_Info                                          (HasGetValueTypeHash)
// bool                               CallFunc_SortBySize_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_v2_Main_C::ExecuteUbergraph_wid_Storage_v2_Main(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, int32 Temp_int_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, int32 Temp_int_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, const struct FVector2D& Temp_struct_Variable_3, const struct FVector2D& Temp_struct_Variable_4, const struct FVector2D& Temp_struct_Variable_5, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_6, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_CloseInventory_ReturnValue, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_Start_self_CastInput, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, bool CallFunc_CanBePutToQuickMenu_Result, class FName K2Node_CustomEvent_Name, bool K2Node_CustomEvent_FromKeyboard, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_CustomEvent_Info, bool CallFunc_SortBySize_ReturnValue, bool CallFunc_LastInputWasFromGamepad_Gamepad, bool CallFunc_BooleanOR_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetSize_ReturnValue_1, class UTexture2D* K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "ExecuteUbergraph_wid_Storage_v2_Main");

	Params::UWid_Storage_v2_Main_C_ExecuteUbergraph_wid_Storage_v2_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_CloseInventory_ReturnValue = CallFunc_CloseInventory_ReturnValue;
	Parms.CallFunc_Start_self_CastInput = CallFunc_Start_self_CastInput;
	Parms.CallFunc_GetCurrentSelection_CurrentSelection = CallFunc_GetCurrentSelection_CurrentSelection;
	Parms.CallFunc_CanBePutToQuickMenu_Result = CallFunc_CanBePutToQuickMenu_Result;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_FromKeyboard = K2Node_CustomEvent_FromKeyboard;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.K2Node_CustomEvent_Info = K2Node_CustomEvent_Info;
	Parms.CallFunc_SortBySize_ReturnValue = CallFunc_SortBySize_ReturnValue;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad = CallFunc_LastInputWasFromGamepad_Gamepad;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_GetSize_ReturnValue_1 = CallFunc_GetSize_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_v2_Main.wid_Storage_v2_Main_C.CustomGridSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Grid                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_v2_Main_C::CustomGridSelected__DelegateSignature(const struct FVector2D& Grid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_v2_Main_C", "CustomGridSelected__DelegateSignature");

	Params::UWid_Storage_v2_Main_C_CustomGridSelected__DelegateSignature_Params Parms{};

	Parms.Grid = Grid;

	UObject::ProcessEvent(Func, &Parms);

}

}


