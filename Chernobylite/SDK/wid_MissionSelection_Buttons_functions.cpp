#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MissionSelection_Buttons.wid_MissionSelection_Buttons_C
// (None)

class UClass* UWid_MissionSelection_Buttons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MissionSelection_Buttons_C");

	return Clss;
}


// wid_MissionSelection_Buttons_C wid_MissionSelection_Buttons.Default__wid_MissionSelection_Buttons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MissionSelection_Buttons_C* UWid_MissionSelection_Buttons_C::GetDefaultObj()
{
	static class UWid_MissionSelection_Buttons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MissionSelection_Buttons_C*>(UWid_MissionSelection_Buttons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MissionSelection_Buttons.wid_MissionSelection_Buttons_C.ShowOnlyBackButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowOnlyBack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionSelection_Buttons_C::ShowOnlyBackButton(bool ShowOnlyBack, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Buttons_C", "ShowOnlyBackButton");

	Params::UWid_MissionSelection_Buttons_C_ShowOnlyBackButton_Params Parms{};

	Parms.ShowOnlyBack = ShowOnlyBack;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


