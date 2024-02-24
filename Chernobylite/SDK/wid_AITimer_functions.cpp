#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_AITimer.wid_AITimer_C
// (None)

class UClass* UWid_AITimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_AITimer_C");

	return Clss;
}


// wid_AITimer_C wid_AITimer.Default__wid_AITimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_AITimer_C* UWid_AITimer_C::GetDefaultObj()
{
	static class UWid_AITimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_AITimer_C*>(UWid_AITimer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_AITimer.wid_AITimer_C.GetFrameTextureByCustomType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EAITimerCustomFrameType FrameType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAITimerCustomFrameType Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UWid_AITimer_C::GetFrameTextureByCustomType(enum class EAITimerCustomFrameType FrameType, enum class EAITimerCustomFrameType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "GetFrameTextureByCustomType");

	Params::UWid_AITimer_C_GetFrameTextureByCustomType_Params Parms{};

	Parms.FrameType = FrameType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_AITimer.wid_AITimer_C.CustomUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILogType              AIType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAITimerCustomFrameType FrameType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AdditionalTextID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FText>   KeyTextMap                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        AdditionalText                                                   (Edit, BlueprintVisible)
// struct FLocalizedTextInfo          CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTextBasedOnType_ReturnValue                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetFrameTextureByCustomType_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_ReplaceKeyWithText_NewText                              (None)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_AITimer_C::CustomUpdate(enum class EAILogType AIType, enum class EAITimerCustomFrameType FrameType, class FName AdditionalTextID, TMap<class FString, class FText> KeyTextMap, class FText AdditionalText, const struct FLocalizedTextInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_GetTextBasedOnType_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UTexture2D* CallFunc_GetFrameTextureByCustomType_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_ReplaceKeyWithText_NewText, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "CustomUpdate");

	Params::UWid_AITimer_C_CustomUpdate_Params Parms{};

	Parms.AIType = AIType;
	Parms.FrameType = FrameType;
	Parms.AdditionalTextID = AdditionalTextID;
	Parms.KeyTextMap = KeyTextMap;
	Parms.AdditionalText = AdditionalText;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetTextBasedOnType_ReturnValue = CallFunc_GetTextBasedOnType_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetFrameTextureByCustomType_ReturnValue = CallFunc_GetFrameTextureByCustomType_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_ReplaceKeyWithText_NewText = CallFunc_ReplaceKeyWithText_NewText;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AITimer.wid_AITimer_C.RefreshVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInVisible                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRenderOpacity_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_AITimer_C::RefreshVisibility(bool bInVisible, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "RefreshVisibility");

	Params::UWid_AITimer_C_RefreshVisibility_Params Parms{};

	Parms.bInVisible = bInVisible;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue_1 = CallFunc_IsAnimationPlayingForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue_1 = CallFunc_GetRenderOpacity_ReturnValue_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AITimer.wid_AITimer_C.GetLongestChaseTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<float>                      InChaseTimesElapsed                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<float>                      InChaseTimesMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              OutLongestChaseTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      Combinations                                                     (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MaxOfFloatArray_IndexOfMaxValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MaxOfFloatArray_MaxValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AITimer_C::GetLongestChaseTime(TArray<float>& InChaseTimesElapsed, TArray<float>& InChaseTimesMax, float* OutLongestChaseTime, const TArray<float>& Combinations, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_MaxOfFloatArray_IndexOfMaxValue, float CallFunc_MaxOfFloatArray_MaxValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "GetLongestChaseTime");

	Params::UWid_AITimer_C_GetLongestChaseTime_Params Parms{};

	Parms.InChaseTimesElapsed = InChaseTimesElapsed;
	Parms.InChaseTimesMax = InChaseTimesMax;
	Parms.Combinations = Combinations;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MaxOfFloatArray_IndexOfMaxValue = CallFunc_MaxOfFloatArray_IndexOfMaxValue;
	Parms.CallFunc_MaxOfFloatArray_MaxValue = CallFunc_MaxOfFloatArray_MaxValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLongestChaseTime != nullptr)
		*OutLongestChaseTime = Parms.OutLongestChaseTime;

}


// Function wid_AITimer.wid_AITimer_C.GetShortestChaseTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<float>                      InChaseTimesElapsed                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<float>                      InChaseTimesMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              OutShortestChaseTime                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      Combinations                                                     (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MinOfFloatArray_IndexOfMinValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MinOfFloatArray_MinValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AITimer_C::GetShortestChaseTime(TArray<float>& InChaseTimesElapsed, TArray<float>& InChaseTimesMax, float* OutShortestChaseTime, const TArray<float>& Combinations, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_MinOfFloatArray_IndexOfMinValue, float CallFunc_MinOfFloatArray_MinValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "GetShortestChaseTime");

	Params::UWid_AITimer_C_GetShortestChaseTime_Params Parms{};

	Parms.InChaseTimesElapsed = InChaseTimesElapsed;
	Parms.InChaseTimesMax = InChaseTimesMax;
	Parms.Combinations = Combinations;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MinOfFloatArray_IndexOfMinValue = CallFunc_MinOfFloatArray_IndexOfMinValue;
	Parms.CallFunc_MinOfFloatArray_MinValue = CallFunc_MinOfFloatArray_MinValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutShortestChaseTime != nullptr)
		*OutShortestChaseTime = Parms.OutShortestChaseTime;

}


