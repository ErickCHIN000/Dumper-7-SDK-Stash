#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_Indicator_IncorrectActionFeedback.WBP_HUD_Indicator_IncorrectActionFeedback_C
// (None)

class UClass* UWBP_HUD_Indicator_IncorrectActionFeedback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_Indicator_IncorrectActionFeedback_C");

	return Clss;
}


// WBP_HUD_Indicator_IncorrectActionFeedback_C WBP_HUD_Indicator_IncorrectActionFeedback.Default__WBP_HUD_Indicator_IncorrectActionFeedback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_Indicator_IncorrectActionFeedback_C* UWBP_HUD_Indicator_IncorrectActionFeedback_C::GetDefaultObj()
{
	static class UWBP_HUD_Indicator_IncorrectActionFeedback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_Indicator_IncorrectActionFeedback_C*>(UWBP_HUD_Indicator_IncorrectActionFeedback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_Indicator_IncorrectActionFeedback.WBP_HUD_Indicator_IncorrectActionFeedback_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Indicator_IncorrectActionFeedback_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Indicator_IncorrectActionFeedback_C", "OnAnimationFinished");

	Params::UWBP_HUD_Indicator_IncorrectActionFeedback_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Indicator_IncorrectActionFeedback.WBP_HUD_Indicator_IncorrectActionFeedback_C.UpdateIndicatorAndText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback FeedbackData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UWBP_HUD_Indicator_IncorrectActionFeedback_C::UpdateIndicatorAndText(const struct FStructurePlacementFeedback& FeedbackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Indicator_IncorrectActionFeedback_C", "UpdateIndicatorAndText");

	Params::UWBP_HUD_Indicator_IncorrectActionFeedback_C_UpdateIndicatorAndText_Params Parms{};

	Parms.FeedbackData = FeedbackData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Indicator_IncorrectActionFeedback.WBP_HUD_Indicator_IncorrectActionFeedback_C.Appear
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_Indicator_IncorrectActionFeedback_C::Appear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Indicator_IncorrectActionFeedback_C", "Appear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_Indicator_IncorrectActionFeedback.WBP_HUD_Indicator_IncorrectActionFeedback_C.ExecuteUbergraph_WBP_HUD_Indicator_IncorrectActionFeedback
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_1                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_2                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_3                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_4                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_5                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_6                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_7                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_8                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_9                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_10                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_11                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_12                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_13                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_14                                      (HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPlacementFeedbackType  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback K2Node_CustomEvent_FeedbackData                                  (ContainsInstancedReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlacementFeedbackType  CallFunc_GetPlacementFeedbackType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPlacementFeedbackText_OutFeedbackText                (None)
// bool                               CallFunc_GetPlacementFeedbackText_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default                                            (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Indicator_IncorrectActionFeedback_C::ExecuteUbergraph_WBP_HUD_Indicator_IncorrectActionFeedback(int32 EntryPoint, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_3, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_4, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_5, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_6, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_7, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_8, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_9, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_10, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_11, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_12, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_13, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_14, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UWidgetAnimation* K2Node_Event_Animation, enum class EPlacementFeedbackType Temp_byte_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FStructurePlacementFeedback& K2Node_CustomEvent_FeedbackData, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EPlacementFeedbackType CallFunc_GetPlacementFeedbackType_ReturnValue, class FText CallFunc_GetPlacementFeedbackText_OutFeedbackText, bool CallFunc_GetPlacementFeedbackText_ReturnValue, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Indicator_IncorrectActionFeedback_C", "ExecuteUbergraph_WBP_HUD_Indicator_IncorrectActionFeedback");

	Params::UWBP_HUD_Indicator_IncorrectActionFeedback_C_ExecuteUbergraph_WBP_HUD_Indicator_IncorrectActionFeedback_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.Temp_softobject_Variable_2 = Temp_softobject_Variable_2;
	Parms.Temp_softobject_Variable_3 = Temp_softobject_Variable_3;
	Parms.Temp_softobject_Variable_4 = Temp_softobject_Variable_4;
	Parms.Temp_softobject_Variable_5 = Temp_softobject_Variable_5;
	Parms.Temp_softobject_Variable_6 = Temp_softobject_Variable_6;
	Parms.Temp_softobject_Variable_7 = Temp_softobject_Variable_7;
	Parms.Temp_softobject_Variable_8 = Temp_softobject_Variable_8;
	Parms.Temp_softobject_Variable_9 = Temp_softobject_Variable_9;
	Parms.Temp_softobject_Variable_10 = Temp_softobject_Variable_10;
	Parms.Temp_softobject_Variable_11 = Temp_softobject_Variable_11;
	Parms.Temp_softobject_Variable_12 = Temp_softobject_Variable_12;
	Parms.Temp_softobject_Variable_13 = Temp_softobject_Variable_13;
	Parms.Temp_softobject_Variable_14 = Temp_softobject_Variable_14;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CustomEvent_FeedbackData = K2Node_CustomEvent_FeedbackData;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlacementFeedbackType_ReturnValue = CallFunc_GetPlacementFeedbackType_ReturnValue;
	Parms.CallFunc_GetPlacementFeedbackText_OutFeedbackText = CallFunc_GetPlacementFeedbackText_OutFeedbackText;
	Parms.CallFunc_GetPlacementFeedbackText_ReturnValue = CallFunc_GetPlacementFeedbackText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


