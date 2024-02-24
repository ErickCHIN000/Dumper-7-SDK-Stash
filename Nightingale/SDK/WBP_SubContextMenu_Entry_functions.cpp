#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SubContextMenu_Entry.WBP_SubContextMenu_Entry_C
// (None)

class UClass* UWBP_SubContextMenu_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SubContextMenu_Entry_C");

	return Clss;
}


// WBP_SubContextMenu_Entry_C WBP_SubContextMenu_Entry.Default__WBP_SubContextMenu_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SubContextMenu_Entry_C* UWBP_SubContextMenu_Entry_C::GetDefaultObj()
{
	static class UWBP_SubContextMenu_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SubContextMenu_Entry_C*>(UWBP_SubContextMenu_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SubContextMenu_Entry.WBP_SubContextMenu_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubContextMenu_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextMenu_Entry_C", "PreConstruct");

	Params::UWBP_SubContextMenu_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubContextMenu_Entry.WBP_SubContextMenu_Entry_C.BndEvt__WBP_SubContextMenu_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SubContextMenu_Entry_C::BndEvt__WBP_SubContextMenu_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextMenu_Entry_C", "BndEvt__WBP_SubContextMenu_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_SubContextMenu_Entry_C_BndEvt__WBP_SubContextMenu_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubContextMenu_Entry.WBP_SubContextMenu_Entry_C.BndEvt__WBP_SubContextMenu_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubContextMenu_Entry_C::BndEvt__WBP_SubContextMenu_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextMenu_Entry_C", "BndEvt__WBP_SubContextMenu_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UWBP_SubContextMenu_Entry_C_BndEvt__WBP_SubContextMenu_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubContextMenu_Entry.WBP_SubContextMenu_Entry_C.ExecuteUbergraph_WBP_SubContextMenu_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SubContextMenu_Entry_C::ExecuteUbergraph_WBP_SubContextMenu_Entry(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextMenu_Entry_C", "ExecuteUbergraph_WBP_SubContextMenu_Entry");

	Params::UWBP_SubContextMenu_Entry_C_ExecuteUbergraph_WBP_SubContextMenu_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubContextMenu_Entry.WBP_SubContextMenu_Entry_C.SubContextEntry_Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                UIGameplayTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_SubContextMenu_Entry_C::SubContextEntry_Selected__DelegateSignature(const struct FGameplayTag& UIGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextMenu_Entry_C", "SubContextEntry_Selected__DelegateSignature");

	Params::UWBP_SubContextMenu_Entry_C_SubContextEntry_Selected__DelegateSignature_Params Parms{};

	Parms.UIGameplayTag = UIGameplayTag;

	UObject::ProcessEvent(Func, &Parms);

}

}


