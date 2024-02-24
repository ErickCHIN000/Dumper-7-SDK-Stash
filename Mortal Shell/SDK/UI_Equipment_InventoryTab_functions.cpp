#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C
// (None)

class UClass* UUI_Equipment_InventoryTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Equipment_InventoryTab_C");

	return Clss;
}


// UI_Equipment_InventoryTab_C UI_Equipment_InventoryTab.Default__UI_Equipment_InventoryTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Equipment_InventoryTab_C* UUI_Equipment_InventoryTab_C::GetDefaultObj()
{
	static class UUI_Equipment_InventoryTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Equipment_InventoryTab_C*>(UUI_Equipment_InventoryTab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.HandleScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetUIScale_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "HandleScale");

	Params::UUI_Equipment_InventoryTab_C_HandleScale_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUIScale_ReturnValue = CallFunc_GetUIScale_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.GetCategories
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_MainMenu_Button_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::GetCategories(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "GetCategories");

	Params::UUI_Equipment_InventoryTab_C_GetCategories_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.ResetScrollBoxOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::ResetScrollBoxOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "ResetScrollBoxOffset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.PrintCurrentlySelectedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::PrintCurrentlySelectedItem(const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "PrintCurrentlySelectedItem");

	Params::UUI_Equipment_InventoryTab_C_PrintCurrentlySelectedItem_Params Parms{};

	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.GetNavUpInventoryUp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_Equipment_InventoryTab_C::GetNavUpInventoryUp(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "GetNavUpInventoryUp");

	Params::UUI_Equipment_InventoryTab_C_GetNavUpInventoryUp_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.GetNavDownInventoryDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_Equipment_InventoryTab_C::GetNavDownInventoryDelta(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "GetNavDownInventoryDelta");

	Params::UUI_Equipment_InventoryTab_C_GetNavDownInventoryDelta_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.StopListeningUseItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::StopListeningUseItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "StopListeningUseItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.RemoveFromQuickSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuickAccessSlot_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::RemoveFromQuickSlot(class UQuickAccessSlot_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "RemoveFromQuickSlot");

	Params::UUI_Equipment_InventoryTab_C_RemoveFromQuickSlot_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.ResetNav
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Nav_Inventory_ItemSelected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        CallFunc_Nav_Inventory_SelectedWidget                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::ResetNav(bool CallFunc_Nav_Inventory_ItemSelected, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "ResetNav");

	Params::UUI_Equipment_InventoryTab_C_ResetNav_Params Parms{};

	Parms.CallFunc_Nav_Inventory_ItemSelected = CallFunc_Nav_Inventory_ItemSelected;
	Parms.CallFunc_Nav_Inventory_SelectedWidget = CallFunc_Nav_Inventory_SelectedWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Prompt_RemoveItemVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CanRemove                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickAccessSlot_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_Equipment_InventoryTab_C::Prompt_RemoveItemVisibility(bool Local_CanRemove, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHovered_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, int32 CallFunc_Array_Length_ReturnValue, class UQuickAccessSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Prompt_RemoveItemVisibility");

	Params::UUI_Equipment_InventoryTab_C_Prompt_RemoveItemVisibility_Params Parms{};

	Parms.Local_CanRemove = Local_CanRemove;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.IsDarkForm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_Equipment_InventoryTab_C::IsDarkForm(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "IsDarkForm");

	Params::UUI_Equipment_InventoryTab_C_IsDarkForm_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.CannotUseItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_Equipment_InventoryTab_C::CannotUseItem(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "CannotUseItem");

	Params::UUI_Equipment_InventoryTab_C_CannotUseItem_Params Parms{};

	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Prompt_AssignItemVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_Equipment_InventoryTab_C::Prompt_AssignItemVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Prompt_AssignItemVisibility");

	Params::UUI_Equipment_InventoryTab_C_Prompt_AssignItemVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Prompt_ConsumeItemVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Use_Item_Conditions_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_Equipment_InventoryTab_C::Prompt_ConsumeItemVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, int32 Temp_int_Variable, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool CallFunc_Get_Use_Item_Conditions_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Prompt_ConsumeItemVisibility");

	Params::UUI_Equipment_InventoryTab_C_Prompt_ConsumeItemVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_Get_Use_Item_Conditions_ReturnValue = CallFunc_Get_Use_Item_Conditions_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Nav_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Nav_Inventory_ItemSelected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        CallFunc_Nav_Inventory_SelectedWidget                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::Nav_Right(bool CallFunc_Nav_Inventory_ItemSelected, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Nav_Right");

	Params::UUI_Equipment_InventoryTab_C_Nav_Right_Params Parms{};

	Parms.CallFunc_Nav_Inventory_ItemSelected = CallFunc_Nav_Inventory_ItemSelected;
	Parms.CallFunc_Nav_Inventory_SelectedWidget = CallFunc_Nav_Inventory_SelectedWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Nav_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Nav_Inventory_ItemSelected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        CallFunc_Nav_Inventory_SelectedWidget                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::Nav_Left(bool CallFunc_Nav_Inventory_ItemSelected, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Nav_Left");

	Params::UUI_Equipment_InventoryTab_C_Nav_Left_Params Parms{};

	Parms.CallFunc_Nav_Inventory_ItemSelected = CallFunc_Nav_Inventory_ItemSelected;
	Parms.CallFunc_Nav_Inventory_SelectedWidget = CallFunc_Nav_Inventory_SelectedWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnGridItemSelectedBind
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UUI_Equipment_InventoryTab_C::OnGridItemSelectedBind(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnGridItemSelectedBind");

	Params::UUI_Equipment_InventoryTab_C_OnGridItemSelectedBind_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Nav_Confirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Nav_Inventory_ItemSelected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        CallFunc_Nav_Inventory_SelectedWidget                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCannotQuickAssignTab_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::Nav_Confirm(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Nav_Inventory_ItemSelected, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget, bool CallFunc_IsCannotQuickAssignTab_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Nav_Confirm");

	Params::UUI_Equipment_InventoryTab_C_Nav_Confirm_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Nav_Inventory_ItemSelected = CallFunc_Nav_Inventory_ItemSelected;
	Parms.CallFunc_Nav_Inventory_SelectedWidget = CallFunc_Nav_Inventory_SelectedWidget;
	Parms.CallFunc_IsCannotQuickAssignTab_ReturnValue = CallFunc_IsCannotQuickAssignTab_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Inventory_HoverSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::Inventory_HoverSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Inventory_HoverSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Nav_QuickSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              IndexValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DeltaIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickAccessSlot_C*          Local_QuickSlot                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index_Temp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuickAccessSlot_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickAccessSlot_C*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::Nav_QuickSlots(bool CustomIndex, int32 IndexValue, int32 Delta, int32 DeltaIndex, class UQuickAccessSlot_C* Local_QuickSlot, int32 Local_Index_Temp, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UQuickAccessSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UQuickAccessSlot_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Nav_QuickSlots");

	Params::UUI_Equipment_InventoryTab_C_Nav_QuickSlots_Params Parms{};

	Parms.CustomIndex = CustomIndex;
	Parms.IndexValue = IndexValue;
	Parms.Delta = Delta;
	Parms.DeltaIndex = DeltaIndex;
	Parms.Local_QuickSlot = Local_QuickSlot;
	Parms.Local_Index_Temp = Local_Index_Temp;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavConfirm_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_InventoryTab_C::NavConfirm_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavConfirm_Listen");

	Params::UUI_Equipment_InventoryTab_C_NavConfirm_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.HoverInventoryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Nav_Inventory_ItemSelected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        CallFunc_Nav_Inventory_SelectedWidget                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::HoverInventoryItem(int32 Index, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, const class FString& CallFunc_BuildString_Int_ReturnValue, bool CallFunc_Nav_Inventory_ItemSelected, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "HoverInventoryItem");

	Params::UUI_Equipment_InventoryTab_C_HoverInventoryItem_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_BuildString_Int_ReturnValue = CallFunc_BuildString_Int_ReturnValue;
	Parms.CallFunc_Nav_Inventory_ItemSelected = CallFunc_Nav_Inventory_ItemSelected;
	Parms.CallFunc_Nav_Inventory_SelectedWidget = CallFunc_Nav_Inventory_SelectedWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.ResetInventoryGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ResetAll                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        Local_Item                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::ResetInventoryGrid(bool ResetAll, class UInventoryGridItem_C* Local_Item, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UInventoryGridItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "ResetInventoryGrid");

	Params::UUI_Equipment_InventoryTab_C_ResetInventoryGrid_Params Parms{};

	Parms.ResetAll = ResetAll;
	Parms.Local_Item = Local_Item;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Nav_Inventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MouseHover                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              IndexValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ItemSelected                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        SelectedWidget                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Hovering                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        Local_SelectedWidget                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index_Temp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::Nav_Inventory(bool CustomIndex, bool SkipIndexCheck, bool MouseHover, int32 IndexValue, int32 Delta, bool* ItemSelected, class UInventoryGridItem_C** SelectedWidget, bool Local_Hovering, bool Local_SkipIndexCheck, bool Local_CustomIndex, class UInventoryGridItem_C* Local_SelectedWidget, int32 Local_Index_Temp, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UInventoryGridItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UInventoryGridItem_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UInventoryGridItem_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Nav_Inventory");

	Params::UUI_Equipment_InventoryTab_C_Nav_Inventory_Params Parms{};

	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.MouseHover = MouseHover;
	Parms.IndexValue = IndexValue;
	Parms.Delta = Delta;
	Parms.Local_Hovering = Local_Hovering;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_SelectedWidget = Local_SelectedWidget;
	Parms.Local_Index_Temp = Local_Index_Temp;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSelected != nullptr)
		*ItemSelected = Parms.ItemSelected;

	if (SelectedWidget != nullptr)
		*SelectedWidget = Parms.SelectedWidget;

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.UseInventoryItem_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_InventoryTab_C::UseInventoryItem_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "UseInventoryItem_Listen");

	Params::UUI_Equipment_InventoryTab_C_UseInventoryItem_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavUp_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_InventoryTab_C::NavUp_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavUp_Listen");

	Params::UUI_Equipment_InventoryTab_C_NavUp_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavLeft_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_InventoryTab_C::NavLeft_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavLeft_Listen");

	Params::UUI_Equipment_InventoryTab_C_NavLeft_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavDown_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_InventoryTab_C::NavDown_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavDown_Listen");

	Params::UUI_Equipment_InventoryTab_C_NavDown_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavRight_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_InventoryTab_C::NavRight_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavRight_Listen");

	Params::UUI_Equipment_InventoryTab_C_NavRight_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavTab_HoverSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavTab_HoverSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavTab_HoverSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavBack_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_InventoryTab_C::NavBack_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavBack_Listen");

	Params::UUI_Equipment_InventoryTab_C_NavBack_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Nav_Back
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::Nav_Back(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Nav_Back");

	Params::UUI_Equipment_InventoryTab_C_Nav_Back_Params Parms{};

	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.SetInventoryWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::SetInventoryWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "SetInventoryWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnWidgetDestruct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnWidgetDestruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnWidgetDestruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavTab_Next_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_InventoryTab_C::NavTab_Next_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavTab_Next_Listen");

	Params::UUI_Equipment_InventoryTab_C_NavTab_Next_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavTab_Previous_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_InventoryTab_C::NavTab_Previous_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavTab_Previous_Listen");

	Params::UUI_Equipment_InventoryTab_C_NavTab_Previous_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.FadeInAnim_Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::FadeInAnim_Play(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "FadeInAnim_Play");

	Params::UUI_Equipment_InventoryTab_C_FadeInAnim_Play_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.SetBlueprintRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::SetBlueprintRef(class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "SetBlueprintRef");

	Params::UUI_Equipment_InventoryTab_C_SetBlueprintRef_Params Parms{};

	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Item_Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UInventoryGridItem_C*        HoveredWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HoveredInventorySlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::Item_Selected(const struct FInventoryItem& InventoryItem, class UInventoryGridItem_C* HoveredWidget, int32 HoveredInventorySlot, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Item_Selected");

	Params::UUI_Equipment_InventoryTab_C_Item_Selected_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.HoveredWidget = HoveredWidget;
	Parms.HoveredInventorySlot = HoveredInventorySlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavTab_Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AnimateScrollBox                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_AnimateScrollBox                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_IndexTab                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetCategories_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::NavTab_Set(int32 Index, bool AnimateScrollBox, bool SkipSound, bool Local_AnimateScrollBox, int32 Local_IndexTab, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetCategories_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavTab_Set");

	Params::UUI_Equipment_InventoryTab_C_NavTab_Set_Params Parms{};

	Parms.Index = Index;
	Parms.AnimateScrollBox = AnimateScrollBox;
	Parms.SkipSound = SkipSound;
	Parms.Local_AnimateScrollBox = Local_AnimateScrollBox;
	Parms.Local_IndexTab = Local_IndexTab;
	Parms.CallFunc_GetCategories_Array = CallFunc_GetCategories_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavTab_Click
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::NavTab_Click(int32 Index, int32 Local_Index, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavTab_Click");

	Params::UUI_Equipment_InventoryTab_C_NavTab_Click_Params Parms{};

	Parms.Index = Index;
	Parms.Local_Index = Local_Index;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavTab_Unhover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_Get_Tab_Buttons_Array                                   (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::NavTab_Unhover(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_Get_Tab_Buttons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavTab_Unhover");

	Params::UUI_Equipment_InventoryTab_C_NavTab_Unhover_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Tab_Buttons_Array = CallFunc_Get_Tab_Buttons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Get Tab Buttons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_MainMenu_Button_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::Get_Tab_Buttons(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Get Tab Buttons");

	Params::UUI_Equipment_InventoryTab_C_Get_Tab_Buttons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavTab_Hover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_Get_Tab_Buttons_Array                                   (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::NavTab_Hover(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_Get_Tab_Buttons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavTab_Hover");

	Params::UUI_Equipment_InventoryTab_C_NavTab_Hover_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Tab_Buttons_Array = CallFunc_Get_Tab_Buttons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavTab_Next
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index_Temp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::NavTab_Next(int32 Local_Index_Temp, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavTab_Next");

	Params::UUI_Equipment_InventoryTab_C_NavTab_Next_Params Parms{};

	Parms.Local_Index_Temp = Local_Index_Temp;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavTab_Previous
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index_Temp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::NavTab_Previous(int32 Local_Index_Temp, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavTab_Previous");

	Params::UUI_Equipment_InventoryTab_C_NavTab_Previous_Params Parms{};

	Parms.Local_Index_Temp = Local_Index_Temp;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavTab_UpdateButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexTab                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_Get_Tab_Buttons_Array                                   (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::NavTab_UpdateButtons(int32 Index, int32 Local_IndexTab, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_Get_Tab_Buttons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavTab_UpdateButtons");

	Params::UUI_Equipment_InventoryTab_C_NavTab_UpdateButtons_Params Parms{};

	Parms.Index = Index;
	Parms.Local_IndexTab = Local_IndexTab;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Tab_Buttons_Array = CallFunc_Get_Tab_Buttons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UUI_Equipment_InventoryTab_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnMouseButtonDown");

	Params::UUI_Equipment_InventoryTab_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.IsCannotQuickAssignTab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_Equipment_InventoryTab_C::IsCannotQuickAssignTab(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "IsCannotQuickAssignTab");

	Params::UUI_Equipment_InventoryTab_C_IsCannotQuickAssignTab_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.QuickAssignMode_Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::QuickAssignMode_Cancel(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "QuickAssignMode_Cancel");

	Params::UUI_Equipment_InventoryTab_C_QuickAssignMode_Cancel_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.QuickAssignMode_Enable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::QuickAssignMode_Enable(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "QuickAssignMode_Enable");

	Params::UUI_Equipment_InventoryTab_C_QuickAssignMode_Enable_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.HandleParallax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   DesiredParallaxPos                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   NormalizedMousePos                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetMousePosFromCenterOfScreen_Position                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Vector2DInterpTo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::HandleParallax(const struct FVector2D& DesiredParallaxPos, const struct FVector2D& NormalizedMousePos, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, const struct FVector2D& CallFunc_GetMousePosFromCenterOfScreen_Position, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool Temp_bool_Variable, const struct FVector2D& K2Node_Select_Default, const struct FVector2D& CallFunc_Vector2DInterpTo_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "HandleParallax");

	Params::UUI_Equipment_InventoryTab_C_HandleParallax_Params Parms{};

	Parms.DesiredParallaxPos = DesiredParallaxPos;
	Parms.NormalizedMousePos = NormalizedMousePos;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_GetMousePosFromCenterOfScreen_Position = CallFunc_GetMousePosFromCenterOfScreen_Position;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Vector2DInterpTo_ReturnValue = CallFunc_Vector2DInterpTo_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Tick");

	Params::UUI_Equipment_InventoryTab_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnGridItemSelected_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UInventoryGridItem_C*        HoveredWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HoveredInventorySlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::OnGridItemSelected_Set(const struct FInventoryItem& InventoryItem, class UInventoryGridItem_C* HoveredWidget, int32 HoveredInventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnGridItemSelected_Set");

	Params::UUI_Equipment_InventoryTab_C_OnGridItemSelected_Set_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.HoveredWidget = HoveredWidget;
	Parms.HoveredInventorySlot = HoveredInventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnQuickAccessSlotsChanged_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               QuickIndicatorAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::OnQuickAccessSlotsChanged_Set(bool QuickIndicatorAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnQuickAccessSlotsChanged_Set");

	Params::UUI_Equipment_InventoryTab_C_OnQuickAccessSlotsChanged_Set_Params Parms{};

	Parms.QuickIndicatorAnim = QuickIndicatorAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnSecondaryTabPrevious_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnSecondaryTabPrevious_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnSecondaryTabPrevious_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnSecondaryTabNext_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnSecondaryTabNext_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnSecondaryTabNext_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavBack_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavBack_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavBack_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.UseInventoryItem_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::UseInventoryItem_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "UseInventoryItem_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnItemStartedDragging_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryGridItem_C*        GridItemWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          DragDropOperation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::OnItemStartedDragging_Set(int32 InventorySlot, class UInventoryGridItem_C* GridItemWidget, class UDragDropOperation* DragDropOperation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnItemStartedDragging_Set");

	Params::UUI_Equipment_InventoryTab_C_OnItemStartedDragging_Set_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.GridItemWidget = GridItemWidget;
	Parms.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnKeyboardModeChanged_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::OnKeyboardModeChanged_Set(bool KeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnKeyboardModeChanged_Set");

	Params::UUI_Equipment_InventoryTab_C_OnKeyboardModeChanged_Set_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnInventoryTabOpenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnInventoryTabOpenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnInventoryTabOpenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnInventoryTabCloseEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnInventoryTabCloseEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnInventoryTabCloseEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnGridItemSelected_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnGridItemSelected_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnGridItemSelected_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnKeyboardModeChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnKeyboardModeChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnKeyboardModeChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnItemStartedDragging_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnItemStartedDragging_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnItemStartedDragging_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnQuickAccessSlotsChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnQuickAccessSlotsChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnQuickAccessSlotsChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnSecondaryTabPrevious_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnSecondaryTabPrevious_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnSecondaryTabPrevious_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnSecondaryTabNext_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnSecondaryTabNext_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnSecondaryTabNext_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavBack_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavBack_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavBack_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_ControllerButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_ControllerButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_ControllerButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_ControllerButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_ControllerButton_C_0_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_ControllerButton_C_0_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_ControllerButton_C_0_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_ControllerButton_C_0_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavDown_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavDown_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavDown_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavDown_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavDown_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavDown_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavUp_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavUp_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavUp_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavUp_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavUp_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavUp_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavLeft_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavLeft_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavLeft_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavLeft_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavLeft_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavLeft_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavRight_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavRight_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavRight_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavRight_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavRight_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavRight_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.UseInventoryItem_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::UseInventoryItem_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "UseInventoryItem_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::OnItemHovered(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnItemHovered");

	Params::UUI_Equipment_InventoryTab_C_OnItemHovered_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnItemUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnItemUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavConfirm_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavConfirm_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavConfirm_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavConfirm_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavConfirm_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavConfirm_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavFaceButtonLeft_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavFaceButtonLeft_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavFaceButtonLeft_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.NavFaceButtonLeft_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::NavFaceButtonLeft_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "NavFaceButtonLeft_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_InventoryTab_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "PreConstruct");

	Params::UUI_Equipment_InventoryTab_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.RemoveQuickSlot_RightClicking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::RemoveQuickSlot_RightClicking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "RemoveQuickSlot_RightClicking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.UseInventoryItem_LeftClicking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::UseInventoryItem_LeftClicking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "UseInventoryItem_LeftClicking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_16_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_16_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_16_Unhovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_16_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_15_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_15_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_15_Unhovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_15_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature");

	Params::UUI_Equipment_InventoryTab_C_BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.ExecuteUbergraph_UI_Equipment_InventoryTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Get_Use_Item_Conditions_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_InventoryItem_CanUseCallFunc_GetCanUseItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Get_Use_Item_Conditions_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseInventoryItem_ItemUsed                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseInventoryItem_ItemUsed_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseInventoryItem_ItemUsed_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem_1                        (HasGetValueTypeHash)
// bool                               CallFunc_UseInventoryItem_ItemUsed_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseInventoryItem_ItemUsed_4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseInventoryItem_ItemUsed_5                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              K2Node_CustomEvent_InventoryItem                                 (HasGetValueTypeHash)
// class UInventoryGridItem_C*        K2Node_CustomEvent_HoveredWidget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_HoveredInventorySlot                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_QuickIndicatorAnim                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_InventorySlot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryGridItem_C*        K2Node_CustomEvent_GridItemWidget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          K2Node_CustomEvent_DragDropOperation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_KeyboardMode                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_InventoryItem_CanUseCallFunc_GetCanUseItem_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNavDownInventoryDelta_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Nav_Inventory_ItemSelected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        CallFunc_Nav_Inventory_SelectedWidget                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNavUpInventoryUp_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Nav_Inventory_ItemSelected_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryGridItem_C*        CallFunc_Nav_Inventory_SelectedWidget_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_20                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_19                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_18                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_17                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_16                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_15                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_14                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_13                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_12                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_11                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_10                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_9                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_InventoryTab_C::ExecuteUbergraph_UI_Equipment_InventoryTab(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Get_Use_Item_Conditions_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class Enum_InventoryItem_CanUse CallFunc_GetCanUseItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_Get_Use_Item_Conditions_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_UseInventoryItem_ItemUsed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_UseInventoryItem_ItemUsed_1, bool CallFunc_UseInventoryItem_ItemUsed_2, bool CallFunc_IsValid_ReturnValue_1, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_1, bool CallFunc_UseInventoryItem_ItemUsed_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_UseInventoryItem_ItemUsed_4, bool CallFunc_UseInventoryItem_ItemUsed_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FInventoryItem& K2Node_CustomEvent_InventoryItem, class UInventoryGridItem_C* K2Node_CustomEvent_HoveredWidget, int32 K2Node_CustomEvent_HoveredInventorySlot, bool K2Node_CustomEvent_QuickIndicatorAnim, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_InventorySlot, class UInventoryGridItem_C* K2Node_CustomEvent_GridItemWidget, class UDragDropOperation* K2Node_CustomEvent_DragDropOperation, bool K2Node_CustomEvent_KeyboardMode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue_2, enum class Enum_InventoryItem_CanUse CallFunc_GetCanUseItem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_1, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, int32 K2Node_CustomEvent_Index, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetNavDownInventoryDelta_ReturnValue, bool CallFunc_Nav_Inventory_ItemSelected, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget, int32 CallFunc_GetNavUpInventoryUp_ReturnValue, bool CallFunc_Nav_Inventory_ItemSelected_1, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget_1, int32 K2Node_ComponentBoundEvent_Index_20, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_20, int32 K2Node_ComponentBoundEvent_Index_19, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_19, int32 K2Node_ComponentBoundEvent_Index_18, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_18, int32 K2Node_ComponentBoundEvent_Index_17, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_17, int32 K2Node_ComponentBoundEvent_Index_16, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_16, int32 K2Node_ComponentBoundEvent_Index_15, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_15, int32 K2Node_ComponentBoundEvent_Index_14, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_14, bool CallFunc_IsValid_ReturnValue_3, int32 K2Node_ComponentBoundEvent_Index_13, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_13, int32 K2Node_ComponentBoundEvent_Index_12, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_12, int32 K2Node_ComponentBoundEvent_Index_11, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_11, int32 K2Node_ComponentBoundEvent_Index_10, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_10, int32 K2Node_ComponentBoundEvent_Index_9, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_9, int32 K2Node_ComponentBoundEvent_Index_8, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_8, int32 K2Node_ComponentBoundEvent_Index_7, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_7, int32 K2Node_ComponentBoundEvent_Index_6, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_6, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "ExecuteUbergraph_UI_Equipment_InventoryTab");

	Params::UUI_Equipment_InventoryTab_C_ExecuteUbergraph_UI_Equipment_InventoryTab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Get_Use_Item_Conditions_ReturnValue = CallFunc_Get_Use_Item_Conditions_ReturnValue;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCanUseItem_ReturnValue = CallFunc_GetCanUseItem_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Get_Use_Item_Conditions_ReturnValue_1 = CallFunc_Get_Use_Item_Conditions_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_UseInventoryItem_ItemUsed = CallFunc_UseInventoryItem_ItemUsed;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_UseInventoryItem_ItemUsed_1 = CallFunc_UseInventoryItem_ItemUsed_1;
	Parms.CallFunc_UseInventoryItem_ItemUsed_2 = CallFunc_UseInventoryItem_ItemUsed_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInventoryItem_InventoryItem_1 = CallFunc_GetInventoryItem_InventoryItem_1;
	Parms.CallFunc_UseInventoryItem_ItemUsed_3 = CallFunc_UseInventoryItem_ItemUsed_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_UseInventoryItem_ItemUsed_4 = CallFunc_UseInventoryItem_ItemUsed_4;
	Parms.CallFunc_UseInventoryItem_ItemUsed_5 = CallFunc_UseInventoryItem_ItemUsed_5;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_InventoryItem = K2Node_CustomEvent_InventoryItem;
	Parms.K2Node_CustomEvent_HoveredWidget = K2Node_CustomEvent_HoveredWidget;
	Parms.K2Node_CustomEvent_HoveredInventorySlot = K2Node_CustomEvent_HoveredInventorySlot;
	Parms.K2Node_CustomEvent_QuickIndicatorAnim = K2Node_CustomEvent_QuickIndicatorAnim;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_InventorySlot = K2Node_CustomEvent_InventorySlot;
	Parms.K2Node_CustomEvent_GridItemWidget = K2Node_CustomEvent_GridItemWidget;
	Parms.K2Node_CustomEvent_DragDropOperation = K2Node_CustomEvent_DragDropOperation;
	Parms.K2Node_CustomEvent_KeyboardMode = K2Node_CustomEvent_KeyboardMode;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCanUseItem_ReturnValue_1 = CallFunc_GetCanUseItem_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_ControllerButton_1 = K2Node_ComponentBoundEvent_ControllerButton_1;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetNavDownInventoryDelta_ReturnValue = CallFunc_GetNavDownInventoryDelta_ReturnValue;
	Parms.CallFunc_Nav_Inventory_ItemSelected = CallFunc_Nav_Inventory_ItemSelected;
	Parms.CallFunc_Nav_Inventory_SelectedWidget = CallFunc_Nav_Inventory_SelectedWidget;
	Parms.CallFunc_GetNavUpInventoryUp_ReturnValue = CallFunc_GetNavUpInventoryUp_ReturnValue;
	Parms.CallFunc_Nav_Inventory_ItemSelected_1 = CallFunc_Nav_Inventory_ItemSelected_1;
	Parms.CallFunc_Nav_Inventory_SelectedWidget_1 = CallFunc_Nav_Inventory_SelectedWidget_1;
	Parms.K2Node_ComponentBoundEvent_Index_20 = K2Node_ComponentBoundEvent_Index_20;
	Parms.K2Node_ComponentBoundEvent_Widget_20 = K2Node_ComponentBoundEvent_Widget_20;
	Parms.K2Node_ComponentBoundEvent_Index_19 = K2Node_ComponentBoundEvent_Index_19;
	Parms.K2Node_ComponentBoundEvent_Widget_19 = K2Node_ComponentBoundEvent_Widget_19;
	Parms.K2Node_ComponentBoundEvent_Index_18 = K2Node_ComponentBoundEvent_Index_18;
	Parms.K2Node_ComponentBoundEvent_Widget_18 = K2Node_ComponentBoundEvent_Widget_18;
	Parms.K2Node_ComponentBoundEvent_Index_17 = K2Node_ComponentBoundEvent_Index_17;
	Parms.K2Node_ComponentBoundEvent_Widget_17 = K2Node_ComponentBoundEvent_Widget_17;
	Parms.K2Node_ComponentBoundEvent_Index_16 = K2Node_ComponentBoundEvent_Index_16;
	Parms.K2Node_ComponentBoundEvent_Widget_16 = K2Node_ComponentBoundEvent_Widget_16;
	Parms.K2Node_ComponentBoundEvent_Index_15 = K2Node_ComponentBoundEvent_Index_15;
	Parms.K2Node_ComponentBoundEvent_Widget_15 = K2Node_ComponentBoundEvent_Widget_15;
	Parms.K2Node_ComponentBoundEvent_Index_14 = K2Node_ComponentBoundEvent_Index_14;
	Parms.K2Node_ComponentBoundEvent_Widget_14 = K2Node_ComponentBoundEvent_Widget_14;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Index_13 = K2Node_ComponentBoundEvent_Index_13;
	Parms.K2Node_ComponentBoundEvent_Widget_13 = K2Node_ComponentBoundEvent_Widget_13;
	Parms.K2Node_ComponentBoundEvent_Index_12 = K2Node_ComponentBoundEvent_Index_12;
	Parms.K2Node_ComponentBoundEvent_Widget_12 = K2Node_ComponentBoundEvent_Widget_12;
	Parms.K2Node_ComponentBoundEvent_Index_11 = K2Node_ComponentBoundEvent_Index_11;
	Parms.K2Node_ComponentBoundEvent_Widget_11 = K2Node_ComponentBoundEvent_Widget_11;
	Parms.K2Node_ComponentBoundEvent_Index_10 = K2Node_ComponentBoundEvent_Index_10;
	Parms.K2Node_ComponentBoundEvent_Widget_10 = K2Node_ComponentBoundEvent_Widget_10;
	Parms.K2Node_ComponentBoundEvent_Index_9 = K2Node_ComponentBoundEvent_Index_9;
	Parms.K2Node_ComponentBoundEvent_Widget_9 = K2Node_ComponentBoundEvent_Widget_9;
	Parms.K2Node_ComponentBoundEvent_Index_8 = K2Node_ComponentBoundEvent_Index_8;
	Parms.K2Node_ComponentBoundEvent_Widget_8 = K2Node_ComponentBoundEvent_Widget_8;
	Parms.K2Node_ComponentBoundEvent_Index_7 = K2Node_ComponentBoundEvent_Index_7;
	Parms.K2Node_ComponentBoundEvent_Widget_7 = K2Node_ComponentBoundEvent_Widget_7;
	Parms.K2Node_ComponentBoundEvent_Index_6 = K2Node_ComponentBoundEvent_Index_6;
	Parms.K2Node_ComponentBoundEvent_Widget_6 = K2Node_ComponentBoundEvent_Widget_6;
	Parms.K2Node_ComponentBoundEvent_Index_5 = K2Node_ComponentBoundEvent_Index_5;
	Parms.K2Node_ComponentBoundEvent_Widget_5 = K2Node_ComponentBoundEvent_Widget_5;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.K2Node_ComponentBoundEvent_Widget_4 = K2Node_ComponentBoundEvent_Widget_4;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.K2Node_ComponentBoundEvent_Widget_3 = K2Node_ComponentBoundEvent_Widget_3;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C.OnBackButtonCloseRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_InventoryTab_C::OnBackButtonCloseRequested__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_InventoryTab_C", "OnBackButtonCloseRequested__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


