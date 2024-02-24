#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AnimQuestAdded.AnimQuestAdded_C
// (None)

class UClass* UAnimQuestAdded_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimQuestAdded_C");

	return Clss;
}


// AnimQuestAdded_C AnimQuestAdded.Default__AnimQuestAdded_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimQuestAdded_C* UAnimQuestAdded_C::GetDefaultObj()
{
	static class UAnimQuestAdded_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimQuestAdded_C*>(UAnimQuestAdded_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimQuestAdded.AnimQuestAdded_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAnimQuestAdded_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimQuestAdded_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimQuestAdded.AnimQuestAdded_C.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)
// Parameters:

void UAnimQuestAdded_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimQuestAdded_C", "OnSynchronizeProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimQuestAdded.AnimQuestAdded_C.DrawText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnimQuestAdded_C::DrawText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimQuestAdded_C", "DrawText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimQuestAdded.AnimQuestAdded_C.UpdateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        QuestName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              Exp                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimQuestAdded_C::UpdateAnim(class FText QuestName, float Exp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimQuestAdded_C", "UpdateAnim");

	Params::UAnimQuestAdded_C_UpdateAnim_Params Parms{};

	Parms.QuestName = QuestName;
	Parms.Exp = Exp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimQuestAdded.AnimQuestAdded_C.ExecuteUbergraph_AnimQuestAdded
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        K2Node_CustomEvent_QuestName                                     (None)
// float                              K2Node_CustomEvent_Exp                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMapping_Bindings                               (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_GetKeyUIName_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimQuestAdded_C::ExecuteUbergraph_AnimQuestAdded(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText K2Node_CustomEvent_QuestName, float K2Node_CustomEvent_Exp, class FText CallFunc_TextToUpper_ReturnValue_1, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMapping_Bindings, class FName CallFunc_GetKeyUIName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimQuestAdded_C", "ExecuteUbergraph_AnimQuestAdded");

	Params::UAnimQuestAdded_C_ExecuteUbergraph_AnimQuestAdded_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_CustomEvent_QuestName = K2Node_CustomEvent_QuestName;
	Parms.K2Node_CustomEvent_Exp = K2Node_CustomEvent_Exp;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_GetActionMapping_Bindings = CallFunc_GetActionMapping_Bindings;
	Parms.CallFunc_GetKeyUIName_ReturnValue = CallFunc_GetKeyUIName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