// Function wid_AITimer.wid_AITimer_C.GetTextBasedOnType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILogType              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EAILogType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWid_AITimer_C::GetTextBasedOnType(enum class EAILogType Type, enum class EAILogType Temp_byte_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "GetTextBasedOnType");

	Params::UWid_AITimer_C_GetTextBasedOnType_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_AITimer.wid_AITimer_C.GetFrameTexture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILogType              LogType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILogType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AITimer_C::GetFrameTexture(enum class EAILogType LogType, class UTexture2D** Texture, enum class EAILogType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "GetFrameTexture");

	Params::UWid_AITimer_C_GetFrameTexture_Params Parms{};

	Parms.LogType = LogType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function wid_AITimer.wid_AITimer_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILogType              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetFrameTexture_Texture                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTextBasedOnType_ReturnValue                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_AITimer_C::Update(enum class EAILogType Type, const class FString& Duration, class UTexture2D* CallFunc_GetFrameTexture_Texture, class FText CallFunc_GetTextBasedOnType_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "Update");

	Params::UWid_AITimer_C_Update_Params Parms{};

	Parms.Type = Type;
	Parms.Duration = Duration;
	Parms.CallFunc_GetFrameTexture_Texture = CallFunc_GetFrameTexture_Texture;
	Parms.CallFunc_GetTextBasedOnType_ReturnValue = CallFunc_GetTextBasedOnType_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AITimer.wid_AITimer_C.Tick1Sec
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AITimer_C::Tick1Sec()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "Tick1Sec");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AITimer.wid_AITimer_C.AggroEmpty
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AITimer_C::AggroEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "AggroEmpty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AITimer.wid_AITimer_C.DarkStalkerAggroed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AITimer_C::DarkStalkerAggroed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "DarkStalkerAggroed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AITimer.wid_AITimer_C.HuntSquad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AITimer_C::HuntSquad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "HuntSquad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AITimer.wid_AITimer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AITimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "Tick");

	Params::UWid_AITimer_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AITimer.wid_AITimer_C.ChaseSquad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AITimer_C::ChaseSquad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "ChaseSquad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AITimer.wid_AITimer_C.BindPhotomodeToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AITimer_C::BindPhotomodeToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "BindPhotomodeToggled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AITimer.wid_AITimer_C.UnbindPhotomodeToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AITimer_C::UnbindPhotomodeToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "UnbindPhotomodeToggled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AITimer.wid_AITimer_C.PhotomodeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsActivated                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_AITimer_C::PhotomodeChanged(bool bIsActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "PhotomodeChanged");

	Params::UWid_AITimer_C_PhotomodeChanged_Params Parms{};

	Parms.bIsActivated = bIsActivated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AITimer.wid_AITimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_AITimer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AITimer.wid_AITimer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_AITimer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AITimer.wid_AITimer_C.ExecuteUbergraph_wid_AITimer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESquadType              Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACGAICharacter*>      CallFunc_GetCurrentAggroList_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ContainsChildOf_bOutContains                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainsChildOf_bOutContains_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESquadType              Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MaxOfFloatArray_IndexOfMaxValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MaxOfFloatArray_MaxValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_FloatToMinSec_OutMinsec                                 (ZeroConstructor, HasGetValueTypeHash)
