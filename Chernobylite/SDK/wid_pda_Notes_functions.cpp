#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_Notes.wid_pda_Notes_C
// (None)

class UClass* UWid_pda_Notes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_Notes_C");

	return Clss;
}


// wid_pda_Notes_C wid_pda_Notes.Default__wid_pda_Notes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_Notes_C* UWid_pda_Notes_C::GetDefaultObj()
{
	static class UWid_pda_Notes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_Notes_C*>(UWid_pda_Notes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_Notes.wid_pda_Notes_C.SetAppTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_Notes_C::SetAppTab(int32 Index, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "SetAppTab");

	Params::UWid_pda_Notes_C_SetAppTab_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Notes.wid_pda_Notes_C.GetName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AltNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Parm, OutParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_pda_Notes_C::GetName(int32 AltNameID, class FText* Name, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "GetName");

	Params::UWid_pda_Notes_C_GetName_Params Parms{};

	Parms.AltNameID = AltNameID;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function wid_pda_Notes.wid_pda_Notes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.InputUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.InputDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.InputFaceRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.InputRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.SwitchToMapApp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_MinimapTag_C*            Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_Notes_C::SwitchToMapApp(class Abp_MinimapTag_C* Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "SwitchToMapApp");

	Params::UWid_pda_Notes_C_SwitchToMapApp_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Notes.wid_pda_Notes_C.InputFaceDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.InputFaceLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::InputFaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "InputFaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.InputFaceUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.DPadLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.DPadRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.DPadDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.DPadUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.AppClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::AppClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "AppClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.Back Button Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::Back_Button_Clicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "Back Button Clicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.AppOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Notes_C::AppOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "AppOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Notes.wid_pda_Notes_C.ExecuteUbergraph_wid_pda_Notes
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CloseInventory_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            K2Node_Event_Tag                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UWid_pda_Notes_C::ExecuteUbergraph_wid_pda_Notes(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_CloseInventory_ReturnValue, class Abp_MinimapTag_C* K2Node_Event_Tag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_C", "ExecuteUbergraph_wid_pda_Notes");

	Params::UWid_pda_Notes_C_ExecuteUbergraph_wid_pda_Notes_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetMousePosition_LocationX = CallFunc_GetMousePosition_LocationX;
	Parms.CallFunc_GetMousePosition_LocationY = CallFunc_GetMousePosition_LocationY;
	Parms.CallFunc_GetMousePosition_ReturnValue = CallFunc_GetMousePosition_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_CloseInventory_ReturnValue = CallFunc_CloseInventory_ReturnValue;
	Parms.K2Node_Event_Tag = K2Node_Event_Tag;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


