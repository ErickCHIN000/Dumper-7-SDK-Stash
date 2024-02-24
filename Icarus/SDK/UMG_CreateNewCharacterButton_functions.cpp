#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C
// (None)

class UClass* UUMG_CreateNewCharacterButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CreateNewCharacterButton_C");

	return Clss;
}


// UMG_CreateNewCharacterButton_C UMG_CreateNewCharacterButton.Default__UMG_CreateNewCharacterButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CreateNewCharacterButton_C* UUMG_CreateNewCharacterButton_C::GetDefaultObj()
{
	static class UUMG_CreateNewCharacterButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CreateNewCharacterButton_C*>(UUMG_CreateNewCharacterButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.HoveredStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

void UUMG_CreateNewCharacterButton_C::HoveredStyle(bool Temp_bool_Variable, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CreateNewCharacterButton_C", "HoveredStyle");

	Params::UUMG_CreateNewCharacterButton_C_HoveredStyle_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Drop_Progress                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UUMG_CreateNewCharacterButton_C::Initialize(const class FString& Name, int32 Level, const class FString& Drop_Progress, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CreateNewCharacterButton_C", "Initialize");

	Params::UUMG_CreateNewCharacterButton_C_Initialize_Params Parms{};

	Parms.Name = Name;
	Parms.Level = Level;
	Parms.Drop_Progress = Drop_Progress;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_CreateNewCharacterButton_C::BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CreateNewCharacterButton_C", "BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_CreateNewCharacterButton_C::BndEvt__ButtonBase_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CreateNewCharacterButton_C", "BndEvt__ButtonBase_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_CreateNewCharacterButton_C::BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CreateNewCharacterButton_C", "BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.ExecuteUbergraph_UMG_CreateNewCharacterButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CreateNewCharacterButton_C::ExecuteUbergraph_UMG_CreateNewCharacterButton(int32 EntryPoint, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CreateNewCharacterButton_C", "ExecuteUbergraph_UMG_CreateNewCharacterButton");

	Params::UUMG_CreateNewCharacterButton_C_ExecuteUbergraph_UMG_CreateNewCharacterButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.DeleteCharacter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_CharacterProfileSlot_C* Delete                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CreateNewCharacterButton_C::DeleteCharacter__DelegateSignature(class UUMG_CharacterProfileSlot_C* Delete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CreateNewCharacterButton_C", "DeleteCharacter__DelegateSignature");

	Params::UUMG_CreateNewCharacterButton_C_DeleteCharacter__DelegateSignature_Params Parms{};

	Parms.Delete = Delete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_CreateNewCharacterButton_C*Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CreateNewCharacterButton_C::ButtonClicked__DelegateSignature(class UUMG_CreateNewCharacterButton_C* Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CreateNewCharacterButton_C", "ButtonClicked__DelegateSignature");

	Params::UUMG_CreateNewCharacterButton_C_ButtonClicked__DelegateSignature_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

}

}


