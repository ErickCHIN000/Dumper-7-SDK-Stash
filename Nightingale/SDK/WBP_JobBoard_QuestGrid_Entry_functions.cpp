#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C
// (None)

class UClass* UWBP_JobBoard_QuestGrid_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_JobBoard_QuestGrid_Entry_C");

	return Clss;
}


// WBP_JobBoard_QuestGrid_Entry_C WBP_JobBoard_QuestGrid_Entry.Default__WBP_JobBoard_QuestGrid_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_JobBoard_QuestGrid_Entry_C* UWBP_JobBoard_QuestGrid_Entry_C::GetDefaultObj()
{
	static class UWBP_JobBoard_QuestGrid_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_JobBoard_QuestGrid_Entry_C*>(UWBP_JobBoard_QuestGrid_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.GetDefaultFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_JobBoard_QuestGrid_Entry_C::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "GetDefaultFocusWidget");

	Params::UWBP_JobBoard_QuestGrid_Entry_C_GetDefaultFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.SetSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_QuestGrid_Entry_C::SetSelected(bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "SetSelected");

	Params::UWBP_JobBoard_QuestGrid_Entry_C_SetSelected_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_JobBoard_QuestGrid_Entry_C::BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_JobBoard_QuestGrid_Entry_C::BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_JobBoard_QuestGrid_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_QuestGrid_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "PreConstruct");

	Params::UWBP_JobBoard_QuestGrid_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.Set Unselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JobBoard_QuestGrid_Entry_C::Set_Unselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "Set Unselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_JobBoard_QuestGrid_Entry_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "OnAddedToFocusPath");

	Params::UWBP_JobBoard_QuestGrid_Entry_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_JobBoard_QuestGrid_Entry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "OnRemovedFromFocusPath");

	Params::UWBP_JobBoard_QuestGrid_Entry_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JobBoard_QuestGrid_Entry_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.BndEvt__WBP_JobBoard_QuestGrid_Entry_Button_Network_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_JobBoard_QuestGrid_Entry_C::BndEvt__WBP_JobBoard_QuestGrid_Entry_Button_Network_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "BndEvt__WBP_JobBoard_QuestGrid_Entry_Button_Network_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.BndEvt__WBP_JobBoard_QuestGrid_Entry_Button_Network_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_JobBoard_QuestGrid_Entry_C::BndEvt__WBP_JobBoard_QuestGrid_Entry_Button_Network_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "BndEvt__WBP_JobBoard_QuestGrid_Entry_Button_Network_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.Unhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JobBoard_QuestGrid_Entry_C::Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JobBoard_QuestGrid_Entry_C::Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.BndEvt__WBP_JobBoard_QuestGrid_Entry_Button_Network_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_JobBoard_QuestGrid_Entry_C::BndEvt__WBP_JobBoard_QuestGrid_Entry_Button_Network_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "BndEvt__WBP_JobBoard_QuestGrid_Entry_Button_Network_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.BndEvt__WBP_JobBoard_QuestGrid_Entry_Button_Network_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_JobBoard_QuestGrid_Entry_C::BndEvt__WBP_JobBoard_QuestGrid_Entry_Button_Network_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "BndEvt__WBP_JobBoard_QuestGrid_Entry_Button_Network_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.ExecuteUbergraph_WBP_JobBoard_QuestGrid_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData(None)
// bool                               CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestRewardPresentationDataCallFunc_Array_Get_Item                                          (None)
// class FText                        CallFunc_UI_Text_TruncationCheck_ReturnValue                     (None)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Contract_StateType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData(None)
// struct FQuestRewardPresentationDataCallFunc_Array_Get_Item_1                                        (None)
// class FText                        CallFunc_UI_Text_TruncationCheck_ReturnValue_1                   (None)

void UWBP_JobBoard_QuestGrid_Entry_C::ExecuteUbergraph_WBP_JobBoard_QuestGrid_Entry(int32 EntryPoint, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item, class FText CallFunc_UI_Text_TruncationCheck_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue, int32 K2Node_Select_Default, enum class E_Contract_StateType Temp_byte_Variable, class UTexture2D* K2Node_Select_Default_1, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item_1, class FText CallFunc_UI_Text_TruncationCheck_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "ExecuteUbergraph_WBP_JobBoard_QuestGrid_Entry");

	Params::UWBP_JobBoard_QuestGrid_Entry_C_ExecuteUbergraph_WBP_JobBoard_QuestGrid_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_UI_Text_TruncationCheck_ReturnValue = CallFunc_UI_Text_TruncationCheck_ReturnValue;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_UI_Text_TruncationCheck_ReturnValue_1 = CallFunc_UI_Text_TruncationCheck_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.JobBoardShopOfferHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FShopOfferPresentation      ShopOffer                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_JobBoard_QuestGrid_Entry_C::JobBoardShopOfferHovered__DelegateSignature(bool Hovered, const struct FShopOfferPresentation& ShopOffer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "JobBoardShopOfferHovered__DelegateSignature");

	Params::UWBP_JobBoard_QuestGrid_Entry_C_JobBoardShopOfferHovered__DelegateSignature_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.ShopOffer = ShopOffer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.JobBoardShopOfferSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FShopOfferPresentation      ShopOffer                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_JobBoard_QuestGrid_Entry_C::JobBoardShopOfferSelected__DelegateSignature(int32 GridIndex, const struct FShopOfferPresentation& ShopOffer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "JobBoardShopOfferSelected__DelegateSignature");

	Params::UWBP_JobBoard_QuestGrid_Entry_C_JobBoardShopOfferSelected__DelegateSignature_Params Parms{};

	Parms.GridIndex = GridIndex;
	Parms.ShopOffer = ShopOffer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.JobBoardQuestConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JobBoard_QuestGrid_Entry_C::JobBoardQuestConfirmed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "JobBoardQuestConfirmed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.JobBoardQuestHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_QuestGrid_Entry_C::JobBoardQuestHovered__DelegateSignature(bool Hovered, const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "JobBoardQuestHovered__DelegateSignature");

	Params::UWBP_JobBoard_QuestGrid_Entry_C_JobBoardQuestHovered__DelegateSignature_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.TaskProgress = TaskProgress;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.JobBoardQuestSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_QuestGrid_Entry_C::JobBoardQuestSelected__DelegateSignature(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, int32 GridIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_QuestGrid_Entry_C", "JobBoardQuestSelected__DelegateSignature");

	Params::UWBP_JobBoard_QuestGrid_Entry_C_JobBoardQuestSelected__DelegateSignature_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.State = State;
	Parms.GridIndex = GridIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


