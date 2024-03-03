#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_02_dlg_2d_subtitle_entry.w_02_dlg_2d_subtitle_entry_C
// (None)

class UClass* UW_02_dlg_2d_subtitle_entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_02_dlg_2d_subtitle_entry_C");

	return Clss;
}


// w_02_dlg_2d_subtitle_entry_C w_02_dlg_2d_subtitle_entry.Default__w_02_dlg_2d_subtitle_entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_02_dlg_2d_subtitle_entry_C* UW_02_dlg_2d_subtitle_entry_C::GetDefaultObj()
{
	static class UW_02_dlg_2d_subtitle_entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_02_dlg_2d_subtitle_entry_C*>(UW_02_dlg_2d_subtitle_entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_02_dlg_2d_subtitle_entry.w_02_dlg_2d_subtitle_entry_C.init_widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_02_dlg_2d_subtitle_entry_C::Init_widget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitle_entry_C", "init_widget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_02_dlg_2d_subtitle_entry.w_02_dlg_2d_subtitle_entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_02_dlg_2d_subtitle_entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitle_entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_02_dlg_2d_subtitle_entry.w_02_dlg_2d_subtitle_entry_C.remove_widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               No_anim                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_02_dlg_2d_subtitle_entry_C::Remove_widget(bool No_anim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitle_entry_C", "remove_widget");

	Params::UW_02_dlg_2d_subtitle_entry_C_Remove_widget_Params Parms{};

	Parms.No_anim = No_anim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_02_dlg_2d_subtitle_entry.w_02_dlg_2d_subtitle_entry_C.ExecuteUbergraph_w_02_dlg_2d_subtitle_entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_no_anim                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_02_dlg_2d_subtitle_entry_C::ExecuteUbergraph_w_02_dlg_2d_subtitle_entry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_no_anim, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitle_entry_C", "ExecuteUbergraph_w_02_dlg_2d_subtitle_entry");

	Params::UW_02_dlg_2d_subtitle_entry_C_ExecuteUbergraph_w_02_dlg_2d_subtitle_entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_no_anim = K2Node_CustomEvent_no_anim;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


