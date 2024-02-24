#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Controls_Controller_Entry.wid_MainMenu_Controls_Controller_Entry_C
// (None)

class UClass* UWid_MainMenu_Controls_Controller_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Controls_Controller_Entry_C");

	return Clss;
}


// wid_MainMenu_Controls_Controller_Entry_C wid_MainMenu_Controls_Controller_Entry.Default__wid_MainMenu_Controls_Controller_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Controls_Controller_Entry_C* UWid_MainMenu_Controls_Controller_Entry_C::GetDefaultObj()
{
	static class UWid_MainMenu_Controls_Controller_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Controls_Controller_Entry_C*>(UWid_MainMenu_Controls_Controller_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_Controls_Controller_Entry.wid_MainMenu_Controls_Controller_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Controls_Controller_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_Controller_Entry_C", "PreConstruct");

	Params::UWid_MainMenu_Controls_Controller_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_Controller_Entry.wid_MainMenu_Controls_Controller_Entry_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_Controller_Entry_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_Controller_Entry_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_Controller_Entry.wid_MainMenu_Controls_Controller_Entry_C.UpdateIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsePS4                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Controls_Controller_Entry_C::UpdateIcon(bool UsePS4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_Controller_Entry_C", "UpdateIcon");

	Params::UWid_MainMenu_Controls_Controller_Entry_C_UpdateIcon_Params Parms{};

	Parms.UsePS4 = UsePS4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_Controller_Entry.wid_MainMenu_Controls_Controller_Entry_C.ExecuteUbergraph_wid_MainMenu_Controls_Controller_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Get_PS4Button_Icon_Icon                                 (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetXboxButtonIcon_Icon                                  (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UsePS4                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default_3                                          (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_4                                          (None)
// class FText                        CallFunc_FormatText_Output                                       (None)

void UWid_MainMenu_Controls_Controller_Entry_C::ExecuteUbergraph_wid_MainMenu_Controls_Controller_Entry(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UImage* K2Node_Select_Default_2, TSoftObjectPtr<class UTexture2D> CallFunc_Get_PS4Button_Icon_Icon, TSoftObjectPtr<class UTexture2D> CallFunc_GetXboxButtonIcon_Icon, bool K2Node_CustomEvent_UsePS4, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_3, class FText K2Node_Select_Default_4, class FText CallFunc_FormatText_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_Controller_Entry_C", "ExecuteUbergraph_wid_MainMenu_Controls_Controller_Entry");

	Params::UWid_MainMenu_Controls_Controller_Entry_C_ExecuteUbergraph_wid_MainMenu_Controls_Controller_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Get_PS4Button_Icon_Icon = CallFunc_Get_PS4Button_Icon_Icon;
	Parms.CallFunc_GetXboxButtonIcon_Icon = CallFunc_GetXboxButtonIcon_Icon;
	Parms.K2Node_CustomEvent_UsePS4 = K2Node_CustomEvent_UsePS4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;

	UObject::ProcessEvent(Func, &Parms);

}

}


