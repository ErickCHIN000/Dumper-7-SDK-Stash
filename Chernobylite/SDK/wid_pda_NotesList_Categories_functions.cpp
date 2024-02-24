#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_NotesList_Categories.wid_pda_NotesList_Categories_C
// (None)

class UClass* UWid_pda_NotesList_Categories_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_NotesList_Categories_C");

	return Clss;
}


// wid_pda_NotesList_Categories_C wid_pda_NotesList_Categories.Default__wid_pda_NotesList_Categories_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_NotesList_Categories_C* UWid_pda_NotesList_Categories_C::GetDefaultObj()
{
	static class UWid_pda_NotesList_Categories_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_NotesList_Categories_C*>(UWid_pda_NotesList_Categories_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_NotesList_Categories.wid_pda_NotesList_Categories_C.SetContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SkillName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        SkillDesc                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_FormatText_Output                                       (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_NotesList_Categories_C::SetContent(class FText SkillName, class FText SkillDesc, class UTexture2D* Texture, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_FormatText_Output, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_Categories_C", "SetContent");

	Params::UWid_pda_NotesList_Categories_C_SetContent_Params Parms{};

	Parms.SkillName = SkillName;
	Parms.SkillDesc = SkillDesc;
	Parms.Texture = Texture;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


