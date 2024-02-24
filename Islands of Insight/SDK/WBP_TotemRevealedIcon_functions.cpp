#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TotemRevealedIcon.WBP_TotemRevealedIcon_C
// (None)

class UClass* UWBP_TotemRevealedIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TotemRevealedIcon_C");

	return Clss;
}


// WBP_TotemRevealedIcon_C WBP_TotemRevealedIcon.Default__WBP_TotemRevealedIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TotemRevealedIcon_C* UWBP_TotemRevealedIcon_C::GetDefaultObj()
{
	static class UWBP_TotemRevealedIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TotemRevealedIcon_C*>(UWBP_TotemRevealedIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TotemRevealedIcon.WBP_TotemRevealedIcon_C.BP_InitVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Unlocked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SOLVED                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_TotemRevealedIcon_C::BP_InitVisuals(bool Unlocked, bool Selected, bool SOLVED)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemRevealedIcon_C", "BP_InitVisuals");

	Params::UWBP_TotemRevealedIcon_C_BP_InitVisuals_Params Parms{};

	Parms.Unlocked = Unlocked;
	Parms.Selected = Selected;
	Parms.SOLVED = SOLVED;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TotemRevealedIcon.WBP_TotemRevealedIcon_C.BP_PlaySolveAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_TotemRevealedIcon_C::BP_PlaySolveAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemRevealedIcon_C", "BP_PlaySolveAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TotemRevealedIcon.WBP_TotemRevealedIcon_C.BndEvt__WBP_TotemRevealedIcon_IconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TotemRevealedIcon_C::BndEvt__WBP_TotemRevealedIcon_IconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemRevealedIcon_C", "BndEvt__WBP_TotemRevealedIcon_IconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TotemRevealedIcon.WBP_TotemRevealedIcon_C.BndEvt__WBP_TotemRevealedIcon_IconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TotemRevealedIcon_C::BndEvt__WBP_TotemRevealedIcon_IconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemRevealedIcon_C", "BndEvt__WBP_TotemRevealedIcon_IconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TotemRevealedIcon.WBP_TotemRevealedIcon_C.BndEvt__WBP_TotemRevealedIcon_IconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TotemRevealedIcon_C::BndEvt__WBP_TotemRevealedIcon_IconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemRevealedIcon_C", "BndEvt__WBP_TotemRevealedIcon_IconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TotemRevealedIcon.WBP_TotemRevealedIcon_C.ExecuteUbergraph_WBP_TotemRevealedIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_unlocked                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_selected                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_solved                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TotemRevealedIcon_C::ExecuteUbergraph_WBP_TotemRevealedIcon(int32 EntryPoint, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, bool K2Node_Event_unlocked, bool K2Node_Event_selected, bool K2Node_Event_solved, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemRevealedIcon_C", "ExecuteUbergraph_WBP_TotemRevealedIcon");

	Params::UWBP_TotemRevealedIcon_C_ExecuteUbergraph_WBP_TotemRevealedIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.K2Node_MakeStruct_LinearColor_2 = K2Node_MakeStruct_LinearColor_2;
	Parms.K2Node_Event_unlocked = K2Node_Event_unlocked;
	Parms.K2Node_Event_selected = K2Node_Event_selected;
	Parms.K2Node_Event_solved = K2Node_Event_solved;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