// class ACGAICharacter*              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICh_darkStalker_00_Interface_C>K2Node_DynamicCast_AsCh_Dark_Stalker_00_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGSoldier*                  K2Node_DynamicCast_AsCGSoldier                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetTimerRemainingString_String                          (ZeroConstructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetCGBlackboardComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAsFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGSquadManager*             CallFunc_GetSquadManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESquadType              CallFunc_GetSquadType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLongestChaseTime_OutLongestChaseTime                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_FloatToMinSec_OutMinsec_1                               (ZeroConstructor, HasGetValueTypeHash)
// class ACGGameModeBase*             CallFunc_GetCGGameModeBase_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsActivated                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AITimer_C::ExecuteUbergraph_wid_AITimer(int32 EntryPoint, enum class ESquadType Temp_byte_Variable, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<class ACGAICharacter*>& CallFunc_GetCurrentAggroList_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_ContainsChildOf_bOutContains, bool CallFunc_Greater_FloatFloat_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_ContainsChildOf_bOutContains_1, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, enum class ESquadType Temp_byte_Variable_3, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_MaxOfFloatArray_IndexOfMaxValue, float CallFunc_MaxOfFloatArray_MaxValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_FloatToMinSec_OutMinsec, class ACGAICharacter* CallFunc_Array_Get_Item, TScriptInterface<class ICh_darkStalker_00_Interface_C> K2Node_DynamicCast_AsCh_Dark_Stalker_00_Interface, bool K2Node_DynamicCast_bSuccess, class ACGSoldier* K2Node_DynamicCast_AsCGSoldier, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetTimerRemainingString_String, class UBlackboardComponent* CallFunc_GetCGBlackboardComponent_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueAsFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class ACGSquadManager* CallFunc_GetSquadManager_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, enum class ESquadType CallFunc_GetSquadType_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, float CallFunc_GetLongestChaseTime_OutLongestChaseTime, const class FString& CallFunc_FloatToMinSec_OutMinsec_1, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue, bool K2Node_CustomEvent_bIsActivated, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AITimer_C", "ExecuteUbergraph_wid_AITimer");

	Params::UWid_AITimer_C_ExecuteUbergraph_wid_AITimer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCurrentAggroList_ReturnValue = CallFunc_GetCurrentAggroList_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_ContainsChildOf_bOutContains = CallFunc_ContainsChildOf_bOutContains;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_ContainsChildOf_bOutContains_1 = CallFunc_ContainsChildOf_bOutContains_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_MaxOfFloatArray_IndexOfMaxValue = CallFunc_MaxOfFloatArray_IndexOfMaxValue;
	Parms.CallFunc_MaxOfFloatArray_MaxValue = CallFunc_MaxOfFloatArray_MaxValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_FloatToMinSec_OutMinsec = CallFunc_FloatToMinSec_OutMinsec;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsCh_Dark_Stalker_00_Interface = K2Node_DynamicCast_AsCh_Dark_Stalker_00_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCGSoldier = K2Node_DynamicCast_AsCGSoldier;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTimerRemainingString_String = CallFunc_GetTimerRemainingString_String;
	Parms.CallFunc_GetCGBlackboardComponent_ReturnValue = CallFunc_GetCGBlackboardComponent_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValueAsFloat_ReturnValue = CallFunc_GetValueAsFloat_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetSquadManager_ReturnValue = CallFunc_GetSquadManager_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetSquadType_ReturnValue = CallFunc_GetSquadType_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_GetLongestChaseTime_OutLongestChaseTime = CallFunc_GetLongestChaseTime_OutLongestChaseTime;
	Parms.CallFunc_FloatToMinSec_OutMinsec_1 = CallFunc_FloatToMinSec_OutMinsec_1;
	Parms.CallFunc_GetCGGameModeBase_ReturnValue = CallFunc_GetCGGameModeBase_ReturnValue;
	Parms.K2Node_CustomEvent_bIsActivated = K2Node_CustomEvent_bIsActivated;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


