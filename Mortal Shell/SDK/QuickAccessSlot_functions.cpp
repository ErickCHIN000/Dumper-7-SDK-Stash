#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuickAccessSlot.QuickAccessSlot_C
// (None)

class UClass* UQuickAccessSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuickAccessSlot_C");

	return Clss;
}


// QuickAccessSlot_C QuickAccessSlot.Default__QuickAccessSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuickAccessSlot_C* UQuickAccessSlot_C::GetDefaultObj()
{
	static class UQuickAccessSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuickAccessSlot_C*>(UQuickAccessSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuickAccessSlot.QuickAccessSlot_C.Slot_SetBossGlimpse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickAccessSlot_C::Slot_SetBossGlimpse(int32 Local_Index, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FLinearColor& Temp_struct_Variable_4, int32 Temp_int_Variable, const struct FLinearColor& K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Slot_SetBossGlimpse");

	Params::UQuickAccessSlot_C_Slot_SetBossGlimpse_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickAccessSlot.QuickAccessSlot_C.Slot_Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickAccessSlot_C::Slot_Remove(bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Slot_Remove");

	Params::UQuickAccessSlot_C_Slot_Remove_Params Parms{};

	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickAccessSlot.QuickAccessSlot_C.Get_Image_Border_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Local_Visibility                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UQuickAccessSlot_C::Get_Image_Border_Visibility(enum class ESlateVisibility Local_Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Get_Image_Border_Visibility");

	Params::UQuickAccessSlot_C_Get_Image_Border_Visibility_Params Parms{};

	Parms.Local_Visibility = Local_Visibility;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuickAccessSlot.QuickAccessSlot_C.Get_Image_BG_Red_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_InventoryItem_CanUseTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_InventoryItem_CanUseCallFunc_GetCanUseItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UQuickAccessSlot_C::Get_Image_BG_Red_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class Enum_InventoryItem_CanUse Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class Enum_InventoryItem_CanUse CallFunc_GetCanUseItem_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Get_Image_BG_Red_Visibility");

	Params::UQuickAccessSlot_C_Get_Image_BG_Red_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCanUseItem_ReturnValue = CallFunc_GetCanUseItem_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuickAccessSlot.QuickAccessSlot_C.Get_Image_DropIcon_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Local_Visibility                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UQuickAccessSlot_C::Get_Image_DropIcon_Visibility(enum class ESlateVisibility Local_Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Get_Image_DropIcon_Visibility");

	Params::UQuickAccessSlot_C_Get_Image_DropIcon_Visibility_Params Parms{};

	Parms.Local_Visibility = Local_Visibility;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuickAccessSlot.QuickAccessSlot_C.Get_SizeBox_ItemArt_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Local_Visibility                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UQuickAccessSlot_C::Get_SizeBox_ItemArt_Visibility(enum class ESlateVisibility Local_Visibility, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Get_SizeBox_ItemArt_Visibility");

	Params::UQuickAccessSlot_C_Get_SizeBox_ItemArt_Visibility_Params Parms{};

	Parms.Local_Visibility = Local_Visibility;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuickAccessSlot.QuickAccessSlot_C.Get_Overlay_Quantity_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Local_Visibility                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UQuickAccessSlot_C::Get_Overlay_Quantity_Visibility(enum class ESlateVisibility Local_Visibility, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Get_Overlay_Quantity_Visibility");

	Params::UQuickAccessSlot_C_Get_Overlay_Quantity_Visibility_Params Parms{};

	Parms.Local_Visibility = Local_Visibility;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuickAccessSlot.QuickAccessSlot_C.Get_Image_Empty_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Local_Visibility                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UQuickAccessSlot_C::Get_Image_Empty_Visibility(enum class ESlateVisibility Local_Visibility, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Get_Image_Empty_Visibility");

	Params::UQuickAccessSlot_C_Get_Image_Empty_Visibility_Params Parms{};

	Parms.Local_Visibility = Local_Visibility;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuickAccessSlot.QuickAccessSlot_C.Slot_GetQuantity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              InInt                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UQuickAccessSlot_C::Slot_GetQuantity(int32 InInt, bool Temp_bool_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& Temp_string_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Slot_GetQuantity");

	Params::UQuickAccessSlot_C_Slot_GetQuantity_Params Parms{};

	Parms.InInt = InInt;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuickAccessSlot.QuickAccessSlot_C.SetGameplayPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickAccessSlot_C::SetGameplayPC(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "SetGameplayPC");

	Params::UQuickAccessSlot_C_SetGameplayPC_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickAccessSlot.QuickAccessSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UQuickAccessSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "OnMouseButtonDown");

	Params::UQuickAccessSlot_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuickAccessSlot.QuickAccessSlot_C.Slot_SetSlotIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UQuickAccessSlot_C::Slot_SetSlotIndex(int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Slot_SetSlotIndex");

	Params::UQuickAccessSlot_C_Slot_SetSlotIndex_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickAccessSlot.QuickAccessSlot_C.Slot_SetItemDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsValid                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Amount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Local_Icon                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Slot_GetQuantity_ReturnValue                            (None)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickAccessSlot_C::Slot_SetItemDetails(const struct FInventoryItem& Item, bool IsValid, int32 Local_Amount, class UTexture2D* Local_Icon, class FName Local_ID, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Select_Default, float K2Node_Select_Default_1, class FText CallFunc_Slot_GetQuantity_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Slot_SetItemDetails");

	Params::UQuickAccessSlot_C_Slot_SetItemDetails_Params Parms{};

	Parms.Item = Item;
	Parms.IsValid = IsValid;
	Parms.Local_Amount = Local_Amount;
	Parms.Local_Icon = Local_Icon;
	Parms.Local_ID = Local_ID;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Slot_GetQuantity_ReturnValue = CallFunc_Slot_GetQuantity_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickAccessSlot.QuickAccessSlot_C.Slot_SetEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              K2Node_MakeStruct_InventoryItem                                  (HasGetValueTypeHash)

void UQuickAccessSlot_C::Slot_SetEmpty(const struct FInventoryItem& K2Node_MakeStruct_InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Slot_SetEmpty");

	Params::UQuickAccessSlot_C_Slot_SetEmpty_Params Parms{};

	Parms.K2Node_MakeStruct_InventoryItem = K2Node_MakeStruct_InventoryItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickAccessSlot.QuickAccessSlot_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UQuickAccessSlot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "OnDrop");

	Params::UQuickAccessSlot_C_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuickAccessSlot.QuickAccessSlot_C.QuickSlot_SetItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsValid                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickAccessSlot_C::QuickSlot_SetItem(const struct FInventoryItem& Item, bool IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "QuickSlot_SetItem");

	Params::UQuickAccessSlot_C_QuickSlot_SetItem_Params Parms{};

	Parms.Item = Item;
	Parms.IsValid = IsValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickAccessSlot.QuickAccessSlot_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickAccessSlot_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "OnDragEnter");

	Params::UQuickAccessSlot_C_OnDragEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickAccessSlot.QuickAccessSlot_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickAccessSlot_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "OnDragLeave");

	Params::UQuickAccessSlot_C_OnDragLeave_Params Parms{};

	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickAccessSlot.QuickAccessSlot_C.OnQuickAssignModeEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickAccessSlot_C::OnQuickAssignModeEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "OnQuickAssignModeEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuickAccessSlot.QuickAccessSlot_C.OnQuickAssignModeDisabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickAccessSlot_C::OnQuickAssignModeDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "OnQuickAssignModeDisabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuickAccessSlot.QuickAccessSlot_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuickAccessSlot_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "OnMouseEnter");

	Params::UQuickAccessSlot_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickAccessSlot.QuickAccessSlot_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuickAccessSlot_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "OnMouseLeave");

	Params::UQuickAccessSlot_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickAccessSlot.QuickAccessSlot_C.OnButtonNavLostFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickAccessSlot_C::OnButtonNavLostFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "OnButtonNavLostFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuickAccessSlot.QuickAccessSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuickAccessSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuickAccessSlot.QuickAccessSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuickAccessSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuickAccessSlot.QuickAccessSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickAccessSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "PreConstruct");

	Params::UQuickAccessSlot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickAccessSlot.QuickAccessSlot_C.Slot_Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickAccessSlot_C::Slot_Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Slot_Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuickAccessSlot.QuickAccessSlot_C.Slot_Deselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickAccessSlot_C::Slot_Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "Slot_Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuickAccessSlot.QuickAccessSlot_C.ExecuteUbergraph_QuickAccessSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              K2Node_CustomEvent_Item                                          (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsValid                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry_1                                        (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_PointerEvent_1                                      (None)
// class UDragDropOperation*          K2Node_Event_Operation_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_PointerEvent                                        (None)
// class UDragDropOperation*          K2Node_Event_Operation                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickAccessSlot_C::ExecuteUbergraph_QuickAccessSlot(int32 EntryPoint, const struct FInventoryItem& K2Node_CustomEvent_Item, bool K2Node_CustomEvent_IsValid, const struct FGeometry& K2Node_Event_MyGeometry_1, const struct FPointerEvent& K2Node_Event_PointerEvent_1, class UDragDropOperation* K2Node_Event_Operation_1, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickAccessSlot_C", "ExecuteUbergraph_QuickAccessSlot");

	Params::UQuickAccessSlot_C_ExecuteUbergraph_QuickAccessSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_IsValid = K2Node_CustomEvent_IsValid;
	Parms.K2Node_Event_MyGeometry_1 = K2Node_Event_MyGeometry_1;
	Parms.K2Node_Event_PointerEvent_1 = K2Node_Event_PointerEvent_1;
	Parms.K2Node_Event_Operation_1 = K2Node_Event_Operation_1;
	Parms.K2Node_Event_PointerEvent = K2Node_Event_PointerEvent;
	Parms.K2Node_Event_Operation = K2Node_Event_Operation;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


