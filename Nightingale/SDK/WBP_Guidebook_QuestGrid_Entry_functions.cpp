#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C
// (None)

class UClass* UWBP_Guidebook_QuestGrid_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Guidebook_QuestGrid_Entry_C");

	return Clss;
}


// WBP_Guidebook_QuestGrid_Entry_C WBP_Guidebook_QuestGrid_Entry.Default__WBP_Guidebook_QuestGrid_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Guidebook_QuestGrid_Entry_C* UWBP_Guidebook_QuestGrid_Entry_C::GetDefaultObj()
{
	static class UWBP_Guidebook_QuestGrid_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Guidebook_QuestGrid_Entry_C*>(UWBP_Guidebook_QuestGrid_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.SetBuildBookSelectedWidgetEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GuideBookComponent_C*    CallFunc_GetLocalPlayerGuideBookComponent_GuideBook              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_QuestGrid_Entry_C::SetBuildBookSelectedWidgetEntry(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "SetBuildBookSelectedWidgetEntry");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_SetBuildBookSelectedWidgetEntry_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.State = State;
	Parms.CallFunc_GetLocalPlayerGuideBookComponent_GuideBook = CallFunc_GetLocalPlayerGuideBookComponent_GuideBook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UWBP_Guidebook_QuestGrid_Entry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "OnRemovedFromFocusPath");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_QuestGrid_Entry_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "OnAddedToFocusPath");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Guidebook_QuestGrid_Entry_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "OnMouseLeave");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Guidebook_QuestGrid_Entry_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "OnMouseEnter");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Guidebook_QuestGrid_Entry_C::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "GetDefaultFocusWidget");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_GetDefaultFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData(None)
// bool                               CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_QuestGrid_Entry_C::Initialize(const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "Initialize");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_Initialize_Params Parms{};

	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Guidebook_QuestGrid_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Guidebook_QuestGrid_Entry_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_QuestGrid_Entry_C::BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_QuestGrid_Entry_C::BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.BndEvt__WBP_Guidebook_QuestGrid_Entry_CBU_Select_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_QuestGrid_Entry_C::BndEvt__WBP_Guidebook_QuestGrid_Entry_CBU_Select_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "BndEvt__WBP_Guidebook_QuestGrid_Entry_CBU_Select_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_BndEvt__WBP_Guidebook_QuestGrid_Entry_CBU_Select_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.ExecuteUbergraph_WBP_Guidebook_QuestGrid_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_QuestGrid_Entry_C::ExecuteUbergraph_WBP_Guidebook_QuestGrid_Entry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "ExecuteUbergraph_WBP_Guidebook_QuestGrid_Entry");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_ExecuteUbergraph_WBP_Guidebook_QuestGrid_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.GuideBookQuestUnselected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guidebook_QuestGrid_Entry_C::GuideBookQuestUnselected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "GuideBookQuestUnselected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.GuideBookQuestTrackingChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_QuestGrid_Entry_C::GuideBookQuestTrackingChanged__DelegateSignature(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "GuideBookQuestTrackingChanged__DelegateSignature");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_GuideBookQuestTrackingChanged__DelegateSignature_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.GuideBookQuestHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_QuestGrid_Entry_C::GuideBookQuestHovered__DelegateSignature(bool Hovered, const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "GuideBookQuestHovered__DelegateSignature");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_GuideBookQuestHovered__DelegateSignature_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.TaskProgress = TaskProgress;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.GuideBookQuestSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_QuestGrid_Entry_C::GuideBookQuestSelected__DelegateSignature(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_QuestGrid_Entry_C", "GuideBookQuestSelected__DelegateSignature");

	Params::UWBP_Guidebook_QuestGrid_Entry_C_GuideBookQuestSelected__DelegateSignature_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}

}


