#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Throw_Slot.Throw_Slot_C
// (None)

class UClass* UThrow_Slot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Throw_Slot_C");

	return Clss;
}


// Throw_Slot_C Throw_Slot.Default__Throw_Slot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThrow_Slot_C* UThrow_Slot_C::GetDefaultObj()
{
	static class UThrow_Slot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThrow_Slot_C*>(UThrow_Slot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Throw_Slot.Throw_Slot_C.SetItemAsUnavailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThrow_Slot_C::SetItemAsUnavailable(int32 Amount, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_2, float K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "SetItemAsUnavailable");

	Params::UThrow_Slot_C_SetItemAsUnavailable_Params Parms{};

	Parms.Amount = Amount;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Throw_Slot.Throw_Slot_C.ItemUnavailable_PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThrow_Slot_C::ItemUnavailable_PlayAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "ItemUnavailable_PlayAnim");

	Params::UThrow_Slot_C_ItemUnavailable_PlayAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Throw_Slot.Throw_Slot_C.IsItemAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsBallistazookaUnequipped_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasItem_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThrow_Slot_C::IsItemAvailable(bool CallFunc_IsBallistazookaUnequipped_ReturnValue, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "IsItemAvailable");

	Params::UThrow_Slot_C_IsItemAvailable_Params Parms{};

	Parms.CallFunc_IsBallistazookaUnequipped_ReturnValue = CallFunc_IsBallistazookaUnequipped_ReturnValue;
	Parms.CallFunc_HasItem_Success = CallFunc_HasItem_Success;
	Parms.CallFunc_HasItem_InventorySlot = CallFunc_HasItem_InventorySlot;
	Parms.CallFunc_HasItem_Amount = CallFunc_HasItem_Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Throw_Slot.Throw_Slot_C.Get_Image_BossGlimpse_Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Local_Color                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor UThrow_Slot_C::Get_Image_BossGlimpse_Color(const struct FLinearColor& Local_Color, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_Image_BossGlimpse_Color");

	Params::UThrow_Slot_C_Get_Image_BossGlimpse_Color_Params Parms{};

	Parms.Local_Color = Local_Color;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.Get_Image_BossGlimpse_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBallistazookaUnequipped_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UThrow_Slot_C::Get_Image_BossGlimpse_Visibility(bool CallFunc_IsBallistazookaUnequipped_ReturnValue, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_Image_BossGlimpse_Visibility");

	Params::UThrow_Slot_C_Get_Image_BossGlimpse_Visibility_Params Parms{};

	Parms.CallFunc_IsBallistazookaUnequipped_ReturnValue = CallFunc_IsBallistazookaUnequipped_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.UpdateFilteredSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetQuickAccessItem_QuickAccessItem                      (HasGetValueTypeHash)
// bool                               CallFunc_GetQuickAccessItem_bValidItem                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThrow_Slot_C::UpdateFilteredSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_GetQuickAccessItem_QuickAccessItem, bool CallFunc_GetQuickAccessItem_bValidItem, int32 CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "UpdateFilteredSlots");

	Params::UThrow_Slot_C_UpdateFilteredSlots_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetQuickAccessItem_QuickAccessItem = CallFunc_GetQuickAccessItem_QuickAccessItem;
	Parms.CallFunc_GetQuickAccessItem_bValidItem = CallFunc_GetQuickAccessItem_bValidItem;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Throw_Slot.Throw_Slot_C.IsBallistazookaUnequipped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UThrow_Slot_C::IsBallistazookaUnequipped(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "IsBallistazookaUnequipped");

	Params::UThrow_Slot_C_IsBallistazookaUnequipped_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.Get_Overlay_Index_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBallistazookaUnequipped_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UThrow_Slot_C::Get_Overlay_Index_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsBallistazookaUnequipped_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_Overlay_Index_Visibility");

	Params::UThrow_Slot_C_Get_Overlay_Index_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsBallistazookaUnequipped_ReturnValue = CallFunc_IsBallistazookaUnequipped_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.CantUse_PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThrow_Slot_C::CantUse_PlayAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "CantUse_PlayAnim");

	Params::UThrow_Slot_C_CantUse_PlayAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Throw_Slot.Throw_Slot_C.UpdateMainIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsBallistazookaUnequipped_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UThrow_Slot_C::UpdateMainIcon(bool CallFunc_IsBallistazookaUnequipped_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "UpdateMainIcon");

	Params::UThrow_Slot_C_UpdateMainIcon_Params Parms{};

	Parms.CallFunc_IsBallistazookaUnequipped_ReturnValue = CallFunc_IsBallistazookaUnequipped_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Throw_Slot.Throw_Slot_C.SetFade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_DeltaSeconds                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   Local_MyGeometry                                                 (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBallistazookaUnequipped_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FVector2D                   CallFunc_LocalToViewport_PixelPosition                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToViewport_ViewportPosition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThrow_Slot_C::SetFade(struct FGeometry& Geometry, float DeltaSeconds, float Local_DeltaSeconds, const struct FGeometry& Local_MyGeometry, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsBallistazookaUnequipped_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "SetFade");

	Params::UThrow_Slot_C_SetFade_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.Local_DeltaSeconds = Local_DeltaSeconds;
	Parms.Local_MyGeometry = Local_MyGeometry;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsBallistazookaUnequipped_ReturnValue = CallFunc_IsBallistazookaUnequipped_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_LocalToViewport_PixelPosition = CallFunc_LocalToViewport_PixelPosition;
	Parms.CallFunc_LocalToViewport_ViewportPosition = CallFunc_LocalToViewport_ViewportPosition;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor_2 = K2Node_MakeStruct_LinearColor_2;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Throw_Slot.Throw_Slot_C.Get_SlotIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UThrow_Slot_C::Get_SlotIndex(int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_SlotIndex");

	Params::UThrow_Slot_C_Get_SlotIndex_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.Get_RedBG_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Local_Visibility                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_InventoryItem_CanUseLocal_InventoryCantUse                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_InventoryItem_CanUseTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_InventoryItem_CanUseCallFunc_GetCanUseItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UThrow_Slot_C::Get_RedBG_Visibility(enum class ESlateVisibility Local_Visibility, enum class Enum_InventoryItem_CanUse Local_InventoryCantUse, enum class Enum_InventoryItem_CanUse Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility K2Node_Select_Default, enum class Enum_InventoryItem_CanUse CallFunc_GetCanUseItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_RedBG_Visibility");

	Params::UThrow_Slot_C_Get_RedBG_Visibility_Params Parms{};

	Parms.Local_Visibility = Local_Visibility;
	Parms.Local_InventoryCantUse = Local_InventoryCantUse;
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
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCanUseItem_ReturnValue = CallFunc_GetCanUseItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.Get_TextAmount_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UThrow_Slot_C::Get_TextAmount_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_TextAmount_Visibility");

	Params::UThrow_Slot_C_Get_TextAmount_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.Get_TextAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsBallistazookaUnequipped_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

class FText UThrow_Slot_C::Get_TextAmount(bool CallFunc_IsBallistazookaUnequipped_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_TextAmount");

	Params::UThrow_Slot_C_Get_TextAmount_Params Parms{};

	Parms.CallFunc_IsBallistazookaUnequipped_ReturnValue = CallFunc_IsBallistazookaUnequipped_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.Get_DamageText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UThrow_Slot_C::Get_DamageText(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_DamageText");

	Params::UThrow_Slot_C_Get_DamageText_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.Get_WidgetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UThrow_Slot_C::Get_WidgetVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_WidgetVisibility");

	Params::UThrow_Slot_C_Get_WidgetVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.Get_PrevItemIcon_Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

struct FSlateBrush UThrow_Slot_C::Get_PrevItemIcon_Brush(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_PrevItemIcon_Brush");

	Params::UThrow_Slot_C_Get_PrevItemIcon_Brush_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.Get_NextItemIcon_Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

struct FSlateBrush UThrow_Slot_C::Get_NextItemIcon_Brush(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_NextItemIcon_Brush");

	Params::UThrow_Slot_C_Get_NextItemIcon_Brush_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.Get_ItemName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBallistazookaUnequipped_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

class FText UThrow_Slot_C::Get_ItemName(bool Temp_bool_Variable, bool CallFunc_IsBallistazookaUnequipped_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_ItemName");

	Params::UThrow_Slot_C_Get_ItemName_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsBallistazookaUnequipped_ReturnValue = CallFunc_IsBallistazookaUnequipped_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.Get_ItemIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBallistazookaUnequipped_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

struct FSlateBrush UThrow_Slot_C::Get_ItemIcon(bool Temp_bool_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsBallistazookaUnequipped_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Get_ItemIcon");

	Params::UThrow_Slot_C_Get_ItemIcon_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_IsBallistazookaUnequipped_ReturnValue = CallFunc_IsBallistazookaUnequipped_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Throw_Slot.Throw_Slot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThrow_Slot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Tick");

	Params::UThrow_Slot_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Throw_Slot.Throw_Slot_C.CantUseQuickItem_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UThrow_Slot_C::CantUseQuickItem_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "CantUseQuickItem_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Throw_Slot.Throw_Slot_C.CantUseQuickitem_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UThrow_Slot_C::CantUseQuickitem_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "CantUseQuickitem_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Throw_Slot.Throw_Slot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UThrow_Slot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Throw_Slot.Throw_Slot_C.Update_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UThrow_Slot_C::Update_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Update_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Throw_Slot.Throw_Slot_C.Update_Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UThrow_Slot_C::Update_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "Update_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Throw_Slot.Throw_Slot_C.QuickItemUnavailable_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UThrow_Slot_C::QuickItemUnavailable_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "QuickItemUnavailable_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Throw_Slot.Throw_Slot_C.QuickItemUnavailable_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UThrow_Slot_C::QuickItemUnavailable_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "QuickItemUnavailable_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Throw_Slot.Throw_Slot_C.ItemUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UThrow_Slot_C::ItemUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "ItemUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Throw_Slot.Throw_Slot_C.ExecuteUbergraph_Throw_Slot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CheckItemName_ReturnValue                               (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UThrow_Slot_C::ExecuteUbergraph_Throw_Slot(int32 EntryPoint, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_CheckItemName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throw_Slot_C", "ExecuteUbergraph_Throw_Slot");

	Params::UThrow_Slot_C_ExecuteUbergraph_Throw_Slot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckItemName_ReturnValue = CallFunc_CheckItemName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


