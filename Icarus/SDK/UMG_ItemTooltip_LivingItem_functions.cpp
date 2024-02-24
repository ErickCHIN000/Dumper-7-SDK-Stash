#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ItemTooltip_LivingItem.UMG_ItemTooltip_LivingItem_C
// (None)

class UClass* UUMG_ItemTooltip_LivingItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ItemTooltip_LivingItem_C");

	return Clss;
}


// UMG_ItemTooltip_LivingItem_C UMG_ItemTooltip_LivingItem.Default__UMG_ItemTooltip_LivingItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ItemTooltip_LivingItem_C* UUMG_ItemTooltip_LivingItem_C::GetDefaultObj()
{
	static class UUMG_ItemTooltip_LivingItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ItemTooltip_LivingItem_C*>(UUMG_ItemTooltip_LivingItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ItemTooltip_LivingItem.UMG_ItemTooltip_LivingItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ItemTooltip_LivingItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemTooltip_LivingItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ItemTooltip_LivingItem.UMG_ItemTooltip_LivingItem_C.TrySetupChallengeInfo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLivingItemSlotState        LivingItemSlotState                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_ItemTooltip_LivingItem_C::TrySetupChallengeInfo(struct FLivingItemSlotState& LivingItemSlotState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemTooltip_LivingItem_C", "TrySetupChallengeInfo");

	Params::UUMG_ItemTooltip_LivingItem_C_TrySetupChallengeInfo_Params Parms{};

	Parms.LivingItemSlotState = LivingItemSlotState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ItemTooltip_LivingItem.UMG_ItemTooltip_LivingItem_C.ExecuteUbergraph_UMG_ItemTooltip_LivingItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLivingItemSlotState>CallFunc_GetLivingItemSlotStates_Slots                           (ReferenceParm)
// bool                               CallFunc_GetLivingItemSlotStates_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLivingItemSlotState        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUMG_BioLab_UpgradeSlotMain_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UUMG_BioLab_UpgradeSlotMain_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLivingItemSlotState        K2Node_CustomEvent_LivingItemSlotState                           (ConstParm)
// struct FChallenge                  CallFunc_GetChallengesStruct_Challenges                          (None)
// enum class EValid                  CallFunc_GetChallengesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_ItemTooltip_LivingItem_C::ExecuteUbergraph_UMG_ItemTooltip_LivingItem(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FLivingItemSlotState>& CallFunc_GetLivingItemSlotStates_Slots, bool CallFunc_GetLivingItemSlotStates_ReturnValue, const struct FLivingItemSlotState& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class UUMG_BioLab_UpgradeSlotMain_C*>& K2Node_MakeArray_Array, class UUMG_BioLab_UpgradeSlotMain_C* CallFunc_Array_Get_Item_1, class UPanelWidget* CallFunc_GetParent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FLivingItemSlotState& K2Node_CustomEvent_LivingItemSlotState, const struct FChallenge& CallFunc_GetChallengesStruct_Challenges, enum class EValid CallFunc_GetChallengesStruct_Paths, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemTooltip_LivingItem_C", "ExecuteUbergraph_UMG_ItemTooltip_LivingItem");

	Params::UUMG_ItemTooltip_LivingItem_C_ExecuteUbergraph_UMG_ItemTooltip_LivingItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLivingItemSlotStates_Slots = CallFunc_GetLivingItemSlotStates_Slots;
	Parms.CallFunc_GetLivingItemSlotStates_ReturnValue = CallFunc_GetLivingItemSlotStates_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_LivingItemSlotState = K2Node_CustomEvent_LivingItemSlotState;
	Parms.CallFunc_GetChallengesStruct_Challenges = CallFunc_GetChallengesStruct_Challenges;
	Parms.CallFunc_GetChallengesStruct_Paths = CallFunc_GetChallengesStruct_Paths;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


