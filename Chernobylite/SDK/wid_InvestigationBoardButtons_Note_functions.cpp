#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_InvestigationBoardButtons_Note.wid_InvestigationBoardButtons_Note_C
// (None)

class UClass* UWid_InvestigationBoardButtons_Note_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_InvestigationBoardButtons_Note_C");

	return Clss;
}


// wid_InvestigationBoardButtons_Note_C wid_InvestigationBoardButtons_Note.Default__wid_InvestigationBoardButtons_Note_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_InvestigationBoardButtons_Note_C* UWid_InvestigationBoardButtons_Note_C::GetDefaultObj()
{
	static class UWid_InvestigationBoardButtons_Note_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_InvestigationBoardButtons_Note_C*>(UWid_InvestigationBoardButtons_Note_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_InvestigationBoardButtons_Note.wid_InvestigationBoardButtons_Note_C.ShowHideZoomButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_InvestigationBoardButtons_Note_C::ShowHideZoomButtons(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InvestigationBoardButtons_Note_C", "ShowHideZoomButtons");

	Params::UWid_InvestigationBoardButtons_Note_C_ShowHideZoomButtons_Params Parms{};

	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_InvestigationBoardButtons_Note.wid_InvestigationBoardButtons_Note_C.ShowHideSpacer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USpacer*                     Spacer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_InvestigationBoardButtons_Note_C::ShowHideSpacer(bool Show, class USpacer* Spacer, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InvestigationBoardButtons_Note_C", "ShowHideSpacer");

	Params::UWid_InvestigationBoardButtons_Note_C_ShowHideSpacer_Params Parms{};

	Parms.Show = Show;
	Parms.Spacer = Spacer;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_InvestigationBoardButtons_Note.wid_InvestigationBoardButtons_Note_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoModify                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_InvestigationBoardButtons_Note_C::Update(const struct FStruct_Inventory_ButtonModifyInfo& Modify, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InvestigationBoardButtons_Note_C", "Update");

	Params::UWid_InvestigationBoardButtons_Note_C_Update_Params Parms{};

	Parms.Modify = Modify;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


