#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SandboxCollapsedTab.WBP_SandboxCollapsedTab_C
// (None)

class UClass* UWBP_SandboxCollapsedTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SandboxCollapsedTab_C");

	return Clss;
}


// WBP_SandboxCollapsedTab_C WBP_SandboxCollapsedTab.Default__WBP_SandboxCollapsedTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SandboxCollapsedTab_C* UWBP_SandboxCollapsedTab_C::GetDefaultObj()
{
	static class UWBP_SandboxCollapsedTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SandboxCollapsedTab_C*>(UWBP_SandboxCollapsedTab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SandboxCollapsedTab.WBP_SandboxCollapsedTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SandboxCollapsedTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsedTab_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxCollapsedTab.WBP_SandboxCollapsedTab_C.BndEvt__WBP_SandboxCollapsedTab_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SandboxCollapsedTab_C::BndEvt__WBP_SandboxCollapsedTab_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsedTab_C", "BndEvt__WBP_SandboxCollapsedTab_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxCollapsedTab.WBP_SandboxCollapsedTab_C.BndEvt__WBP_SandboxCollapsedTab_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SandboxCollapsedTab_C::BndEvt__WBP_SandboxCollapsedTab_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsedTab_C", "BndEvt__WBP_SandboxCollapsedTab_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxCollapsedTab.WBP_SandboxCollapsedTab_C.BndEvt__WBP_SandboxCollapsedTab_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SandboxCollapsedTab_C::BndEvt__WBP_SandboxCollapsedTab_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsedTab_C", "BndEvt__WBP_SandboxCollapsedTab_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxCollapsedTab.WBP_SandboxCollapsedTab_C.ExecuteUbergraph_WBP_SandboxCollapsedTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_PuzzleCategoryToImage_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSandboxProgressionRewardDataCallFunc_GetActiveRewardLevelForPuzzleCategory_OutRewardData     (None)
// int32                              CallFunc_GetActiveRewardLevelForPuzzleCategory_OutSolvedPuzzleCount(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveRewardLevelForPuzzleCategory_OutTargetPuzzleCount(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActiveRewardLevelForPuzzleCategory_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandboxCollapsedTab_C::ExecuteUbergraph_WBP_SandboxCollapsedTab(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UTexture2D* CallFunc_PuzzleCategoryToImage_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_SafeDivide_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, const struct FSandboxProgressionRewardData& CallFunc_GetActiveRewardLevelForPuzzleCategory_OutRewardData, int32 CallFunc_GetActiveRewardLevelForPuzzleCategory_OutSolvedPuzzleCount, int32 CallFunc_GetActiveRewardLevelForPuzzleCategory_OutTargetPuzzleCount, bool CallFunc_GetActiveRewardLevelForPuzzleCategory_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsedTab_C", "ExecuteUbergraph_WBP_SandboxCollapsedTab");

	Params::UWBP_SandboxCollapsedTab_C_ExecuteUbergraph_WBP_SandboxCollapsedTab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PuzzleCategoryToImage_ReturnValue = CallFunc_PuzzleCategoryToImage_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveRewardLevelForPuzzleCategory_OutRewardData = CallFunc_GetActiveRewardLevelForPuzzleCategory_OutRewardData;
	Parms.CallFunc_GetActiveRewardLevelForPuzzleCategory_OutSolvedPuzzleCount = CallFunc_GetActiveRewardLevelForPuzzleCategory_OutSolvedPuzzleCount;
	Parms.CallFunc_GetActiveRewardLevelForPuzzleCategory_OutTargetPuzzleCount = CallFunc_GetActiveRewardLevelForPuzzleCategory_OutTargetPuzzleCount;
	Parms.CallFunc_GetActiveRewardLevelForPuzzleCategory_ReturnValue = CallFunc_GetActiveRewardLevelForPuzzleCategory_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxCollapsedTab.WBP_SandboxCollapsedTab_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPuzzleCategory         Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        ZONE                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandboxCollapsedTab_C::Clicked__DelegateSignature(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsedTab_C", "Clicked__DelegateSignature");

	Params::UWBP_SandboxCollapsedTab_C_Clicked__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.ZONE = ZONE;

	UObject::ProcessEvent(Func, &Parms);

}

}


