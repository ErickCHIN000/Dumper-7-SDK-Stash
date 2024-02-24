#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_Map_Buttons.wid_pda_Map_Buttons_C
// (None)

class UClass* UWid_pda_Map_Buttons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_Map_Buttons_C");

	return Clss;
}


// wid_pda_Map_Buttons_C wid_pda_Map_Buttons.Default__wid_pda_Map_Buttons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_Map_Buttons_C* UWid_pda_Map_Buttons_C::GetDefaultObj()
{
	static class UWid_pda_Map_Buttons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_Map_Buttons_C*>(UWid_pda_Map_Buttons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.UpdatePadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Map_Buttons_C::UpdatePadding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Buttons_C", "UpdatePadding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.UppercaseMenuButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_MainMenu_Buttons_Entry_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_pda_Map_Buttons_C::UppercaseMenuButton(class UWid_MainMenu_Buttons_Entry_C* Button, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Buttons_C", "UppercaseMenuButton");

	Params::UWid_pda_Map_Buttons_C_UppercaseMenuButton_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.UppercaseButtonLabels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Map_Buttons_C::UppercaseButtonLabels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Buttons_C", "UppercaseButtonLabels");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.UppercaseButtonLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Inventory_Buttons_Entry_C*Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_pda_Map_Buttons_C::UppercaseButtonLabel(class UWid_Inventory_Buttons_Entry_C* Target, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Buttons_C", "UppercaseButtonLabel");

	Params::UWid_pda_Map_Buttons_C_UppercaseButtonLabel_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Map_ButtonsInfo     Info                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_pda_Map_Buttons_C::Update(const struct FStruct_Map_ButtonsInfo& Info, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Buttons_C", "Update");

	Params::UWid_pda_Map_Buttons_C_Update_Params Parms{};

	Parms.Info = Info;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Map_Buttons_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Buttons_C", "PreConstruct");

	Params::UWid_pda_Map_Buttons_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_Map_Buttons_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Buttons_C", "Tick");

	Params::UWid_pda_Map_Buttons_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_pda_Map_Buttons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Buttons_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.ExecuteUbergraph_wid_pda_Map_Buttons
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Map_Button          K2Node_MakeStruct_struct_Map_Button                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Map_Button          K2Node_MakeStruct_struct_Map_Button_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Map_Button          K2Node_MakeStruct_struct_Map_Button_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Map_Button          K2Node_MakeStruct_struct_Map_Button_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Map_ButtonsInfo     K2Node_MakeStruct_struct_Map_ButtonsInfo                         (UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_Map_Buttons_C::ExecuteUbergraph_wid_pda_Map_Buttons(int32 EntryPoint, const struct FStruct_Map_Button& K2Node_MakeStruct_struct_Map_Button, const struct FStruct_Map_Button& K2Node_MakeStruct_struct_Map_Button_1, const struct FStruct_Map_Button& K2Node_MakeStruct_struct_Map_Button_2, const struct FStruct_Map_Button& K2Node_MakeStruct_struct_Map_Button_3, const struct FStruct_Map_ButtonsInfo& K2Node_MakeStruct_struct_Map_ButtonsInfo, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Buttons_C", "ExecuteUbergraph_wid_pda_Map_Buttons");

	Params::UWid_pda_Map_Buttons_C_ExecuteUbergraph_wid_pda_Map_Buttons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_struct_Map_Button = K2Node_MakeStruct_struct_Map_Button;
	Parms.K2Node_MakeStruct_struct_Map_Button_1 = K2Node_MakeStruct_struct_Map_Button_1;
	Parms.K2Node_MakeStruct_struct_Map_Button_2 = K2Node_MakeStruct_struct_Map_Button_2;
	Parms.K2Node_MakeStruct_struct_Map_Button_3 = K2Node_MakeStruct_struct_Map_Button_3;
	Parms.K2Node_MakeStruct_struct_Map_ButtonsInfo = K2Node_MakeStruct_struct_Map_ButtonsInfo;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


