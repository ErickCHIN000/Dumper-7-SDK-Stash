#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_QuestRewardOption.UMG_QuestRewardOption_C
// (None)

class UClass* UUMG_QuestRewardOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_QuestRewardOption_C");

	return Clss;
}


// UMG_QuestRewardOption_C UMG_QuestRewardOption.Default__UMG_QuestRewardOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_QuestRewardOption_C* UUMG_QuestRewardOption_C::GetDefaultObj()
{
	static class UUMG_QuestRewardOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_QuestRewardOption_C*>(UUMG_QuestRewardOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_QuestRewardOption.UMG_QuestRewardOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_QuestRewardOption_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestRewardOption_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_QuestRewardOption.UMG_QuestRewardOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_QuestRewardOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestRewardOption_C", "PreConstruct");

	Params::UUMG_QuestRewardOption_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_QuestRewardOption.UMG_QuestRewardOption_C.BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_QuestRewardOption_C::BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestRewardOption_C", "BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_QuestRewardOption_C_BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_QuestRewardOption.UMG_QuestRewardOption_C.ExecuteUbergraph_UMG_QuestRewardOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDynamicQuestDifficulty CallFunc_GetDynamicQuestDifficulty_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_QuestRewardItem_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDynamicQuestDifficulty Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_QuestRewardItem_C*      CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestReward         CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards        (None)
// enum class EValid                  CallFunc_GetDynamicQuestRewardsStruct_Paths                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FRewardItemEntry>    CallFunc_GetItemsFromSeed_RewardItems                            (ReferenceParm)
// TArray<bool>                       CallFunc_GetItemsFromSeed_Scale                                  (ReferenceParm)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRewardItemEntry            CallFunc_Array_Get_Item_1                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_QuestRewardOption_C::ExecuteUbergraph_UMG_QuestRewardOption(int32 EntryPoint, enum class EDynamicQuestDifficulty CallFunc_GetDynamicQuestDifficulty_ReturnValue, class UUMG_QuestRewardItem_C* CallFunc_Create_ReturnValue, enum class EDynamicQuestDifficulty Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Array_Index_Variable, float K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, class UUMG_QuestRewardItem_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, const struct FDynamicQuestReward& CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards, enum class EValid CallFunc_GetDynamicQuestRewardsStruct_Paths, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FRewardItemEntry>& CallFunc_GetItemsFromSeed_RewardItems, TArray<bool>& CallFunc_GetItemsFromSeed_Scale, bool CallFunc_Array_Get_Item, const struct FRewardItemEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestRewardOption_C", "ExecuteUbergraph_UMG_QuestRewardOption");

	Params::UUMG_QuestRewardOption_C_ExecuteUbergraph_UMG_QuestRewardOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicQuestDifficulty_ReturnValue = CallFunc_GetDynamicQuestDifficulty_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards = CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards;
	Parms.CallFunc_GetDynamicQuestRewardsStruct_Paths = CallFunc_GetDynamicQuestRewardsStruct_Paths;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemsFromSeed_RewardItems = CallFunc_GetItemsFromSeed_RewardItems;
	Parms.CallFunc_GetItemsFromSeed_Scale = CallFunc_GetItemsFromSeed_Scale;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_QuestRewardOption.UMG_QuestRewardOption_C.QuestRewardSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestRewardsRowHandleQuestReward                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_QuestRewardOption_C::QuestRewardSelected__DelegateSignature(const struct FDynamicQuestRewardsRowHandle& QuestReward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestRewardOption_C", "QuestRewardSelected__DelegateSignature");

	Params::UUMG_QuestRewardOption_C_QuestRewardSelected__DelegateSignature_Params Parms{};

	Parms.QuestReward = QuestReward;

	UObject::ProcessEvent(Func, &Parms);

}

}


