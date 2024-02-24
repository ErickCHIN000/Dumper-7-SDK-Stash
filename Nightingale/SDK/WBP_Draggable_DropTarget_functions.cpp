#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Draggable_DropTarget.WBP_Draggable_DropTarget_C
// (None)

class UClass* UWBP_Draggable_DropTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Draggable_DropTarget_C");

	return Clss;
}


// WBP_Draggable_DropTarget_C WBP_Draggable_DropTarget.Default__WBP_Draggable_DropTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Draggable_DropTarget_C* UWBP_Draggable_DropTarget_C::GetDefaultObj()
{
	static class UWBP_Draggable_DropTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Draggable_DropTarget_C*>(UWBP_Draggable_DropTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Draggable_DropTarget.WBP_Draggable_DropTarget_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_Draggable_DropTarget_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Draggable_DropTarget_C", "OnDrop");

	Params::UWBP_Draggable_DropTarget_C_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Draggable_DropTarget.WBP_Draggable_DropTarget_C.AnimateDropBox_Flashy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumLoopsToPlay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Draggable_DropTarget_C::AnimateDropBox_Flashy(int32 NumLoopsToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Draggable_DropTarget_C", "AnimateDropBox_Flashy");

	Params::UWBP_Draggable_DropTarget_C_AnimateDropBox_Flashy_Params Parms{};

	Parms.NumLoopsToPlay = NumLoopsToPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Draggable_DropTarget.WBP_Draggable_DropTarget_C.AnimateDropBox_Fade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Display                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Draggable_DropTarget_C::AnimateDropBox_Fade(bool Display)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Draggable_DropTarget_C", "AnimateDropBox_Fade");

	Params::UWBP_Draggable_DropTarget_C_AnimateDropBox_Fade_Params Parms{};

	Parms.Display = Display;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Draggable_DropTarget.WBP_Draggable_DropTarget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Draggable_DropTarget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Draggable_DropTarget_C", "PreConstruct");

	Params::UWBP_Draggable_DropTarget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Draggable_DropTarget.WBP_Draggable_DropTarget_C.SetTextLine2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DropHintText_Line2                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Draggable_DropTarget_C::SetTextLine2(class FText DropHintText_Line2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Draggable_DropTarget_C", "SetTextLine2");

	Params::UWBP_Draggable_DropTarget_C_SetTextLine2_Params Parms{};

	Parms.DropHintText_Line2 = DropHintText_Line2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Draggable_DropTarget.WBP_Draggable_DropTarget_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Draggable_DropTarget_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Draggable_DropTarget_C", "OnDragEnter");

	Params::UWBP_Draggable_DropTarget_C_OnDragEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Draggable_DropTarget.WBP_Draggable_DropTarget_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Draggable_DropTarget_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Draggable_DropTarget_C", "OnDragLeave");

	Params::UWBP_Draggable_DropTarget_C_OnDragLeave_Params Parms{};

	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Draggable_DropTarget.WBP_Draggable_DropTarget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Draggable_DropTarget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Draggable_DropTarget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Draggable_DropTarget.WBP_Draggable_DropTarget_C.ExecuteUbergraph_WBP_Draggable_DropTarget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NumLoopsToPlay                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_DropHintText_Line2                            (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_PointerEvent_1                                      (None)
// class UDragDropOperation*          K2Node_Event_Operation_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_PointerEvent                                        (None)
// class UDragDropOperation*          K2Node_Event_Operation                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRendered_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Display                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Draggable_DropTarget_C::ExecuteUbergraph_WBP_Draggable_DropTarget(int32 EntryPoint, int32 K2Node_CustomEvent_NumLoopsToPlay, class FText K2Node_CustomEvent_DropHintText_Line2, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_PointerEvent_1, class UDragDropOperation* K2Node_Event_Operation_1, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsRendered_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue_1, bool K2Node_CustomEvent_Display, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Draggable_DropTarget_C", "ExecuteUbergraph_WBP_Draggable_DropTarget");

	Params::UWBP_Draggable_DropTarget_C_ExecuteUbergraph_WBP_Draggable_DropTarget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NumLoopsToPlay = K2Node_CustomEvent_NumLoopsToPlay;
	Parms.K2Node_CustomEvent_DropHintText_Line2 = K2Node_CustomEvent_DropHintText_Line2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_PointerEvent_1 = K2Node_Event_PointerEvent_1;
	Parms.K2Node_Event_Operation_1 = K2Node_Event_Operation_1;
	Parms.K2Node_Event_PointerEvent = K2Node_Event_PointerEvent;
	Parms.K2Node_Event_Operation = K2Node_Event_Operation;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsRendered_ReturnValue = CallFunc_IsRendered_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.K2Node_CustomEvent_Display = K2Node_CustomEvent_Display;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Draggable_DropTarget.WBP_Draggable_DropTarget_C.DragDropped_Item__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragDropOperation*          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Draggable_DropTarget_C::DragDropped_Item__DelegateSignature(class UDragDropOperation* Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Draggable_DropTarget_C", "DragDropped_Item__DelegateSignature");

	Params::UWBP_Draggable_DropTarget_C_DragDropped_Item__DelegateSignature_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}

}


