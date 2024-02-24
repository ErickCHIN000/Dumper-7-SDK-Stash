#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_NotesList_Skills.wid_pda_NotesList_Skills_C
// (None)

class UClass* UWid_pda_NotesList_Skills_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_NotesList_Skills_C");

	return Clss;
}


// wid_pda_NotesList_Skills_C wid_pda_NotesList_Skills.Default__wid_pda_NotesList_Skills_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_NotesList_Skills_C* UWid_pda_NotesList_Skills_C::GetDefaultObj()
{
	static class UWid_pda_NotesList_Skills_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_NotesList_Skills_C*>(UWid_pda_NotesList_Skills_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_NotesList_Skills.wid_pda_NotesList_Skills_C.SetContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SkillName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        SkillDesc                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatText_Output                                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWid_pda_NotesList_Skills_C::SetContent(class FText SkillName, class FText SkillDesc, class UTexture2D* Texture, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FText CallFunc_FormatText_Output, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UTexture2D* Temp_object_Variable, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, class UTexture2D* K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_Skills_C", "SetContent");

	Params::UWid_pda_NotesList_Skills_C_SetContent_Params Parms{};

	Parms.SkillName = SkillName;
	Parms.SkillDesc = SkillDesc;
	Parms.Texture = Texture;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


