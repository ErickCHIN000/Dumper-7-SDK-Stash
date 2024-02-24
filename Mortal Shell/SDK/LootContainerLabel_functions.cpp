#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LootContainerLabel.LootContainerLabel_C
// (None)

class UClass* ULootContainerLabel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootContainerLabel_C");

	return Clss;
}


// LootContainerLabel_C LootContainerLabel.Default__LootContainerLabel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootContainerLabel_C* ULootContainerLabel_C::GetDefaultObj()
{
	static class ULootContainerLabel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootContainerLabel_C*>(ULootContainerLabel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LootContainerLabel.LootContainerLabel_C.IconsForKeyboardOrGamepad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULootContainerLabel_C::IconsForKeyboardOrGamepad(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "IconsForKeyboardOrGamepad");

	Params::ULootContainerLabel_C_IconsForKeyboardOrGamepad_Params Parms{};

	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootContainerLabel.LootContainerLabel_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ULootContainerLabel_C::OnPaint(struct FPaintContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "OnPaint");

	Params::ULootContainerLabel_C_OnPaint_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootContainerLabel.LootContainerLabel_C.Get_NotificationFlavor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ULootContainerLabel_C::Get_NotificationFlavor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_NotificationFlavor");

	Params::ULootContainerLabel_C_Get_NotificationFlavor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_NotificationDetails
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ULootContainerLabel_C::Get_NotificationDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_NotificationDetails");

	Params::ULootContainerLabel_C_Get_NotificationDetails_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_NotificationType_Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ULootContainerLabel_C::Get_NotificationType_Text()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_NotificationType_Text");

	Params::ULootContainerLabel_C_Get_NotificationType_Text_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_DetectDragIfPressed_ReturnValue                         (None)

struct FEventReply ULootContainerLabel_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "OnMouseButtonDown");

	Params::ULootContainerLabel_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_DetectDragIfPressed_ReturnValue = CallFunc_DetectDragIfPressed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragWidget_C*               CallFunc_CreateDragDropOperation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToLocal_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULootContainerLabel_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragWidget_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "OnDragDetected");

	Params::ULootContainerLabel_C_OnDragDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.CallFunc_CreateDragDropOperation_ReturnValue = CallFunc_CreateDragDropOperation_ReturnValue;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;
	Parms.CallFunc_AbsoluteToLocal_ReturnValue = CallFunc_AbsoluteToLocal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_StackSize_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility ULootContainerLabel_C::Get_StackSize_Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_StackSize_Visibility");

	Params::ULootContainerLabel_C_Get_StackSize_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_StackSize_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText ULootContainerLabel_C::Get_StackSize_Text(class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_StackSize_Text");

	Params::ULootContainerLabel_C_Get_StackSize_Text_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Description_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility ULootContainerLabel_C::Get_Description_Visibility(const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Description_Visibility");

	Params::ULootContainerLabel_C_Get_Description_Visibility_Params Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Description_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText ULootContainerLabel_C::Get_Description_Text(const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_NotEqual_StrStr_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Description_Text");

	Params::ULootContainerLabel_C_Get_Description_Text_Params Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Use_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility ULootContainerLabel_C::Get_Use_Visibility(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Use_Visibility");

	Params::ULootContainerLabel_C_Get_Use_Visibility_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Use_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

class FText ULootContainerLabel_C::Get_Use_Text(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Use_Text");

	Params::ULootContainerLabel_C_Get_Use_Text_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Intelligence_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility ULootContainerLabel_C::Get_Intelligence_Visibility(bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Intelligence_Visibility");

	Params::ULootContainerLabel_C_Get_Intelligence_Visibility_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Intelligence_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText ULootContainerLabel_C::Get_Intelligence_Text(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Intelligence_Text");

	Params::ULootContainerLabel_C_Get_Intelligence_Text_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Dexterity_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility ULootContainerLabel_C::Get_Dexterity_Visibility(bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Dexterity_Visibility");

	Params::ULootContainerLabel_C_Get_Dexterity_Visibility_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Dexterity_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText ULootContainerLabel_C::Get_Dexterity_Text(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Dexterity_Text");

	Params::ULootContainerLabel_C_Get_Dexterity_Text_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Strength_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility ULootContainerLabel_C::Get_Strength_Visibility(bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Strength_Visibility");

	Params::ULootContainerLabel_C_Get_Strength_Visibility_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Strength_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText ULootContainerLabel_C::Get_Strength_Text(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Strength_Text");

	Params::ULootContainerLabel_C_Get_Strength_Text_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Armor_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility ULootContainerLabel_C::Get_Armor_Visibility(bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Armor_Visibility");

	Params::ULootContainerLabel_C_Get_Armor_Visibility_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Armor_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText ULootContainerLabel_C::Get_Armor_Text(class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Armor_Text");

	Params::ULootContainerLabel_C_Get_Armor_Text_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Damage_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility ULootContainerLabel_C::Get_Damage_Visibility(bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Damage_Visibility");

	Params::ULootContainerLabel_C_Get_Damage_Visibility_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Damage_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText ULootContainerLabel_C::Get_Damage_Text(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Damage_Text");

	Params::ULootContainerLabel_C_Get_Damage_Text_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility ULootContainerLabel_C::Get_Visibility(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Visibility");

	Params::ULootContainerLabel_C_Get_Visibility_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Type_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText ULootContainerLabel_C::Get_Type_Text(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Type_Text");

	Params::ULootContainerLabel_C_Get_Type_Text_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Name_Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ULootContainerLabel_C::Get_Name_Text()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Name_Text");

	Params::ULootContainerLabel_C_Get_Name_Text_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Border_Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQualityColors              LocalQualityColors                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LocalColor                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor ULootContainerLabel_C::Get_Border_Color(const struct FQualityColors& LocalQualityColors, const struct FLinearColor& LocalColor, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Border_Color");

	Params::ULootContainerLabel_C_Get_Border_Color_Params Parms{};

	Parms.LocalQualityColors = LocalQualityColors;
	Parms.LocalColor = LocalColor;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.Get_Border_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility ULootContainerLabel_C::Get_Border_Visibility(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Get_Border_Visibility");

	Params::ULootContainerLabel_C_Get_Border_Visibility_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootContainerLabel.LootContainerLabel_C.CheckForEarlyTermination
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULootContainerLabel_C::CheckForEarlyTermination()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "CheckForEarlyTermination");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LootContainerLabel.LootContainerLabel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULootContainerLabel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "Tick");

	Params::ULootContainerLabel_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootContainerLabel.LootContainerLabel_C.ExecuteUbergraph_LootContainerLabel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULootContainerLabel_C::ExecuteUbergraph_LootContainerLabel(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "ExecuteUbergraph_LootContainerLabel");

	Params::ULootContainerLabel_C_ExecuteUbergraph_LootContainerLabel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootContainerLabel.LootContainerLabel_C.BottomRightNotificationCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULootContainerLabel_C::BottomRightNotificationCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootContainerLabel_C", "BottomRightNotificationCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


