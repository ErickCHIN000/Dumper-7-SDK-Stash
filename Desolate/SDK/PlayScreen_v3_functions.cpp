#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayScreen_v3.PlayScreen_v3_C
// (None)

class UClass* UPlayScreen_v3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayScreen_v3_C");

	return Clss;
}


// PlayScreen_v3_C PlayScreen_v3.Default__PlayScreen_v3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayScreen_v3_C* UPlayScreen_v3_C::GetDefaultObj()
{
	static class UPlayScreen_v3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayScreen_v3_C*>(UPlayScreen_v3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayScreen_v3.PlayScreen_v3_C.GameHaveValidSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESaveSlot               CallFunc_FindBestSaveSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayScreen_v3_C::GameHaveValidSave(bool* Result, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, enum class ESaveSlot CallFunc_FindBestSaveSlot_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "GameHaveValidSave");

	Params::UPlayScreen_v3_C_GameHaveValidSave_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindBestSaveSlot_ReturnValue = CallFunc_FindBestSaveSlot_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PlayScreen_v3.PlayScreen_v3_C.Get_PrologueTooltipWrapper_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPlayScreen_v3_C::Get_PrologueTooltipWrapper_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "Get_PrologueTooltipWrapper_ToolTipWidget_0");

	Params::UPlayScreen_v3_C_Get_PrologueTooltipWrapper_ToolTipWidget_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayScreen_v3.PlayScreen_v3_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UPlayScreen_v3_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "OnKeyDown");

	Params::UPlayScreen_v3_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayScreen_v3.PlayScreen_v3_C.Get_CustomizationTooltipWrapper_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPlayScreen_v3_C::Get_CustomizationTooltipWrapper_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "Get_CustomizationTooltipWrapper_ToolTipWidget_0");

	Params::UPlayScreen_v3_C_Get_CustomizationTooltipWrapper_ToolTipWidget_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayScreen_v3.PlayScreen_v3_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UPlayScreen_v3_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "OnFocusReceived");

	Params::UPlayScreen_v3_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayScreen_v3.PlayScreen_v3_C.FocusCurrentButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHUserWidget*               CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGlobals*                  CallFunc_GetSHGlobals_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayScreen_v3_C::FocusCurrentButton(class USHUserWidget* CallFunc_GetWidget_ReturnValue, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "FocusCurrentButton");

	Params::UPlayScreen_v3_C_FocusCurrentButton_Params Parms{};

	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.CallFunc_GetSHGlobals_ReturnValue = CallFunc_GetSHGlobals_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayScreen_v3.PlayScreen_v3_C.Get_Back_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPlayScreen_v3_C::Get_Back_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "Get_Back_ToolTipWidget_0");

	Params::UPlayScreen_v3_C_Get_Back_ToolTipWidget_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayScreen_v3.PlayScreen_v3_C.Get_ConnectTooltipWrapper_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPlayScreen_v3_C::Get_ConnectTooltipWrapper_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "Get_ConnectTooltipWrapper_ToolTipWidget_0");

	Params::UPlayScreen_v3_C_Get_ConnectTooltipWrapper_ToolTipWidget_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayScreen_v3.PlayScreen_v3_C.Get_HostGameTooltipWrapper_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPlayScreen_v3_C::Get_HostGameTooltipWrapper_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "Get_HostGameTooltipWrapper_ToolTipWidget_0");

	Params::UPlayScreen_v3_C_Get_HostGameTooltipWrapper_ToolTipWidget_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayScreen_v3.PlayScreen_v3_C.OnWidgetSelectedEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GroupIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayScreen_v3_C::OnWidgetSelectedEvent_Event_0(int32 GroupIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "OnWidgetSelectedEvent_Event_0");

	Params::UPlayScreen_v3_C_OnWidgetSelectedEvent_Event_0_Params Parms{};

	Parms.GroupIndex = GroupIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayScreen_v3.PlayScreen_v3_C.DrawText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayScreen_v3_C::DrawText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "DrawText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayScreen_v3.PlayScreen_v3_C.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)
// Parameters:

void UPlayScreen_v3_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "OnSynchronizeProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayScreen_v3.PlayScreen_v3_C.ConstructMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayScreen_v3_C::ConstructMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "ConstructMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayScreen_v3.PlayScreen_v3_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayScreen_v3_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayScreen_v3.PlayScreen_v3_C.ShowInstant
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayScreen_v3_C::ShowInstant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "ShowInstant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayScreen_v3.PlayScreen_v3_C.OnTooltip_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayScreen_v3_C::OnTooltip_Event_0(class UWidget* Sender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "OnTooltip_Event_0");

	Params::UPlayScreen_v3_C_OnTooltip_Event_0_Params Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayScreen_v3.PlayScreen_v3_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayScreen_v3_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "Tick");

	Params::UPlayScreen_v3_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayScreen_v3.PlayScreen_v3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayScreen_v3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayScreen_v3.PlayScreen_v3_C.ExecuteUbergraph_PlayScreen_v3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_GroupIndex                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue_2                               (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_3                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_4                               (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerState*              K2Node_DynamicCast_AsSHPlayer_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_3                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_4                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHUserWidget*               CallFunc_GetSelectedWidget_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue_5                               (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class ASHPlayerState*              K2Node_DynamicCast_AsSHPlayer_State_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_6                               (None)
// bool                               CallFunc_GameHaveValidSave_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_5                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_7                           (None)
// class UWidget*                     K2Node_CustomEvent_Sender                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue_7                               (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayScreen_v3_C::ExecuteUbergraph_PlayScreen_v3(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_GroupIndex, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_TextToUpper_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_TextToUpper_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_4, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_5, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State_1, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_MakeLiteralText_ReturnValue_6, class FText CallFunc_TextToUpper_ReturnValue_6, bool CallFunc_GameHaveValidSave_Result, class UPanelSlot* CallFunc_AddChild_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_7, class UWidget* K2Node_CustomEvent_Sender, class FText CallFunc_TextToUpper_ReturnValue_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayScreen_v3_C", "ExecuteUbergraph_PlayScreen_v3");

	Params::UPlayScreen_v3_C_ExecuteUbergraph_PlayScreen_v3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_GroupIndex = K2Node_CustomEvent_GroupIndex;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_TextToUpper_ReturnValue_2 = CallFunc_TextToUpper_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_3 = CallFunc_TextToUpper_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_TextToUpper_ReturnValue_4 = CallFunc_TextToUpper_ReturnValue_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHPlayer_State = K2Node_DynamicCast_AsSHPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_2 = CallFunc_AddChild_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue_3 = CallFunc_AddChild_ReturnValue_3;
	Parms.CallFunc_AddChild_ReturnValue_4 = CallFunc_AddChild_ReturnValue_4;
	Parms.CallFunc_GetSelectedWidget_ReturnValue = CallFunc_GetSelectedWidget_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_5 = CallFunc_TextToUpper_ReturnValue_5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsSHPlayer_State_1 = K2Node_DynamicCast_AsSHPlayer_State_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.CallFunc_TextToUpper_ReturnValue_6 = CallFunc_TextToUpper_ReturnValue_6;
	Parms.CallFunc_GameHaveValidSave_Result = CallFunc_GameHaveValidSave_Result;
	Parms.CallFunc_AddChild_ReturnValue_5 = CallFunc_AddChild_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_7 = CallFunc_MakeLiteralText_ReturnValue_7;
	Parms.K2Node_CustomEvent_Sender = K2Node_CustomEvent_Sender;
	Parms.CallFunc_TextToUpper_ReturnValue_7 = CallFunc_TextToUpper_ReturnValue_7;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


