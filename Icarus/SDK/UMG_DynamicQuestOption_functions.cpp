#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DynamicQuestOption.UMG_DynamicQuestOption_C
// (None)

class UClass* UUMG_DynamicQuestOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DynamicQuestOption_C");

	return Clss;
}


// UMG_DynamicQuestOption_C UMG_DynamicQuestOption.Default__UMG_DynamicQuestOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DynamicQuestOption_C* UUMG_DynamicQuestOption_C::GetDefaultObj()
{
	static class UUMG_DynamicQuestOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DynamicQuestOption_C*>(UUMG_DynamicQuestOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DynamicQuestOption.UMG_DynamicQuestOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_DynamicQuestOption_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DynamicQuestOption_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DynamicQuestOption.UMG_DynamicQuestOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DynamicQuestOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DynamicQuestOption_C", "PreConstruct");

	Params::UUMG_DynamicQuestOption_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DynamicQuestOption.UMG_DynamicQuestOption_C.BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DynamicQuestOption_C::BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DynamicQuestOption_C", "BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_DynamicQuestOption_C_BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DynamicQuestOption.UMG_DynamicQuestOption_C.ExecuteUbergraph_UMG_DynamicQuestOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDynamicQuestDifficulty Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// enum class EDynamicQuestDifficulty Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuest               CallFunc_GetDynamicQuestsStruct_DynamicQuests                    (None)
// enum class EValid                  CallFunc_GetDynamicQuestsStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)

void UUMG_DynamicQuestOption_C::ExecuteUbergraph_UMG_DynamicQuestOption(int32 EntryPoint, enum class EDynamicQuestDifficulty Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, enum class EDynamicQuestDifficulty Temp_byte_Variable_1, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, bool K2Node_Event_IsDesignTime, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, const struct FDynamicQuest& CallFunc_GetDynamicQuestsStruct_DynamicQuests, enum class EValid CallFunc_GetDynamicQuestsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DynamicQuestOption_C", "ExecuteUbergraph_UMG_DynamicQuestOption");

	Params::UUMG_DynamicQuestOption_C_ExecuteUbergraph_UMG_DynamicQuestOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetDynamicQuestsStruct_DynamicQuests = CallFunc_GetDynamicQuestsStruct_DynamicQuests;
	Parms.CallFunc_GetDynamicQuestsStruct_Paths = CallFunc_GetDynamicQuestsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DynamicQuestOption.UMG_DynamicQuestOption_C.QuestSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestsRowHandle     Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_DynamicQuestOption_C::QuestSelected__DelegateSignature(const struct FDynamicQuestsRowHandle& Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DynamicQuestOption_C", "QuestSelected__DelegateSignature");

	Params::UUMG_DynamicQuestOption_C_QuestSelected__DelegateSignature_Params Parms{};

	Parms.Quest = Quest;

	UObject::ProcessEvent(Func, &Parms);

}

}


