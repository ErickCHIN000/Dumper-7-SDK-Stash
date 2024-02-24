#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TalentTooltip_Group.UMG_TalentTooltip_Group_C
// (None)

class UClass* UUMG_TalentTooltip_Group_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TalentTooltip_Group_C");

	return Clss;
}


// UMG_TalentTooltip_Group_C UMG_TalentTooltip_Group.Default__UMG_TalentTooltip_Group_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TalentTooltip_Group_C* UUMG_TalentTooltip_Group_C::GetDefaultObj()
{
	static class UUMG_TalentTooltip_Group_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TalentTooltip_Group_C*>(UUMG_TalentTooltip_Group_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TalentTooltip_Group.UMG_TalentTooltip_Group_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentTooltip_Group_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTooltip_Group_C", "PreConstruct");

	Params::UUMG_TalentTooltip_Group_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTooltip_Group.UMG_TalentTooltip_Group_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TalentTooltip_Group_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTooltip_Group_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentTooltip_Group.UMG_TalentTooltip_Group_C.OnTalentSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TalentTooltip_Group_C::OnTalentSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTooltip_Group_C", "OnTalentSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentTooltip_Group.UMG_TalentTooltip_Group_C.ExecuteUbergraph_UMG_TalentTooltip_Group
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FTalentsRowHandleFTalentsRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProcessorRecipesRowHandle  CallFunc_GetTalentRecipeSlow_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProcessorRecipe            CallFunc_GetProcessorRecipesStruct_ProcessorRecipes              (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetProcessorRecipesStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRecipeSetsRowHandle        CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRecipeSet                  CallFunc_GetRecipeSetsStruct_RecipeSets                          (None)
// enum class EValid                  CallFunc_GetRecipeSetsStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentTooltip_Group_C::ExecuteUbergraph_UMG_TalentTooltip_Group(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_FTalentsRowHandleFTalentsRowHandle_ReturnValue, const struct FProcessorRecipesRowHandle& CallFunc_GetTalentRecipeSlow_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FRecipeSetsRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FRecipeSet& CallFunc_GetRecipeSetsStruct_RecipeSets, enum class EValid CallFunc_GetRecipeSetsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTooltip_Group_C", "ExecuteUbergraph_UMG_TalentTooltip_Group");

	Params::UUMG_TalentTooltip_Group_C_ExecuteUbergraph_UMG_TalentTooltip_Group_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_EqualEqual_FTalentsRowHandleFTalentsRowHandle_ReturnValue = CallFunc_EqualEqual_FTalentsRowHandleFTalentsRowHandle_ReturnValue;
	Parms.CallFunc_GetTalentRecipeSlow_ReturnValue = CallFunc_GetTalentRecipeSlow_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetProcessorRecipesStruct_ProcessorRecipes = CallFunc_GetProcessorRecipesStruct_ProcessorRecipes;
	Parms.CallFunc_GetProcessorRecipesStruct_Paths = CallFunc_GetProcessorRecipesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetRecipeSetsStruct_RecipeSets = CallFunc_GetRecipeSetsStruct_RecipeSets;
	Parms.CallFunc_GetRecipeSetsStruct_Paths = CallFunc_GetRecipeSetsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


