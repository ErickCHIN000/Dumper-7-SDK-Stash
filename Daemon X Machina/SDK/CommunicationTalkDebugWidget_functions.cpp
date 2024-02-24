#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CommunicationTalkDebugWidget.CommunicationTalkDebugWidget_C
// (None)

class UClass* UCommunicationTalkDebugWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommunicationTalkDebugWidget_C");

	return Clss;
}


// CommunicationTalkDebugWidget_C CommunicationTalkDebugWidget.Default__CommunicationTalkDebugWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommunicationTalkDebugWidget_C* UCommunicationTalkDebugWidget_C::GetDefaultObj()
{
	static class UCommunicationTalkDebugWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommunicationTalkDebugWidget_C*>(UCommunicationTalkDebugWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CommunicationTalkDebugWidget.CommunicationTalkDebugWidget_C.GetControlActorFromLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATTLCommunicationTalkControlActor*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLCommunicationTalkControlActor*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommunicationTalkDebugWidget_C::GetControlActorFromLevel(TArray<class ATTLCommunicationTalkControlActor*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsValid_ReturnValue, class ATTLCommunicationTalkControlActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommunicationTalkDebugWidget_C", "GetControlActorFromLevel");

	Params::UCommunicationTalkDebugWidget_C_GetControlActorFromLevel_Params Parms{};

	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommunicationTalkDebugWidget.CommunicationTalkDebugWidget_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommunicationTalkDebugWidget_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommunicationTalkDebugWidget_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommunicationTalkDebugWidget.CommunicationTalkDebugWidget_C.UpdateList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommunicationTalkDebugWidget_C::UpdateList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommunicationTalkDebugWidget_C", "UpdateList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommunicationTalkDebugWidget.CommunicationTalkDebugWidget_C.ExecuteUbergraph_CommunicationTalkDebugWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIDebugTextWidget_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIDebugTextWidget_C*        CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo1                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIDebugTextWidget_C*        K2Node_DynamicCast_AsAIDebug_Text_Widget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo2                                 (HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIDebugTextWidget_C*        K2Node_DynamicCast_AsAIDebug_Text_Widget1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIDebugTextWidget_C*        CallFunc_Create_ReturnValue2                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo3                                 (HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue2                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo4                                 (HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIDebugTextWidget_C*        K2Node_DynamicCast_AsAIDebug_Text_Widget2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo5                                 (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FTTLCommunicationTalkRequest>CallFunc_GetMessageDataCoolTimeList_ReturnValue                  (ZeroConstructor, ReferenceParm)
// TArray<struct FTTLCommunicationTalkCoolTimeInfo>CallFunc_GetMessageSetCoolTimeList_ReturnValue                   (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Float_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FTTLCommunicationTalkRequestHistory>CallFunc_GetRequestHistoryList_ReturnValue                       (ZeroConstructor, ReferenceParm)
// class FString                      CallFunc_Conv_NameToString_ReturnValue1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Float_ReturnValue1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Float_ReturnValue2                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue1                          (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue2                          (None)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue3                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIDebugTextWidget_C*        K2Node_DynamicCast_AsAIDebug_Text_Widget3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue4                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIDebugTextWidget_C*        K2Node_DynamicCast_AsAIDebug_Text_Widget4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue4                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommunicationTalkDebugWidget_C::ExecuteUbergraph_CommunicationTalkDebugWidget(int32 EntryPoint, class UAIDebugTextWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UAIDebugTextWidget_C* CallFunc_Create_ReturnValue1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, int32 Temp_int_Variable, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Variable2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UAIDebugTextWidget_C* K2Node_DynamicCast_AsAIDebug_Text_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo2, int32 CallFunc_GetChildrenCount_ReturnValue1, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue1, class UWidget* CallFunc_GetChildAt_ReturnValue1, int32 CallFunc_GetChildrenCount_ReturnValue3, class UAIDebugTextWidget_C* K2Node_DynamicCast_AsAIDebug_Text_Widget1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, class UAIDebugTextWidget_C* CallFunc_Create_ReturnValue2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo3, class UPanelSlot* CallFunc_AddChild_ReturnValue2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo4, int32 Temp_int_Variable3, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, class UWidget* CallFunc_GetChildAt_ReturnValue2, class UAIDebugTextWidget_C* K2Node_DynamicCast_AsAIDebug_Text_Widget2, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Add_IntInt_ReturnValue3, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo5, bool CallFunc_IsValid_ReturnValue, TArray<struct FTTLCommunicationTalkRequest>& CallFunc_GetMessageDataCoolTimeList_ReturnValue, TArray<struct FTTLCommunicationTalkCoolTimeInfo>& CallFunc_GetMessageSetCoolTimeList_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_BuildString_Float_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue1, TArray<struct FTTLCommunicationTalkRequestHistory>& CallFunc_GetRequestHistoryList_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue1, const class FString& CallFunc_BuildString_Int_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue2, const class FString& CallFunc_BuildString_Float_ReturnValue1, const class FString& CallFunc_BuildString_Float_ReturnValue2, class FText CallFunc_Conv_StringToText_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Variable4, int32 CallFunc_Subtract_IntInt_ReturnValue3, class UWidget* CallFunc_GetChildAt_ReturnValue3, bool CallFunc_LessEqual_IntInt_ReturnValue2, class UAIDebugTextWidget_C* K2Node_DynamicCast_AsAIDebug_Text_Widget3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_LessEqual_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, int32 CallFunc_GetChildrenCount_ReturnValue4, class UWidget* CallFunc_GetChildAt_ReturnValue4, int32 CallFunc_Subtract_IntInt_ReturnValue4, class UAIDebugTextWidget_C* K2Node_DynamicCast_AsAIDebug_Text_Widget4, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_LessEqual_IntInt_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommunicationTalkDebugWidget_C", "ExecuteUbergraph_CommunicationTalkDebugWidget");

	Params::UCommunicationTalkDebugWidget_C_ExecuteUbergraph_CommunicationTalkDebugWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_MakeStruct_SlateFontInfo1 = K2Node_MakeStruct_SlateFontInfo1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsAIDebug_Text_Widget = K2Node_DynamicCast_AsAIDebug_Text_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.K2Node_MakeStruct_SlateFontInfo2 = K2Node_MakeStruct_SlateFontInfo2;
	Parms.CallFunc_GetChildrenCount_ReturnValue1 = CallFunc_GetChildrenCount_ReturnValue1;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue2 = CallFunc_GetChildrenCount_ReturnValue2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue1 = CallFunc_AddChild_ReturnValue1;
	Parms.CallFunc_GetChildAt_ReturnValue1 = CallFunc_GetChildAt_ReturnValue1;
	Parms.CallFunc_GetChildrenCount_ReturnValue3 = CallFunc_GetChildrenCount_ReturnValue3;
	Parms.K2Node_DynamicCast_AsAIDebug_Text_Widget1 = K2Node_DynamicCast_AsAIDebug_Text_Widget1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue1 = CallFunc_GreaterEqual_IntInt_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.K2Node_MakeStruct_SlateFontInfo3 = K2Node_MakeStruct_SlateFontInfo3;
	Parms.CallFunc_AddChild_ReturnValue2 = CallFunc_AddChild_ReturnValue2;
	Parms.K2Node_MakeStruct_SlateFontInfo4 = K2Node_MakeStruct_SlateFontInfo4;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue2 = CallFunc_GreaterEqual_IntInt_ReturnValue2;
	Parms.CallFunc_GetChildAt_ReturnValue2 = CallFunc_GetChildAt_ReturnValue2;
	Parms.K2Node_DynamicCast_AsAIDebug_Text_Widget2 = K2Node_DynamicCast_AsAIDebug_Text_Widget2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.K2Node_MakeStruct_SlateFontInfo5 = K2Node_MakeStruct_SlateFontInfo5;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMessageDataCoolTimeList_ReturnValue = CallFunc_GetMessageDataCoolTimeList_ReturnValue;
	Parms.CallFunc_GetMessageSetCoolTimeList_ReturnValue = CallFunc_GetMessageSetCoolTimeList_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_BuildString_Float_ReturnValue = CallFunc_BuildString_Float_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue1 = CallFunc_LessEqual_IntInt_ReturnValue1;
	Parms.CallFunc_GetRequestHistoryList_ReturnValue = CallFunc_GetRequestHistoryList_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue1 = CallFunc_Conv_NameToString_ReturnValue1;
	Parms.CallFunc_BuildString_Int_ReturnValue = CallFunc_BuildString_Int_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue2 = CallFunc_Conv_NameToString_ReturnValue2;
	Parms.CallFunc_BuildString_Float_ReturnValue1 = CallFunc_BuildString_Float_ReturnValue1;
	Parms.CallFunc_BuildString_Float_ReturnValue2 = CallFunc_BuildString_Float_ReturnValue2;
	Parms.CallFunc_Conv_StringToText_ReturnValue1 = CallFunc_Conv_StringToText_ReturnValue1;
	Parms.CallFunc_Conv_StringToText_ReturnValue2 = CallFunc_Conv_StringToText_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue3 = CallFunc_Subtract_IntInt_ReturnValue3;
	Parms.CallFunc_GetChildAt_ReturnValue3 = CallFunc_GetChildAt_ReturnValue3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.K2Node_DynamicCast_AsAIDebug_Text_Widget3 = K2Node_DynamicCast_AsAIDebug_Text_Widget3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue3 = CallFunc_LessEqual_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_GetChildrenCount_ReturnValue4 = CallFunc_GetChildrenCount_ReturnValue4;
	Parms.CallFunc_GetChildAt_ReturnValue4 = CallFunc_GetChildAt_ReturnValue4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue4 = CallFunc_Subtract_IntInt_ReturnValue4;
	Parms.K2Node_DynamicCast_AsAIDebug_Text_Widget4 = K2Node_DynamicCast_AsAIDebug_Text_Widget4;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue4 = CallFunc_LessEqual_IntInt_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}

}


