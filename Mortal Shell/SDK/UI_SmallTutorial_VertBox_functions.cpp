#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SmallTutorial_VertBox.UI_SmallTutorial_VertBox_C
// (None)

class UClass* UUI_SmallTutorial_VertBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SmallTutorial_VertBox_C");

	return Clss;
}


// UI_SmallTutorial_VertBox_C UI_SmallTutorial_VertBox.Default__UI_SmallTutorial_VertBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SmallTutorial_VertBox_C* UUI_SmallTutorial_VertBox_C::GetDefaultObj()
{
	static class UUI_SmallTutorial_VertBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SmallTutorial_VertBox_C*>(UUI_SmallTutorial_VertBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SmallTutorial_VertBox.UI_SmallTutorial_VertBox_C.OnRep_Button1_Type
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SmallTutorial_VertBox_C::OnRep_Button1_Type()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SmallTutorial_VertBox_C", "OnRep_Button1_Type");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SmallTutorial_VertBox.UI_SmallTutorial_VertBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SmallTutorial_VertBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SmallTutorial_VertBox_C", "PreConstruct");

	Params::UUI_SmallTutorial_VertBox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SmallTutorial_VertBox.UI_SmallTutorial_VertBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_SmallTutorial_VertBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SmallTutorial_VertBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SmallTutorial_VertBox.UI_SmallTutorial_VertBox_C.ManualPreConstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SmallTutorial_VertBox_C::ManualPreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SmallTutorial_VertBox_C", "ManualPreConstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SmallTutorial_VertBox.UI_SmallTutorial_VertBox_C.FadeInOverlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SmallTutorial_VertBox_C::FadeInOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SmallTutorial_VertBox_C", "FadeInOverlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SmallTutorial_VertBox.UI_SmallTutorial_VertBox_C.ExecuteUbergraph_UI_SmallTutorial_VertBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SmallTutorial_VertBox_C::ExecuteUbergraph_UI_SmallTutorial_VertBox(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SmallTutorial_VertBox_C", "ExecuteUbergraph_UI_SmallTutorial_VertBox");

	Params::UUI_SmallTutorial_VertBox_C_ExecuteUbergraph_UI_SmallTutorial_VertBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


