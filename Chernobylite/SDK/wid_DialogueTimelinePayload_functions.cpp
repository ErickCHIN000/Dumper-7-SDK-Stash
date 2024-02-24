#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C
// (None)

class UClass* UWid_DialogueTimelinePayload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DialogueTimelinePayload_C");

	return Clss;
}


// wid_DialogueTimelinePayload_C wid_DialogueTimelinePayload.Default__wid_DialogueTimelinePayload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DialogueTimelinePayload_C* UWid_DialogueTimelinePayload_C::GetDefaultObj()
{
	static class UWid_DialogueTimelinePayload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DialogueTimelinePayload_C*>(UWid_DialogueTimelinePayload_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.CreateAffectedTextEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EBasicResultType        ReactionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBold                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_DialogueTimelinePayload_AffectedEntry_C*Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_DialogueTimelinePayload_AffectedEntry_C*CreatedWidget                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_DialogueTimelinePayload_AffectedEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueTimelinePayload_C::CreateAffectedTextEntry(class FText Text, enum class EBasicResultType ReactionType, class UPanelWidget* Container, bool IsBold, class UWid_DialogueTimelinePayload_AffectedEntry_C** Widget, class UWid_DialogueTimelinePayload_AffectedEntry_C* CreatedWidget, class UWid_DialogueTimelinePayload_AffectedEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "CreateAffectedTextEntry");

	Params::UWid_DialogueTimelinePayload_C_CreateAffectedTextEntry_Params Parms{};

	Parms.Text = Text;
	Parms.ReactionType = ReactionType;
	Parms.Container = Container;
	Parms.IsBold = IsBold;
	Parms.CreatedWidget = CreatedWidget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateLabels
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_FormatText_Output                                       (None)
// class FText                        CallFunc_FormatText_Output_1                                     (None)

void UWid_DialogueTimelinePayload_C::UpdateLabels(class FText CallFunc_FormatText_Output, class FText CallFunc_FormatText_Output_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "UpdateLabels");

	Params::UWid_DialogueTimelinePayload_C_UpdateLabels_Params Parms{};

	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.CallFunc_FormatText_Output_1 = CallFunc_FormatText_Output_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.AddDashToString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Result                                                           (Parm, OutParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_DialogueTimelinePayload_C::AddDashToString(class FText Text, class FText* Result, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "AddDashToString");

	Params::UWid_DialogueTimelinePayload_C_AddDashToString_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.AddCompanionLeft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NewText                                                          (Edit, BlueprintVisible)
// class FText                        CallFunc_ReplaceStringWithCompanionName_ReturnValue              (None)
// class FText                        CallFunc_AddDashToString_Result                                  (None)
// class UWid_DialogueTimelinePayload_Entry_C*CallFunc_CreateTextEntry_Widget                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueTimelinePayload_C::AddCompanionLeft(class FName CompanionID, class FText NewText, class FText CallFunc_ReplaceStringWithCompanionName_ReturnValue, class FText CallFunc_AddDashToString_Result, class UWid_DialogueTimelinePayload_Entry_C* CallFunc_CreateTextEntry_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "AddCompanionLeft");

	Params::UWid_DialogueTimelinePayload_C_AddCompanionLeft_Params Parms{};

	Parms.CompanionID = CompanionID;
	Parms.NewText = NewText;
	Parms.CallFunc_ReplaceStringWithCompanionName_ReturnValue = CallFunc_ReplaceStringWithCompanionName_ReturnValue;
	Parms.CallFunc_AddDashToString_Result = CallFunc_AddDashToString_Result;
	Parms.CallFunc_CreateTextEntry_Widget = CallFunc_CreateTextEntry_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.ReplaceStringWithCompanionName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      ToReplace                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CompanionName                                                    (Edit, BlueprintVisible)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceBase_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FActorInfo                  CallFunc_K2_GetActorInfo_Info                                    (None)
// bool                               CallFunc_K2_GetActorInfo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UWid_DialogueTimelinePayload_C::ReplaceStringWithCompanionName(class FText Text, const class FString& ToReplace, class FName CompanionID, class FText CompanionName, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "ReplaceStringWithCompanionName");

	Params::UWid_DialogueTimelinePayload_C_ReplaceStringWithCompanionName_Params Parms{};

	Parms.Text = Text;
	Parms.ToReplace = ToReplace;
	Parms.CompanionID = CompanionID;
	Parms.CompanionName = CompanionName;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_GetCGGameInstanceBase_ReturnValue = CallFunc_GetCGGameInstanceBase_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_K2_GetActorInfo_Info = CallFunc_K2_GetActorInfo_Info;
	Parms.CallFunc_K2_GetActorInfo_ReturnValue = CallFunc_K2_GetActorInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.IsCompanionEmployed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceBase_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceBase_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceBase_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompanionEmployed_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueTimelinePayload_C::IsCompanionEmployed(class FName CompanionID, bool* Result, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool K2Node_SwitchName_CmpSuccess, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue_1, bool CallFunc_PermanentDataGetValue_ReturnValue, bool CallFunc_PermanentDataGetValue_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue_2, bool CallFunc_IsCompanionEmployed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "IsCompanionEmployed");

	Params::UWid_DialogueTimelinePayload_C_IsCompanionEmployed_Params Parms{};

	Parms.CompanionID = CompanionID;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_GetCGGameInstanceBase_ReturnValue = CallFunc_GetCGGameInstanceBase_ReturnValue;
	Parms.CallFunc_GetCGGameInstanceBase_ReturnValue_1 = CallFunc_GetCGGameInstanceBase_ReturnValue_1;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue = CallFunc_PermanentDataGetValue_ReturnValue;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue_1 = CallFunc_PermanentDataGetValue_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCGGameInstanceBase_ReturnValue_2 = CallFunc_GetCGGameInstanceBase_ReturnValue_2;
	Parms.CallFunc_IsCompanionEmployed_ReturnValue = CallFunc_IsCompanionEmployed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.AddCompanionReaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogueTimelinePayloadCompanionReactionCompnionInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class FText                        NewText                                                          (Edit, BlueprintVisible)
// enum class EDialogueTimelinePayloadCompanionReactionTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBasicResultType        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompanionEmployed_Result                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBasicResultType        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBasicResultType        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDialogueTimelinePayloadCompanionReactionTypeTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        CallFunc_ReplaceStringWithCompanionName_ReturnValue              (None)
// class FText                        CallFunc_AddDashToString_Result                                  (None)
// class UWid_DialogueTimelinePayload_Entry_C*CallFunc_CreateTextEntry_Widget                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueTimelinePayload_C::AddCompanionReaction(const struct FDialogueTimelinePayloadCompanionReaction& CompnionInfo, class FText NewText, enum class EDialogueTimelinePayloadCompanionReactionType Temp_byte_Variable, enum class EBasicResultType Temp_byte_Variable_1, bool CallFunc_IsCompanionEmployed_Result, enum class EBasicResultType Temp_byte_Variable_2, enum class EBasicResultType K2Node_Select_Default, enum class EDialogueTimelinePayloadCompanionReactionType Temp_byte_Variable_3, class FText K2Node_Select_Default_1, class FText CallFunc_ReplaceStringWithCompanionName_ReturnValue, class FText CallFunc_AddDashToString_Result, class UWid_DialogueTimelinePayload_Entry_C* CallFunc_CreateTextEntry_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "AddCompanionReaction");

	Params::UWid_DialogueTimelinePayload_C_AddCompanionReaction_Params Parms{};

	Parms.CompnionInfo = CompnionInfo;
	Parms.NewText = NewText;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsCompanionEmployed_Result = CallFunc_IsCompanionEmployed_Result;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_ReplaceStringWithCompanionName_ReturnValue = CallFunc_ReplaceStringWithCompanionName_ReturnValue;
	Parms.CallFunc_AddDashToString_Result = CallFunc_AddDashToString_Result;
	Parms.CallFunc_CreateTextEntry_Widget = CallFunc_CreateTextEntry_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateContainerVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueTimelinePayload_C::UpdateContainerVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "UpdateContainerVisibility");

	Params::UWid_DialogueTimelinePayload_C_UpdateContainerVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDesiredSize_ReturnValue_1 = CallFunc_GetDesiredSize_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.GetQuestName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        QuestID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQuestInfoInput             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceBase_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDescriptionInfo            CallFunc_GetQuestDescription_ReturnValue                         (None)

void UWid_DialogueTimelinePayload_C::GetQuestName(class FName QuestID, class FText* Text, bool* Result, const struct FQuestInfoInput& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "GetQuestName");

	Params::UWid_DialogueTimelinePayload_C_GetQuestName_Params Parms{};

	Parms.QuestID = QuestID;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetCGGameInstanceBase_ReturnValue = CallFunc_GetCGGameInstanceBase_ReturnValue;
	Parms.CallFunc_GetQuestDescription_ReturnValue = CallFunc_GetQuestDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.CreateTextEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EBasicResultType        ReactionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBold                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_DialogueTimelinePayload_Entry_C*Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_DialogueTimelinePayload_Entry_C*CreatedWidget                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_DialogueTimelinePayload_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueTimelinePayload_C::CreateTextEntry(class FText Text, enum class EBasicResultType ReactionType, class UPanelWidget* Container, bool IsBold, class UWid_DialogueTimelinePayload_Entry_C** Widget, class UWid_DialogueTimelinePayload_Entry_C* CreatedWidget, class UWid_DialogueTimelinePayload_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "CreateTextEntry");

	Params::UWid_DialogueTimelinePayload_C_CreateTextEntry_Params Parms{};

	Parms.Text = Text;
	Parms.ReactionType = ReactionType;
	Parms.Container = Container;
	Parms.IsBold = IsBold;
	Parms.CreatedWidget = CreatedWidget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.AddAffectedText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogueTimelinePayloadAffectedQuestInfoAffectedInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NewText                                                          (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetQuestName_Text                                       (None)
// bool                               CallFunc_GetQuestName_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_FormatText_Output                                       (None)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_DialogueTimelinePayload_AffectedEntry_C*CallFunc_CreateAffectedTextEntry_Widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// bool                               CallFunc_NotEqual_TextText_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UWid_DialogueTimelinePayload_C::AddAffectedText(const struct FDialogueTimelinePayloadAffectedQuestInfo& AffectedInfo, class FText NewText, bool Temp_bool_Variable, class FText CallFunc_GetQuestName_Text, bool CallFunc_GetQuestName_Result, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_FormatText_Output, bool CallFunc_NotEqual_TextText_ReturnValue, class UWid_DialogueTimelinePayload_AffectedEntry_C* CallFunc_CreateAffectedTextEntry_Widget, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_NotEqual_TextText_ReturnValue_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "AddAffectedText");

	Params::UWid_DialogueTimelinePayload_C_AddAffectedText_Params Parms{};

	Parms.AffectedInfo = AffectedInfo;
	Parms.NewText = NewText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetQuestName_Text = CallFunc_GetQuestName_Text;
	Parms.CallFunc_GetQuestName_Result = CallFunc_GetQuestName_Result;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.CallFunc_CreateAffectedTextEntry_Widget = CallFunc_CreateAffectedTextEntry_Widget;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_NotEqual_TextText_ReturnValue_1 = CallFunc_NotEqual_TextText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateCompanionLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueTimelinePayload_C::UpdateCompanionLeft(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "UpdateCompanionLeft");

	Params::UWid_DialogueTimelinePayload_C_UpdateCompanionLeft_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateCompanionReactions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogueTimelinePayloadCompanionReactionCallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueTimelinePayload_C::UpdateCompanionReactions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDialogueTimelinePayloadCompanionReaction& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "UpdateCompanionReactions");

	Params::UWid_DialogueTimelinePayload_C_UpdateCompanionReactions_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateNAR
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_AddDashToString_Result                                  (None)
// class FText                        CallFunc_AddDashToString_Result_1                                (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueTimelinePayload_C::UpdateNAR(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_AddDashToString_Result, class FText CallFunc_AddDashToString_Result_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "UpdateNAR");

	Params::UWid_DialogueTimelinePayload_C_UpdateNAR_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_AddDashToString_Result = CallFunc_AddDashToString_Result;
	Parms.CallFunc_AddDashToString_Result_1 = CallFunc_AddDashToString_Result_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateAffectedInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogueTimelinePayloadAffectedQuestInfoCallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueTimelinePayload_C::UpdateAffectedInfo(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDialogueTimelinePayloadAffectedQuestInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "UpdateAffectedInfo");

	Params::UWid_DialogueTimelinePayload_C_UpdateAffectedInfo_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateQuestName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetQuestName_Text                                       (None)
// bool                               CallFunc_GetQuestName_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatText_Output                                       (None)

void UWid_DialogueTimelinePayload_C::UpdateQuestName(class FText CallFunc_GetQuestName_Text, bool CallFunc_GetQuestName_Result, class FText CallFunc_FormatText_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "UpdateQuestName");

	Params::UWid_DialogueTimelinePayload_C_UpdateQuestName_Params Parms{};

	Parms.CallFunc_GetQuestName_Text = CallFunc_GetQuestName_Text;
	Parms.CallFunc_GetQuestName_Result = CallFunc_GetQuestName_Result;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.InitPayload
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDialogueTimelinePayloadDataPayload                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWid_DialogueTimelinePayload_C::InitPayload(struct FDialogueTimelinePayloadData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "InitPayload");

	Params::UWid_DialogueTimelinePayload_C_InitPayload_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueTimelinePayload_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.RequestDestruct
// (Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueTimelinePayload_C::RequestDestruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "RequestDestruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueTimelinePayload_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "PreConstruct");

	Params::UWid_DialogueTimelinePayload_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.BindPhotomodeToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialogueTimelinePayload_C::BindPhotomodeToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "BindPhotomodeToggled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UnbindPhotomodeToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialogueTimelinePayload_C::UnbindPhotomodeToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "UnbindPhotomodeToggled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.PhotomodeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsActivated                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueTimelinePayload_C::PhotomodeChanged(bool bIsActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "PhotomodeChanged");

	Params::UWid_DialogueTimelinePayload_C_PhotomodeChanged_Params Parms{};

	Parms.bIsActivated = bIsActivated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueTimelinePayload_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.ExecuteUbergraph_wid_DialogueTimelinePayload
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogueTimelinePayloadDataK2Node_Event_Payload                                             (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGGameModeBase*             CallFunc_GetCGGameModeBase_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsActivated                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueTimelinePayload_C::ExecuteUbergraph_wid_DialogueTimelinePayload(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FDialogueTimelinePayloadData& K2Node_Event_Payload, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool K2Node_Event_IsDesignTime, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue, bool K2Node_CustomEvent_bIsActivated, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_C", "ExecuteUbergraph_wid_DialogueTimelinePayload");

	Params::UWid_DialogueTimelinePayload_C_ExecuteUbergraph_wid_DialogueTimelinePayload_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_Payload = K2Node_Event_Payload;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCGGameModeBase_ReturnValue = CallFunc_GetCGGameModeBase_ReturnValue;
	Parms.K2Node_CustomEvent_bIsActivated = K2Node_CustomEvent_bIsActivated;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


