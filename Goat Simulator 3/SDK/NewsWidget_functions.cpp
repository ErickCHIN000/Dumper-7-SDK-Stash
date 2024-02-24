#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NewsWidget.NewsWidget_C
// (None)

class UClass* UNewsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewsWidget_C");

	return Clss;
}


// NewsWidget_C NewsWidget.Default__NewsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNewsWidget_C* UNewsWidget_C::GetDefaultObj()
{
	static class UNewsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNewsWidget_C*>(UNewsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NewsWidget.NewsWidget_C.SequenceEvent__ENTRYPOINTNewsWidget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNewsWidget_C::SequenceEvent__ENTRYPOINTNewsWidget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "SequenceEvent__ENTRYPOINTNewsWidget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewsWidget.NewsWidget_C.UpdateFromAnimationProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AnimationProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewsWidget_C::UpdateFromAnimationProgress(float AnimationProgress, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_Lerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "UpdateFromAnimationProgress");

	Params::UNewsWidget_C_UpdateFromAnimationProgress_Params Parms{};

	Parms.AnimationProgress = AnimationProgress;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsWidget.NewsWidget_C.Show Preview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewsIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PrevNewsIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    TmpTexture                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNewsPreviewDataByIndex_bOutSuccess                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FNewsPreviewEntry           CallFunc_GetNewsPreviewDataByIndex_ReturnValue                   (None)
// bool                               CallFunc_GetNewsPreviewDataByIndex_bOutSuccess_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FNewsPreviewEntry           CallFunc_GetNewsPreviewDataByIndex_ReturnValue_1                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNewsWidget_C::Show_Preview(int32 NewsIndex, int32 PrevNewsIndex, class UTexture* TmpTexture, bool CallFunc_GetNewsPreviewDataByIndex_bOutSuccess, const struct FNewsPreviewEntry& CallFunc_GetNewsPreviewDataByIndex_ReturnValue, bool CallFunc_GetNewsPreviewDataByIndex_bOutSuccess_1, const struct FNewsPreviewEntry& CallFunc_GetNewsPreviewDataByIndex_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "Show Preview");

	Params::UNewsWidget_C_Show_Preview_Params Parms{};

	Parms.NewsIndex = NewsIndex;
	Parms.PrevNewsIndex = PrevNewsIndex;
	Parms.TmpTexture = TmpTexture;
	Parms.CallFunc_GetNewsPreviewDataByIndex_bOutSuccess = CallFunc_GetNewsPreviewDataByIndex_bOutSuccess;
	Parms.CallFunc_GetNewsPreviewDataByIndex_ReturnValue = CallFunc_GetNewsPreviewDataByIndex_ReturnValue;
	Parms.CallFunc_GetNewsPreviewDataByIndex_bOutSuccess_1 = CallFunc_GetNewsPreviewDataByIndex_bOutSuccess_1;
	Parms.CallFunc_GetNewsPreviewDataByIndex_ReturnValue_1 = CallFunc_GetNewsPreviewDataByIndex_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsWidget.NewsWidget_C.OnNewsReceived
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FParsedNews                 ParsedNews                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNewsWidget_C::OnNewsReceived(struct FParsedNews& ParsedNews, bool bWasSuccessful, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Min_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "OnNewsReceived");

	Params::UNewsWidget_C_OnNewsReceived_Params Parms{};

	Parms.ParsedNews = ParsedNews;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsWidget.NewsWidget_C.GatherNews
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGNewsFeed*                 CallFunc_GetNewsFeedActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasReceivedNewsResponse_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNewsWidget_C::GatherNews(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AGGNewsFeed* CallFunc_GetNewsFeedActor_ReturnValue, bool CallFunc_HasReceivedNewsResponse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "GatherNews");

	Params::UNewsWidget_C_GatherNews_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNewsFeedActor_ReturnValue = CallFunc_GetNewsFeedActor_ReturnValue;
	Parms.CallFunc_HasReceivedNewsResponse_ReturnValue = CallFunc_HasReceivedNewsResponse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsWidget.NewsWidget_C.GetInitialWidgetFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UNewsWidget_C::GetInitialWidgetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "GetInitialWidgetFocus");

	Params::UNewsWidget_C_GetInitialWidgetFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NewsWidget.NewsWidget_C.UpdateNewsHeadline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNewsWidget_C::UpdateNewsHeadline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "UpdateNewsHeadline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewsWidget.NewsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNewsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewsWidget.NewsWidget_C.ShowNextPreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNewsWidget_C::ShowNextPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "ShowNextPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewsWidget.NewsWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewsWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "Tick");

	Params::UNewsWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsWidget.NewsWidget_C.WidgetAnimationEvt_NextNews_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UNewsWidget_C::WidgetAnimationEvt_NextNews_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "WidgetAnimationEvt_NextNews_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewsWidget.NewsWidget_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UNewsWidget_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "OnAddedToFocusPath");

	Params::UNewsWidget_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsWidget.NewsWidget_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UNewsWidget_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "OnRemovedFromFocusPath");

	Params::UNewsWidget_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsWidget.NewsWidget_C.BndEvt__NewsWidget_ButtonWidget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNewsWidget_C::BndEvt__NewsWidget_ButtonWidget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "BndEvt__NewsWidget_ButtonWidget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewsWidget.NewsWidget_C.BndEvt__NewsWidget_ButtonWidget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNewsWidget_C::BndEvt__NewsWidget_ButtonWidget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "BndEvt__NewsWidget_ButtonWidget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewsWidget.NewsWidget_C.ExecuteUbergraph_NewsWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetNewsPreviewDataByIndex_bOutSuccess                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FNewsPreviewEntry           CallFunc_GetNewsPreviewDataByIndex_ReturnValue                   (None)
// class FString                      CallFunc_GetNewsPreviewText_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_WrapInt_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewsWidget_C::ExecuteUbergraph_NewsWidget(int32 EntryPoint, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetNewsPreviewDataByIndex_bOutSuccess, const struct FNewsPreviewEntry& CallFunc_GetNewsPreviewDataByIndex_ReturnValue, const class FString& CallFunc_GetNewsPreviewText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_WrapInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsWidget_C", "ExecuteUbergraph_NewsWidget");

	Params::UNewsWidget_C_ExecuteUbergraph_NewsWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNewsPreviewDataByIndex_bOutSuccess = CallFunc_GetNewsPreviewDataByIndex_bOutSuccess;
	Parms.CallFunc_GetNewsPreviewDataByIndex_ReturnValue = CallFunc_GetNewsPreviewDataByIndex_ReturnValue;
	Parms.CallFunc_GetNewsPreviewText_ReturnValue = CallFunc_GetNewsPreviewText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_WrapInt_ReturnValue = CallFunc_WrapInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


