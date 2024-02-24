#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_NotesList_Tasks.wid_pda_NotesList_Tasks_C
// (None)

class UClass* UWid_pda_NotesList_Tasks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_NotesList_Tasks_C");

	return Clss;
}


// wid_pda_NotesList_Tasks_C wid_pda_NotesList_Tasks.Default__wid_pda_NotesList_Tasks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_NotesList_Tasks_C* UWid_pda_NotesList_Tasks_C::GetDefaultObj()
{
	static class UWid_pda_NotesList_Tasks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_NotesList_Tasks_C*>(UWid_pda_NotesList_Tasks_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_NotesList_Tasks.wid_pda_NotesList_Tasks_C.SetContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Desc                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_NotesList_Tasks_C::SetContent(class FText Title, class FText Desc, class UTexture2D* Texture, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const class FString& CallFunc_Replace_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_Tasks_C", "SetContent");

	Params::UWid_pda_NotesList_Tasks_C_SetContent_Params Parms{};

	Parms.Title = Title;
	Parms.Desc = Desc;
	Parms.Texture = Texture;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


