#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_QuestObjectiveText.WBP_QuestObjectiveText_C
// (None)

class UClass* UWBP_QuestObjectiveText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_QuestObjectiveText_C");

	return Clss;
}


// WBP_QuestObjectiveText_C WBP_QuestObjectiveText.Default__WBP_QuestObjectiveText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_QuestObjectiveText_C* UWBP_QuestObjectiveText_C::GetDefaultObj()
{
	static class UWBP_QuestObjectiveText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_QuestObjectiveText_C*>(UWBP_QuestObjectiveText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_QuestObjectiveText.WBP_QuestObjectiveText_C.SetCompletion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Complete                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestObjectiveText_C::SetCompletion(bool Complete, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* K2Node_Select_Default, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestObjectiveText_C", "SetCompletion");

	Params::UWBP_QuestObjectiveText_C_SetCompletion_Params Parms{};

	Parms.Complete = Complete;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestObjectiveText.WBP_QuestObjectiveText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_QuestObjectiveText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestObjectiveText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuestObjectiveText.WBP_QuestObjectiveText_C.ExecuteUbergraph_WBP_QuestObjectiveText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestObjectiveText_C::ExecuteUbergraph_WBP_QuestObjectiveText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestObjectiveText_C", "ExecuteUbergraph_WBP_QuestObjectiveText");

	Params::UWBP_QuestObjectiveText_C_ExecuteUbergraph_WBP_QuestObjectiveText_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


